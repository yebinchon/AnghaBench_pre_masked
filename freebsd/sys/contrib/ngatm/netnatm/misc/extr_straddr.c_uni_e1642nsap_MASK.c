
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;


 int FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;

int
FUNC_2(u_char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 int VAR_3;
 u_int VAR_4;

 if((VAR_2 = FUNC_1(VAR_1)) > 15 || VAR_2 == 0)
  return -1;
 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if(!FUNC_0(VAR_1[VAR_4]))
   return -1;

 *VAR_0++ = 0x45;
 VAR_3 = (15 - VAR_2) / 2;
 while(VAR_3--)
  *VAR_0++ = 0x00;
 if((VAR_2 & 1) == 0) {
  *VAR_0++ = *VAR_1++ - '0';
  VAR_2--;
 }
 while(VAR_2 > 1) {
  VAR_2 -= 2;
  *VAR_0 = (*VAR_1++ - '0') << 4;
  *VAR_0++ |= *VAR_1 - '0';
 }
 *VAR_0++ = ((*VAR_1++ - '0') << 4) | 0xf;
 for(VAR_3 = 0; VAR_3 < 11; VAR_3++)
  *VAR_0++ = 0;

 return 0;
}
