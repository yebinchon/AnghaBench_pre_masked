
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



__attribute__((used)) static int
FUNC_0(u_char *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;

 while (*VAR_0) {
  if (VAR_2 > 2 || *VAR_0 < '0' || *VAR_0 > '9')
   return (-1);
  VAR_1 *= 10;
  VAR_1 += (*VAR_0 - '0');
  VAR_0++;
  VAR_2++;
 }
 if (VAR_1 < 256)
  return (VAR_1);
 return (-1);
}
