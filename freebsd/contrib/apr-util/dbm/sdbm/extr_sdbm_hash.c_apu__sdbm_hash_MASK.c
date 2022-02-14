
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

long FUNC_0(const char *VAR_1, int VAR_2)
{
 register unsigned long VAR_3 = 0;






 if (VAR_2 > 0) {
  register int VAR_4 = (VAR_2 + 8 - 1) >> 3;

  switch(VAR_2 & (8 - 1)) {
  case 0: do {
   VAR_3 = *VAR_1++ + 65599 * VAR_3; case 7: VAR_3 = *VAR_1++ + 65599 * VAR_3;
  case 6: VAR_3 = *VAR_1++ + 65599 * VAR_3; case 5: VAR_3 = *VAR_1++ + 65599 * VAR_3;
  case 4: VAR_3 = *VAR_1++ + 65599 * VAR_3; case 3: VAR_3 = *VAR_1++ + 65599 * VAR_3;
  case 2: VAR_3 = *VAR_1++ + 65599 * VAR_3; case 1: VAR_3 = *VAR_1++ + 65599 * VAR_3;
   } while (--VAR_4);
  }

 }




 return VAR_3;
}
