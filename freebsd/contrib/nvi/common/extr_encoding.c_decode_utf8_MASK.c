
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(const char *VAR_0)
{
 const u_char *VAR_1 = (u_char *)VAR_0;
 int VAR_2 = -1;

 if ((VAR_1[0] & 0x80) == 0)
  VAR_2 = VAR_1[0];
 else if ((VAR_1[0] & 0x40) == 0);
 else {
  if ((VAR_1[0] & 0x20) == 0)
   VAR_2 = (VAR_1[0] ^ 0xC0) << 6 ^ (VAR_1[1] ^ 0x80);
  else if ((VAR_1[0] & 0x10) == 0)
   VAR_2 = (VAR_1[0] ^ 0xE0) << 12 ^ (VAR_1[1] ^ 0x80) << 6
     ^ (VAR_1[2] ^ 0x80);
  else if (((VAR_1[0] & 0x08) == 0))
   VAR_2 = (VAR_1[0] ^ 0xF0) << 18 ^ (VAR_1[1] ^ 0x80) << 12
     ^ (VAR_1[2] ^ 0x80) << 6 ^ (VAR_1[3] ^ 0x80);
 }

 return VAR_2;
}
