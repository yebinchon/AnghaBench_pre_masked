
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;



int
FUNC_0(char *VAR_0, const u_char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_0;
 u_int VAR_4;
 int VAR_5;

 if(VAR_1[0] != 0x45)
  return -1;
 if((VAR_1[8] & 0xf) != 0xf)
  return -1;
 for(VAR_5 = 1; VAR_5 <= 7; VAR_5++) {
  VAR_4 = (VAR_1[VAR_5] >> 4) & 0xf;
  if(VAR_4 == 0x00 && VAR_3 == VAR_0)
   continue;
  if(VAR_4 >= 0xa)
   return -1;
  *VAR_3++ = VAR_4 + '0';

  VAR_4 = VAR_1[VAR_5] & 0xf;
  if(VAR_4 == 0x00 && VAR_3 == VAR_0)
   continue;
  if(VAR_4 >= 0xa)
   return -1;
  *VAR_3++ = VAR_4 + '0';
 }
 VAR_4 = (VAR_1[VAR_5] >> 4) & 0xf;
 if(VAR_4 != 0x00 || VAR_3 == VAR_0) {
  if(VAR_4 >= 0xa)
   return -1;
  *VAR_3++ = VAR_4 + '0';
 }
 if(VAR_3 == VAR_0)
  return -1;
 *VAR_3++ = 0;

 if(VAR_2 == 0)
  return 0;
 while(VAR_5 < ((VAR_2 == 1) ? 19 : 20)) {
  if(VAR_1[VAR_5] != 0x00)
   return -1;
  VAR_5++;
 }

 return 0;
}
