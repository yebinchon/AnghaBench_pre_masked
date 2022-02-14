
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_c; } ;
typedef TYPE_1__ EVENT ;
typedef int CHAR_T ;



int
FUNC_0(
 CHAR_T *VAR_0,
 EVENT *VAR_1,
 size_t VAR_2)
{
 if (VAR_2 != 0) {
  do {
   if (*VAR_0++ != VAR_1->e_c)
    return (*--VAR_0 - VAR_1->e_c);
   ++VAR_1;
  } while (--VAR_2 != 0);
 }
 return (0);
}
