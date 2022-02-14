
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int ,char*,char const*,char*,...) ;

void FUNC_2(const char *VAR_1, uint32_t VAR_2, const void *VAR_3,
 size_t VAR_4)
{
 const uint8_t *VAR_5 = (const uint8_t *)VAR_3;
 size_t VAR_6;
 char VAR_7[100];
 char *VAR_8;

 while (VAR_4 > 0) {
  VAR_8 = VAR_7;

  for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   if (VAR_6 < VAR_4)
    VAR_8 += FUNC_0(VAR_8, 4, "%02x ", VAR_5[VAR_6]);
   else
    VAR_8 += FUNC_0(VAR_8, 4, "   ");
  }

  for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   if (VAR_6 < VAR_4) {
    uint8_t VAR_9 = VAR_5[VAR_6];

    if ((VAR_9 < ' ') || (VAR_9 > '~'))
     VAR_9 = '.';
    *VAR_8++ = (char)VAR_9;
   }
  }
  *VAR_8++ = '\0';

  if ((VAR_1 != ((void*)0)) && (*VAR_1 != '\0'))
   FUNC_1(VAR_0,
    "%s: %08x: %s", VAR_1, VAR_2, VAR_7);
  else
   FUNC_1(VAR_0,
    "%08x: %s", VAR_2, VAR_7);

  VAR_2 += 16;
  VAR_5 += 16;
  if (VAR_4 > 16)
   VAR_4 -= 16;
  else
   VAR_4 = 0;
 }
}
