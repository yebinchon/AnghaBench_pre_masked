
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



__attribute__((used)) static int
FUNC_0(int64_t VAR_0, char *VAR_1, int VAR_2)
{
 VAR_1 += VAR_2;
 while (VAR_2-- > 0) {
  *--VAR_1 = (char)(VAR_0 & 0xff);
  VAR_0 >>= 8;
 }
 *VAR_1 |= 0x80;
 return (0);
}
