
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static size_t
FUNC_1(char *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 char *VAR_3 = VAR_0;

 if (VAR_2 > 0xffff) {


  if (VAR_1 < 4)
   return (0);
  VAR_2 -= 0x10000;
  FUNC_0(VAR_3, ((VAR_2 >> 10) & 0x3ff) + 0xD800);
  FUNC_0(VAR_3+2, (VAR_2 & 0x3ff) + 0xDC00);
  return (4);
 } else {
  if (VAR_1 < 2)
   return (0);
  FUNC_0(VAR_3, VAR_2);
  return (2);
 }
}
