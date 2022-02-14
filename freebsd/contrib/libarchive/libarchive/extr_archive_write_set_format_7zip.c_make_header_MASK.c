
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct file {scalar_t__ size; int* utf16name; int name_len; int mode; scalar_t__ dir; struct file* next; } ;
struct coder {int dummy; } ;
struct archive_write {scalar_t__ format_data; } ;
struct TYPE_2__ {struct file* first; } ;
struct _7zip {int total_number_entry; int total_number_empty_entry; int total_number_dir_entry; int total_bytes_entry_name; TYPE_1__ file_list; scalar_t__ total_number_nonempty_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (struct archive_write*,int*,int,int ) ;
 int FUNC_2 (struct archive_write*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct archive_write*,int ,int ,int ,int,struct coder*,int,int ) ;
 int FUNC_4 (struct archive_write*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct archive_write *VAR_19, uint64_t VAR_20, uint64_t VAR_21,
    uint64_t VAR_22, int VAR_23, struct coder *VAR_24)
{
 struct _7zip *VAR_25 = (struct _7zip *)VAR_19->format_data;
 struct file *VAR_26;
 int VAR_27;
 uint8_t VAR_28, VAR_29;




 VAR_27 = FUNC_2(VAR_19, VAR_15);
 if (VAR_27 < 0)
  return (VAR_27);




 if (VAR_25->total_number_nonempty_entry) {



  VAR_27 = FUNC_2(VAR_19, VAR_17);
  if (VAR_27 < 0)
   return (VAR_27);
  VAR_27 = FUNC_3(VAR_19, VAR_20, VAR_21, VAR_22,
        VAR_23, VAR_24, 1, 0);
  if (VAR_27 < 0)
   return (VAR_27);
 }




 VAR_27 = FUNC_2(VAR_19, VAR_14);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, VAR_25->total_number_entry);
 if (VAR_27 < 0)
  return (VAR_27);

 if (VAR_25->total_number_empty_entry > 0) {

  VAR_27 = FUNC_2(VAR_19, VAR_12);
  if (VAR_27 < 0)
   return (VAR_27);


  VAR_27 = FUNC_2(VAR_19, (VAR_25->total_number_entry+7)>>3);
  if (VAR_27 < 0)
   return (VAR_27);

  VAR_28 = 0;
  VAR_29 = 0x80;
  VAR_26 = VAR_25->file_list.first;
  for (;VAR_26 != ((void*)0); VAR_26 = VAR_26->next) {
   if (VAR_26->size == 0)
    VAR_28 |= VAR_29;
   VAR_29 >>= 1;
   if (VAR_29 == 0) {
    VAR_27 = (int)FUNC_1(VAR_19, &VAR_28, 1, VAR_1);
    if (VAR_27 < 0)
     return (VAR_27);
    VAR_29 = 0x80;
    VAR_28 = 0;
   }
  }
  if (VAR_29 != 0x80) {
   VAR_27 = (int)FUNC_1(VAR_19, &VAR_28, 1, VAR_1);
   if (VAR_27 < 0)
    return (VAR_27);
  }
 }

 if (VAR_25->total_number_empty_entry > VAR_25->total_number_dir_entry) {

  VAR_27 = FUNC_2(VAR_19, VAR_11);
  if (VAR_27 < 0)
   return (VAR_27);


  VAR_27 = FUNC_2(VAR_19, (VAR_25->total_number_empty_entry + 7) >> 3);
  if (VAR_27 < 0)
   return (VAR_27);

  VAR_28 = 0;
  VAR_29 = 0x80;
  VAR_26 = VAR_25->file_list.first;
  for (;VAR_26 != ((void*)0); VAR_26 = VAR_26->next) {
   if (VAR_26->size)
    continue;
   if (!VAR_26->dir)
    VAR_28 |= VAR_29;
   VAR_29 >>= 1;
   if (VAR_29 == 0) {
    VAR_27 = (int)FUNC_1(VAR_19, &VAR_28, 1, VAR_1);
    if (VAR_27 < 0)
     return (VAR_27);
    VAR_29 = 0x80;
    VAR_28 = 0;
   }
  }
  if (VAR_29 != 0x80) {
   VAR_27 = (int)FUNC_1(VAR_19, &VAR_28, 1, VAR_1);
   if (VAR_27 < 0)
    return (VAR_27);
  }
 }


 VAR_27 = FUNC_2(VAR_19, VAR_18);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, VAR_25->total_bytes_entry_name+1);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, 0);
 if (VAR_27 < 0)
  return (VAR_27);

 VAR_26 = VAR_25->file_list.first;
 for (;VAR_26 != ((void*)0); VAR_26 = VAR_26->next) {
  VAR_27 = (int)FUNC_1(VAR_19, VAR_26->utf16name, VAR_26->name_len+2,
   VAR_1);
  if (VAR_27 < 0)
   return (VAR_27);
 }


 VAR_27 = FUNC_4(VAR_19, VAR_16, VAR_7, VAR_6);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_4(VAR_19, VAR_10, VAR_5, VAR_4);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_4(VAR_19, VAR_8, VAR_3, VAR_2);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, VAR_9);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, 2 + VAR_25->total_number_entry * 4);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, 1);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, 0);
 if (VAR_27 < 0)
  return (VAR_27);

 VAR_26 = VAR_25->file_list.first;
 for (;VAR_26 != ((void*)0); VAR_26 = VAR_26->next) {




  uint32_t VAR_30, VAR_31;
  if (VAR_26->dir)
   VAR_31 = 0x8010;
  else
   VAR_31 = 0x8020;
  if ((VAR_26->mode & 0222) == 0)
   VAR_31 |= 1;
  VAR_31 |= ((uint32_t)VAR_26->mode) << 16;
  FUNC_0(&VAR_30, VAR_31);
  VAR_27 = (int)FUNC_1(VAR_19, &VAR_30, 4, VAR_1);
  if (VAR_27 < 0)
   return (VAR_27);
 }


 VAR_27 = FUNC_2(VAR_19, VAR_13);
 if (VAR_27 < 0)
  return (VAR_27);


 VAR_27 = FUNC_2(VAR_19, VAR_13);
 if (VAR_27 < 0)
  return (VAR_27);

 return (VAR_0);
}
