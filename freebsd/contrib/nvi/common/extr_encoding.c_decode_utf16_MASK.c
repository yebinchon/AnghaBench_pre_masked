
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(const char* VAR_0, int VAR_1)
{
 const u_char *VAR_2 = (u_char *)VAR_0;
 int VAR_3 = -1;
 unsigned int VAR_4, VAR_5;

 if (VAR_1)
  VAR_4 = VAR_2[0] << 8 ^ VAR_2[1];
 else
  VAR_4 = VAR_2[0] ^ VAR_2[1] << 8;

 if (VAR_4 < 0xD800 || VAR_4 > 0xDFFF)
  VAR_3 = VAR_4;
 else if (VAR_4 > 0xDBFF);
 else {
  if (VAR_1)
   VAR_5 = VAR_2[2] << 8 ^ VAR_2[3];
  else
   VAR_5 = VAR_2[2] ^ VAR_2[3] << 8;
  VAR_3 = ((VAR_4 ^ 0xD800) << 10 ^ (VAR_5 ^ 0xDC00)) + 0x10000;
 }

 return VAR_3;
}
