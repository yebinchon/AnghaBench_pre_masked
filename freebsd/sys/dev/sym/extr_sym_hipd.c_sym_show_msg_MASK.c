
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1 (u_char * VAR_1)
{
 u_char VAR_2;
 FUNC_0 ("%x",*VAR_1);
 if (*VAR_1==VAR_0) {
  for (VAR_2=1;VAR_2<8;VAR_2++) {
   if (VAR_2-1>VAR_1[1]) break;
   FUNC_0 ("-%x",VAR_1[VAR_2]);
  }
  return (VAR_2+1);
 } else if ((*VAR_1 & 0xf0) == 0x20) {
  FUNC_0 ("-%x",VAR_1[1]);
  return (2);
 }
 return (1);
}
