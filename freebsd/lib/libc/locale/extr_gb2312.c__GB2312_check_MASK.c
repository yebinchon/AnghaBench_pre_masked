
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



__attribute__((used)) static int
FUNC_0(const char *VAR_0, size_t VAR_1)
{
 const u_char *VAR_2 = (const u_char *)VAR_0;

 if (VAR_1 == 0)

  return (-2);
 if (VAR_2[0] >= 0xa1 && VAR_2[0] <= 0xfe) {
  if (VAR_1 < 2)

   return (-2);
  if (VAR_2[1] < 0xa1 || VAR_2[1] > 0xfe)

   return (-1);
  return (2);
 } else if (VAR_2[0] & 0x80) {

  return (-1);
 }
 return (1);
}
