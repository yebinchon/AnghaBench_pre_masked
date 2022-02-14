
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

size_t
FUNC_3(void *VAR_0, size_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0;
 size_t VAR_3 = VAR_1;


 while (((uintptr_t)VAR_2 & 7) != 0 && VAR_3 > 7) {
  if (FUNC_0(VAR_2, 0))
   return (VAR_1);
  VAR_2++;
  VAR_3--;
 }


 while (VAR_3 > 7) {

  if (FUNC_2(VAR_2, 0))
   return (VAR_1);






  VAR_2 += 8;
  VAR_3 -= 8;
 }


 while (VAR_3 > 0) {
  if (FUNC_0(VAR_2, 0))
   return (VAR_1);
  VAR_2++;
  VAR_3--;
 }
 return (0);
}
