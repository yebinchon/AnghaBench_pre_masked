
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct file {int size; struct file* next; } ;
struct coder {scalar_t__ codec; int prop_size; scalar_t__* props; } ;
struct archive_write {scalar_t__ format_data; } ;
struct TYPE_2__ {struct file* first; } ;
struct _7zip {TYPE_1__ file_list; scalar_t__ total_number_nonempty_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,unsigned int) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (struct archive_write*,scalar_t__*,int,int ) ;
 int FUNC_3 (struct archive_write*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct archive_write*,struct coder*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write *VAR_10, uint64_t VAR_11, uint64_t VAR_12,
    uint64_t VAR_13, int VAR_14, struct coder *VAR_15, int VAR_16,
    uint32_t VAR_17)
{
 struct _7zip *VAR_18 = (struct _7zip *)VAR_10->format_data;
 uint8_t VAR_19[8];
 int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23, VAR_24;

 if (VAR_15->codec == VAR_2)
  VAR_20 = (int)VAR_18->total_number_nonempty_entry;
 else
  VAR_20 = 1;




 VAR_24 = FUNC_3(VAR_10, VAR_7);
 if (VAR_24 < 0)
  return (VAR_24);


 VAR_24 = FUNC_3(VAR_10, VAR_11);
 if (VAR_24 < 0)
  return (VAR_24);


 VAR_24 = FUNC_3(VAR_10, VAR_20);
 if (VAR_24 < 0)
  return (VAR_24);


 VAR_24 = FUNC_3(VAR_10, VAR_8);
 if (VAR_24 < 0)
  return (VAR_24);

 if (VAR_20 > 1) {
  struct file *VAR_25 = VAR_18->file_list.first;
  for (;VAR_25 != ((void*)0); VAR_25 = VAR_25->next) {
   if (VAR_25->size == 0)
    break;
   VAR_24 = FUNC_3(VAR_10, VAR_25->size);
   if (VAR_24 < 0)
    return (VAR_24);
  }
 } else {

  VAR_24 = FUNC_3(VAR_10, VAR_12);
  if (VAR_24 < 0)
   return (VAR_24);
 }

 VAR_24 = FUNC_3(VAR_10, VAR_5);
 if (VAR_24 < 0)
  return (VAR_24);




 VAR_24 = FUNC_3(VAR_10, VAR_9);
 if (VAR_24 < 0)
  return (VAR_24);




 VAR_24 = FUNC_3(VAR_10, VAR_6);
 if (VAR_24 < 0)
  return (VAR_24);


 VAR_24 = FUNC_3(VAR_10, VAR_20);
 if (VAR_24 < 0)
  return (VAR_24);


 VAR_24 = FUNC_3(VAR_10, 0);
 if (VAR_24 < 0)
  return (VAR_24);

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {

  VAR_24 = FUNC_3(VAR_10, VAR_14);
  if (VAR_24 < 0)
   return (VAR_24);

  for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
   unsigned VAR_26 = VAR_15[VAR_23].codec;


   FUNC_0(VAR_19, VAR_26);
   for (VAR_22 = 8; VAR_22 > 0; VAR_22--) {
    if (VAR_19[8 - VAR_22])
     break;
   }
   if (VAR_22 == 0)
    VAR_22 = 1;
   if (VAR_15[VAR_23].prop_size)
    VAR_24 = FUNC_3(VAR_10, VAR_22 | 0x20);
   else
    VAR_24 = FUNC_3(VAR_10, VAR_22);
   if (VAR_24 < 0)
    return (VAR_24);


   VAR_22 &= 0x0f;
   VAR_24 = (int)FUNC_2(VAR_10, &VAR_19[8-VAR_22],
    VAR_22, VAR_1);
   if (VAR_24 < 0)
    return (VAR_24);

   if (VAR_15[VAR_23].prop_size) {

    VAR_24 = FUNC_3(VAR_10, VAR_15[VAR_23].prop_size);
    if (VAR_24 < 0)
     return (VAR_24);


    VAR_24 = (int)FUNC_2(VAR_10, VAR_15[VAR_23].props,
     VAR_15[VAR_23].prop_size, VAR_1);
    if (VAR_24 < 0)
     return (VAR_24);
   }
  }
 }




 VAR_24 = FUNC_3(VAR_10, VAR_4);
 if (VAR_24 < 0)
  return (VAR_24);

 if (VAR_20 > 1) {
  struct file *VAR_27 = VAR_18->file_list.first;
  for (;VAR_27 != ((void*)0); VAR_27 = VAR_27->next) {
   if (VAR_27->size == 0)
    break;
   VAR_24 = FUNC_3(VAR_10, VAR_27->size);
   if (VAR_24 < 0)
    return (VAR_24);
  }

 } else {

  VAR_24 = FUNC_3(VAR_10, VAR_13);
  if (VAR_24 < 0)
   return (VAR_24);
 }

 if (!VAR_16) {
  uint8_t VAR_28[4];



  VAR_24 = FUNC_3(VAR_10, VAR_3);
  if (VAR_24 < 0)
   return (VAR_24);


  VAR_24 = FUNC_3(VAR_10, 1);
  if (VAR_24 < 0)
   return (VAR_24);
  FUNC_1(VAR_28, VAR_17);
  VAR_24 = (int)FUNC_2(VAR_10, VAR_28, 4, VAR_1);
  if (VAR_24 < 0)
   return (VAR_24);
 }


 VAR_24 = FUNC_3(VAR_10, VAR_5);
 if (VAR_24 < 0)
  return (VAR_24);

 if (VAR_16) {



  VAR_24 = FUNC_4(VAR_10, VAR_15);
  if (VAR_24 < 0)
   return (VAR_24);
 }



 VAR_24 = FUNC_3(VAR_10, VAR_5);
 if (VAR_24 < 0)
  return (VAR_24);

 return (VAR_0);
}
