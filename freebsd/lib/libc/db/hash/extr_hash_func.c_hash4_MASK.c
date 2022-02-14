
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef size_t u_int32_t ;


 int VAR_0 ;

u_int32_t
FUNC_0(const void *VAR_1, size_t VAR_2)
{
 u_int32_t VAR_3, VAR_4;
 const u_int8_t *VAR_5;





 VAR_3 = 0;
 VAR_5 = VAR_1;
 if (VAR_2 > 0) {
  VAR_4 = (VAR_2 + 8 - 1) >> 3;

  switch (VAR_2 & (8 - 1)) {
  case 0:
   do {
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 7:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 6:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 5:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 4:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 3:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 2:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
  case 1:
    VAR_3 = (VAR_3 << 5) + VAR_3 + *VAR_5++;;
   } while (--VAR_4);
  }

 }
 return (VAR_3);
}
