
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0, int VAR_1, int VAR_2)
{
 const unsigned char *VAR_3 = VAR_0;
 int VAR_4 = 0, VAR_5 = VAR_1;

 while (VAR_5--) {

  VAR_4 += *VAR_3++;

  while (VAR_4 > 255)
   VAR_4 = (VAR_4 & 255) + (VAR_4 >> 8);
 }
 return (VAR_4 % VAR_2);
}
