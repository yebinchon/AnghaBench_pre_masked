
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ ti_swap_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1, void *VAR_2, size_t VAR_3, ti_swap_type VAR_4)
{
 const uint8_t *VAR_5;
 uint8_t *VAR_6;
 size_t VAR_7;

 if (VAR_3 & 0x3) {
  FUNC_2("ti_bcopy_swap: length %zd isn't 32-bit aligned\n", VAR_3);
  return (-1);
 }

 VAR_5 = VAR_1;
 VAR_6 = VAR_2;
 VAR_7 = VAR_3;

 while (VAR_7) {
  if (VAR_4 == VAR_0)
   *(uint32_t *)VAR_6 = FUNC_1(*(const uint32_t *)VAR_5);
  else
   *(uint32_t *)VAR_6 = FUNC_0(*(const uint32_t *)VAR_5);
  VAR_5 += 4;
  VAR_6 += 4;
  VAR_7 -= 4;
 }

 return (0);
}
