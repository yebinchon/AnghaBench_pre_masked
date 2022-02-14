
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int uint32_t ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(wchar_t *VAR_0, uint32_t VAR_1)
{
 if (FUNC_0() == 4) {
  *VAR_0 = (wchar_t)VAR_1;
  return (1);
 }
 if (VAR_1 > 0xffff) {


  VAR_1 -= 0x10000;
  *VAR_0++ = (wchar_t)(((VAR_1 >> 10) & 0x3ff) + 0xD800);
  *VAR_0 = (wchar_t)((VAR_1 & 0x3ff) + 0xDC00);
  return (2);
 } else {
  *VAR_0 = (wchar_t)VAR_1;
  return (1);
 }
}
