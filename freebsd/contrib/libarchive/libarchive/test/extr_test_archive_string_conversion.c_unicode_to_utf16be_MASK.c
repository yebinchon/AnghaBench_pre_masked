
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, uint32_t VAR_1)
{
 char *VAR_2 = VAR_0;

 if (VAR_1 > 0xffff) {


  VAR_1 -= 0x10000;
  FUNC_0(VAR_2, ((VAR_1 >> 10) & 0x3ff) + 0xD800);
  FUNC_0(VAR_2+2, (VAR_1 & 0x3ff) + 0xDC00);
  return (4);
 } else {
  FUNC_0(VAR_2, VAR_1);
  return (2);
 }
}
