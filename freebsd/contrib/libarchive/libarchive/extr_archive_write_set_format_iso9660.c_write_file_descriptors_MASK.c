
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ blocks; scalar_t__ offset_of_temp; struct TYPE_8__* next; } ;
struct isofile {TYPE_4__* cur_content; TYPE_4__ content; int write_content; struct isofile* datanext; } ;
struct TYPE_7__ {struct isofile* first; } ;
struct TYPE_6__ {TYPE_1__* boot; int * catalog; } ;
struct iso9660 {TYPE_3__ data_file_list; TYPE_2__ el_torito; } ;
struct archive_write {struct iso9660* format_data; } ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {struct isofile* file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct archive_write*) ;
 int FUNC_1 (struct archive_write*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_2)
{
 struct iso9660 *VAR_3 = VAR_2->format_data;
 struct isofile *VAR_4;
 int64_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = 0;
 VAR_6 = 0;


 if (VAR_3->el_torito.catalog != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_2);
  if (VAR_7 < 0)
   return (VAR_7);
 }


 if (VAR_3->el_torito.boot != ((void*)0)) {
  VAR_4 = VAR_3->el_torito.boot->file;
  VAR_5 = VAR_4->content.blocks;
  VAR_6 = VAR_4->content.offset_of_temp;
  if (VAR_6 != 0) {
   VAR_7 = FUNC_1(VAR_2, VAR_6,
       VAR_5 << VAR_1);
   if (VAR_7 < 0)
    return (VAR_7);
   VAR_5 = 0;
   VAR_6 = 0;
  }
 }


 for (VAR_4 = VAR_3->data_file_list.first;
     VAR_4 != ((void*)0); VAR_4 = VAR_4->datanext) {

  if (!VAR_4->write_content)
   continue;

  if ((VAR_6 + (VAR_5 << VAR_1)) <
       VAR_4->content.offset_of_temp) {
   if (VAR_5 > 0) {
    VAR_7 = FUNC_1(VAR_2, VAR_6,
        VAR_5 << VAR_1);
    if (VAR_7 < 0)
     return (VAR_7);
   }
   VAR_5 = 0;
   VAR_6 = VAR_4->content.offset_of_temp;
  }

  VAR_4->cur_content = &(VAR_4->content);
  do {
   VAR_5 += VAR_4->cur_content->blocks;

   VAR_4->cur_content = VAR_4->cur_content->next;
  } while (VAR_4->cur_content != ((void*)0));
 }


 if (VAR_5 > 0) {
  VAR_7 = FUNC_1(VAR_2, VAR_6,
      VAR_5 << VAR_1);
  if (VAR_7 < 0)
   return (VAR_7);
 }

 return (VAR_0);
}
