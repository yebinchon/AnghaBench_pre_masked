
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vdd {scalar_t__ vdd_type; int max_depth; struct isoent* rootent; } ;
struct TYPE_8__ {struct isoent* first; } ;
struct TYPE_7__ {scalar_t__ cnt; int * first; } ;
struct isoent {struct isoent* drnext; struct isoent* parent; TYPE_4__ subdirs; TYPE_3__ children; TYPE_1__* file; scalar_t__ virtual; } ;
struct TYPE_6__ {int rr; } ;
struct iso9660 {struct isoent* directories_too_deep; TYPE_2__ opt; int birth_time; } ;
struct idr {int dummy; } ;
struct archive_write {struct iso9660* format_data; } ;
struct TYPE_5__ {int entry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct idr*) ;
 int FUNC_5 (struct iso9660*,struct vdd*,struct idr*) ;
 int FUNC_6 (struct archive_write*,struct isoent*,struct idr*) ;
 int FUNC_7 (struct archive_write*,struct isoent*,struct idr*) ;
 int FUNC_8 (struct archive_write*,struct isoent*,struct idr*) ;

__attribute__((used)) static int
FUNC_9(struct archive_write *VAR_2, struct vdd* VAR_3)
{
 struct iso9660 *VAR_4 = VAR_2->format_data;
 struct isoent *VAR_5;
 struct idr VAR_6;
 int VAR_7;
 int VAR_8;
 int (*VAR_9)(struct archive_write *, struct isoent *, struct idr *);

 FUNC_5(VAR_4, VAR_3, &VAR_6);
 VAR_5 = VAR_3->rootent;
 VAR_7 = 0;
 if (VAR_3->vdd_type == VAR_1)
  VAR_9 = FUNC_7;
 else
  VAR_9 = FUNC_6;
 do {
  if (VAR_5->virtual &&
      !FUNC_0(VAR_5->file->entry)) {

   FUNC_3(VAR_5->file->entry,
       VAR_4->birth_time, 0);
   FUNC_1(VAR_5->file->entry,
       VAR_4->birth_time, 0);
   FUNC_2(VAR_5->file->entry,
       VAR_4->birth_time, 0);
  }
  if (VAR_5->children.first != ((void*)0)) {
   if (VAR_3->vdd_type != VAR_1 &&
       !VAR_4->opt.rr && VAR_7 + 1 >= VAR_3->max_depth) {
    if (VAR_5->children.cnt > 0)
     VAR_4->directories_too_deep = VAR_5;
   } else {

    VAR_8 = VAR_9(VAR_2, VAR_5, &VAR_6);
    if (VAR_8 < 0)
     goto exit_traverse_tree;
    VAR_8 = FUNC_8(VAR_2, VAR_5, &VAR_6);
    if (VAR_8 < 0)
     goto exit_traverse_tree;

    if (VAR_5->subdirs.first != ((void*)0) &&
        VAR_7 + 1 < VAR_3->max_depth) {

     VAR_5 = VAR_5->subdirs.first;
     VAR_7++;
     continue;
    }
   }
  }
  while (VAR_5 != VAR_5->parent) {
   if (VAR_5->drnext == ((void*)0)) {

    VAR_5 = VAR_5->parent;
    VAR_7--;
   } else {
    VAR_5 = VAR_5->drnext;
    break;
   }
  }
 } while (VAR_5 != VAR_5->parent);

 VAR_8 = VAR_0;
exit_traverse_tree:
 FUNC_4(&VAR_6);

 return (VAR_8);
}
