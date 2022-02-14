
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



__attribute__((used)) static int
FUNC_0(int64_t VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;


 if (VAR_0 < 0)
  VAR_0 = 0;

 VAR_1 += VAR_2;
 while (VAR_2-- > 0) {
  *--VAR_1 = (char)('0' + (VAR_0 & 7));
  VAR_0 >>= 3;
 }

 if (VAR_0 == 0)
  return (0);


 while (VAR_3-- > 0)
  *VAR_1++ = '7';

 return (-1);
}
