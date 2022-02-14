
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_char ;


 int VAR_0 ;

u_int32_t
FUNC_0(const void *VAR_1, size_t VAR_2)
{
 const u_char *VAR_3;
 size_t VAR_4;
 u_int32_t VAR_5;



 VAR_5 = 0;
 VAR_3 = VAR_1;
 if (VAR_2 > 0) {
  VAR_4 = (VAR_2 + 8 - 1) >> 3;

  switch (VAR_2 & (8 - 1)) {
  case 0:
   do {
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 7:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 6:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 5:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 4:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 3:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 2:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;

  case 1:
    VAR_5 = *VAR_3++ + 65599 * VAR_5;
   } while (--VAR_4);
  }
 }
 return (VAR_5);
}
