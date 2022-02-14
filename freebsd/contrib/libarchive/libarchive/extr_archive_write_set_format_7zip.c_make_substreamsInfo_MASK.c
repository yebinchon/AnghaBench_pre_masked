
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct file {scalar_t__ size; int crc32; struct file* next; } ;
struct coder {scalar_t__ codec; } ;
struct archive_write {scalar_t__ format_data; } ;
struct TYPE_2__ {struct file* first; } ;
struct _7zip {int total_number_nonempty_entry; TYPE_1__ file_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct archive_write*,int *,int,int ) ;
 int FUNC_2 (struct archive_write*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_8, struct coder *VAR_9)
{
 struct _7zip *VAR_10 = (struct _7zip *)VAR_8->format_data;
 struct file *VAR_11;
 int VAR_12;




 VAR_12 = FUNC_2(VAR_8, VAR_7);
 if (VAR_12 < 0)
  return (VAR_12);

 if (VAR_10->total_number_nonempty_entry > 1 && VAR_9->codec != VAR_2) {



  VAR_12 = FUNC_2(VAR_8, VAR_5);
  if (VAR_12 < 0)
   return (VAR_12);


  VAR_12 = FUNC_2(VAR_8, VAR_10->total_number_nonempty_entry);
  if (VAR_12 < 0)
   return (VAR_12);




  VAR_12 = FUNC_2(VAR_8, VAR_6);
  if (VAR_12 < 0)
   return (VAR_12);
  VAR_11 = VAR_10->file_list.first;
  for (;VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
   if (VAR_11->next == ((void*)0) ||
       VAR_11->next->size == 0)
    break;
   VAR_12 = FUNC_2(VAR_8, VAR_11->size);
   if (VAR_12 < 0)
    return (VAR_12);
  }
 }




 VAR_12 = FUNC_2(VAR_8, VAR_3);
 if (VAR_12 < 0)
  return (VAR_12);



 VAR_12 = FUNC_2(VAR_8, 1);
 if (VAR_12 < 0)
  return (VAR_12);
 VAR_11 = VAR_10->file_list.first;
 for (;VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
  uint8_t VAR_13[4];
  if (VAR_11->size == 0)
   break;
  FUNC_0(VAR_13, VAR_11->crc32);
  VAR_12 = (int)FUNC_1(VAR_8, VAR_13, 4, VAR_1);
  if (VAR_12 < 0)
   return (VAR_12);
 }


 VAR_12 = FUNC_2(VAR_8, VAR_4);
 if (VAR_12 < 0)
  return (VAR_12);
 return (VAR_0);
}
