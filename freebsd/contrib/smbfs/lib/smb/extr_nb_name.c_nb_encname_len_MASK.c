
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(const char *VAR_0)
{
 const u_char *VAR_1 = (const u_char *)VAR_0;
 int VAR_2, VAR_3;

 if ((VAR_1[0] & 0xc0) == 0xc0)
  return -1;

 VAR_2 = 1;
 for (;;) {
  VAR_3 = *VAR_1;
  if (VAR_3++ == 0)
   break;
  VAR_2 += VAR_3;
  VAR_1 += VAR_3;
 }
 return VAR_2;
}
