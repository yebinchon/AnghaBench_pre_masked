
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

int
FUNC_4(u_char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for(VAR_2 = 0; VAR_2 < 20; VAR_2++) {
  while((VAR_3 = *VAR_1++) == '.')
   ;
  if(!FUNC_0(VAR_3) || !FUNC_3(VAR_3))
   return -1;
  VAR_0[VAR_2] = FUNC_1(VAR_3) ? (VAR_3 - '0')
   : FUNC_2(VAR_3) ? (VAR_3 - 'a' + 10)
   : (VAR_3 - 'A' + 10);
  VAR_0[VAR_2] <<= 4;
  VAR_3 = *VAR_1++;
  if(!FUNC_0(VAR_3) || !FUNC_3(VAR_3))
   return -1;
  VAR_0[VAR_2] |= FUNC_1(VAR_3) ? (VAR_3 - '0')
   : FUNC_2(VAR_3) ? (VAR_3 - 'a' + 10)
   : (VAR_3 - 'A' + 10);
 }
 return *VAR_1 != '\0';
}
