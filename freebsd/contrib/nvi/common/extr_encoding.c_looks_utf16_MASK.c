
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

int
FUNC_0(const char *VAR_2, size_t VAR_3)
{
 const u_char *VAR_4 = (u_char *)VAR_2;
 int VAR_5;
 size_t VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_3 < 2)
  return 0;

 VAR_8 = VAR_4[0] << 8 ^ VAR_4[1];
 if (VAR_8 == 0xFFFE)
  VAR_5 = 0;
 else if (VAR_8 == 0xFEFF)
  VAR_5 = 1;
 else
  return 0;

 for (VAR_6 = 2; VAR_6 + 1 < VAR_3; VAR_6 += 2) {
  if (VAR_5)
   VAR_7 = VAR_4[VAR_6] << 8 ^ VAR_4[VAR_6 + 1];
  else
   VAR_7 = VAR_4[VAR_6] ^ VAR_4[VAR_6 + 1] << 8;

  if (!VAR_9)
   if (VAR_7 < 0xD800 || VAR_7 > 0xDFFF)
    if (VAR_7 < 128 && VAR_1[VAR_7] != VAR_0)
     return 0;
    else
     VAR_9 = 0;
   else if (VAR_7 > 0xDBFF)
    return 0;
   else {
    VAR_9 = 1;
    continue;
   }
  else if (VAR_7 < 0xDC00 || VAR_7 > 0xDFFF)
   return 0;
 }

 return 1 + VAR_5;
}
