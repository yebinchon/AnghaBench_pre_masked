
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_3__ {size_t dr_size; unsigned long* dr_bitmap; } ;
typedef TYPE_1__ dt_regset_t ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(dt_regset_t *VAR_4)
{
 ulong_t VAR_5 = VAR_4->dr_size - 1;
 ulong_t VAR_6 = VAR_5 >> VAR_2;
 ulong_t VAR_7;

 for (VAR_7 = 0; VAR_7 <= VAR_6; VAR_7++) {
  if (VAR_4->dr_bitmap[VAR_7] != ~0UL)
   break;
 }

 if (VAR_7 <= VAR_6) {
  ulong_t VAR_8 = (VAR_7 == VAR_6) ? VAR_5 & VAR_1 : VAR_0 - 1;
  ulong_t VAR_9 = VAR_4->dr_bitmap[VAR_7];
  ulong_t VAR_10, VAR_11;
  int VAR_12;

  for (VAR_10 = 1, VAR_11 = 0; VAR_11 <= VAR_8; VAR_11++, VAR_10 <<= 1) {
   if ((VAR_9 & VAR_10) == 0) {
    VAR_12 = (int)((VAR_7 << VAR_2) | VAR_11);
    FUNC_0(VAR_4->dr_bitmap, VAR_12);
    return (VAR_12);
   }
  }
 }

 FUNC_1(VAR_3, "Insufficient registers to generate code");

 return (-1);
}
