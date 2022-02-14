
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;



__attribute__((used)) static u32 FUNC_0(const unsigned char *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2 = 0;
 unsigned int VAR_3 = 1;
 unsigned char VAR_4;

 while (VAR_1) {
  VAR_4 = VAR_0[VAR_1 - 1];
  if ((VAR_4 >= '0') && (VAR_4 <= '9'))
   VAR_2 += VAR_3 * (VAR_4 - '0');
  else if ((VAR_4 >= 'A') && (VAR_4 <= 'F'))
   VAR_2 += VAR_3 * (VAR_4 - ('A' - 10));
  else if ((VAR_4 >= 'a') && (VAR_4 <= 'f'))
   VAR_2 += VAR_3 * (VAR_4 - ('a' - 10));
  VAR_3 *= 16;
  --VAR_1;
 }
 return VAR_2;
}
