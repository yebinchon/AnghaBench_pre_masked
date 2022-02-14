
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct file {unsigned int flg; TYPE_2__* times; struct file* next; } ;
struct archive_write {scalar_t__ format_data; } ;
struct TYPE_3__ {struct file* first; } ;
struct _7zip {int* total_number_time_defined; int total_number_entry; TYPE_1__ file_list; } ;
struct TYPE_4__ {int time_ns; int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (struct archive_write*,int*,int,int ) ;
 int FUNC_2 (struct archive_write*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_2, uint8_t VAR_3, unsigned VAR_4, int VAR_5)
{
 uint8_t VAR_6[8];
 struct _7zip *VAR_7 = (struct _7zip *)VAR_2->format_data;
 struct file *VAR_8;
 int VAR_9;
 uint8_t VAR_10, VAR_11;




 if (VAR_7->total_number_time_defined[VAR_5] == VAR_7->total_number_entry) {

  VAR_9 = FUNC_2(VAR_2, VAR_3);
  if (VAR_9 < 0)
   return (VAR_9);

  VAR_9 = FUNC_2(VAR_2, 2 + VAR_7->total_number_entry * 8);
  if (VAR_9 < 0)
   return (VAR_9);

  VAR_9 = FUNC_2(VAR_2, 1);
  if (VAR_9 < 0)
   return (VAR_9);
 } else {
  if (VAR_7->total_number_time_defined[VAR_5] == 0)
   return (VAR_0);


  VAR_9 = FUNC_2(VAR_2, VAR_3);
  if (VAR_9 < 0)
   return (VAR_9);

  VAR_9 = FUNC_2(VAR_2, 2 + ((VAR_7->total_number_entry + 7) >> 3)
   + VAR_7->total_number_time_defined[VAR_5] * 8);
  if (VAR_9 < 0)
   return (VAR_9);


  VAR_9 = FUNC_2(VAR_2, 0);
  if (VAR_9 < 0)
   return (VAR_9);

  VAR_10 = 0;
  VAR_11 = 0x80;
  VAR_8 = VAR_7->file_list.first;
  for (;VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
   if (VAR_8->flg & VAR_4)
    VAR_10 |= VAR_11;
   VAR_11 >>= 1;
   if (VAR_11 == 0) {
    VAR_9 = (int)FUNC_1(VAR_2, &VAR_10, 1, VAR_1);
    if (VAR_9 < 0)
     return (VAR_9);
    VAR_11 = 0x80;
    VAR_10 = 0;
   }
  }
  if (VAR_11 != 0x80) {
   VAR_9 = (int)FUNC_1(VAR_2, &VAR_10, 1, VAR_1);
   if (VAR_9 < 0)
    return (VAR_9);
  }
 }


 VAR_9 = FUNC_2(VAR_2, 0);
 if (VAR_9 < 0)
  return (VAR_9);





 VAR_8 = VAR_7->file_list.first;
 for (;VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  if ((VAR_8->flg & VAR_4) == 0)
   continue;
  FUNC_0(VAR_6, FUNC_3(VAR_8->times[VAR_5].time,
   VAR_8->times[VAR_5].time_ns));
  VAR_9 = (int)FUNC_1(VAR_2, VAR_6, 8, VAR_1);
  if (VAR_9 < 0)
   return (VAR_9);
 }

 return (VAR_0);
}
