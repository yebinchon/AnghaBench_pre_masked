
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int location; struct TYPE_18__* next; scalar_t__ blocks; } ;
struct isofile {TYPE_9__* cur_content; TYPE_9__ content; int write_content; struct isofile* datanext; } ;
struct TYPE_16__ {struct isoent* first; } ;
struct isoent {struct isoent* drnext; struct isoent* parent; TYPE_7__ subdirs; TYPE_3__* file; } ;
struct TYPE_17__ {struct isofile* first; } ;
struct TYPE_15__ {int max_depth; struct isoent* rootent; } ;
struct TYPE_14__ {scalar_t__ rr; scalar_t__ joliet; } ;
struct TYPE_13__ {struct isoent* rootent; } ;
struct TYPE_10__ {int media_type; struct isoent* boot; struct isoent* catalog; } ;
struct iso9660 {scalar_t__ total_file_block; TYPE_8__ data_file_list; TYPE_6__ primary; TYPE_5__ opt; TYPE_4__ joliet; TYPE_1__ el_torito; } ;
struct TYPE_11__ {int location; int blocks; } ;
struct TYPE_12__ {TYPE_2__ content; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iso9660*,struct isoent*,int*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct iso9660 *VAR_3, int VAR_4)
{
 struct isoent *VAR_5;
 struct isoent *VAR_6;
 struct isofile *VAR_7;
 size_t VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_3->total_file_block = 0;
 if ((VAR_5 = VAR_3->el_torito.catalog) != ((void*)0)) {
  VAR_5->file->content.location = VAR_4;
  VAR_9 = (int)((FUNC_1(VAR_5->file->entry) +
      VAR_1 -1) >> VAR_0);
  VAR_4 += VAR_9;
  VAR_3->total_file_block += VAR_9;
 }
 if ((VAR_5 = VAR_3->el_torito.boot) != ((void*)0)) {
  VAR_5->file->content.location = VAR_4;
  VAR_8 = FUNC_2(VAR_3->el_torito.media_type);
  if (VAR_8 == 0)
   VAR_8 = (size_t)FUNC_1(VAR_5->file->entry);
  VAR_9 = ((int)VAR_8 + VAR_1 -1)
      >> VAR_0;
  VAR_4 += VAR_9;
  VAR_3->total_file_block += VAR_9;
  VAR_5->file->content.blocks = VAR_9;
 }

 VAR_10 = 0;
 VAR_12 = -16;
 if (!VAR_3->opt.rr && VAR_3->opt.joliet) {
  VAR_11 = 1;
  VAR_6 = VAR_3->joliet.rootent;
 } else {
  VAR_11 = 0;
  VAR_6 = VAR_3->primary.rootent;
 }
 do {
  FUNC_0(VAR_3, VAR_6, &VAR_12);

  if (VAR_6->subdirs.first != ((void*)0) &&
      (VAR_11 ||
      ((VAR_3->opt.rr == VAR_2 &&
        VAR_10 + 2 < VAR_3->primary.max_depth) ||
       (VAR_3->opt.rr &&
        VAR_10 + 1 < VAR_3->primary.max_depth)))) {

   VAR_6 = VAR_6->subdirs.first;
   VAR_10++;
   continue;
  }
  while (VAR_6 != VAR_6->parent) {
   if (VAR_6->drnext == ((void*)0)) {

    VAR_6 = VAR_6->parent;
    VAR_10--;
   } else {
    VAR_6 = VAR_6->drnext;
    break;
   }
  }
 } while (VAR_6 != VAR_6->parent);

 VAR_13 = 0;
 for (VAR_7 = VAR_3->data_file_list.first;
     VAR_7 != ((void*)0); VAR_7 = VAR_7->datanext) {

  if (!VAR_7->write_content)
   continue;

  VAR_7->cur_content = &(VAR_7->content);
  do {
   VAR_7->cur_content->location = VAR_4;
   VAR_4 += VAR_7->cur_content->blocks;
   VAR_13 += VAR_7->cur_content->blocks;

   VAR_7->cur_content = VAR_7->cur_content->next;
  } while (VAR_7->cur_content != ((void*)0));
 }
 VAR_3->total_file_block += VAR_13;
}
