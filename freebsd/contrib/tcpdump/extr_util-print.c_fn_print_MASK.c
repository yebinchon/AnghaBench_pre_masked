
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int netdissect_options ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int *) ;
 char FUNC_3 (char) ;

int
FUNC_4(netdissect_options *VAR_0,
         register const u_char *VAR_1, register const u_char *VAR_2)
{
 register int VAR_3;
 register u_char VAR_4;

 VAR_3 = 1;
 while (VAR_2 == ((void*)0) || VAR_1 < VAR_2) {
  VAR_4 = *VAR_1++;
  if (VAR_4 == '\0') {
   VAR_3 = 0;
   break;
  }
  if (!FUNC_0(VAR_4)) {
   VAR_4 = FUNC_3(VAR_4);
   FUNC_2((VAR_0, "M-"));
  }
  if (!FUNC_1(VAR_4)) {
   VAR_4 ^= 0x40;
   FUNC_2((VAR_0, "^"));
  }
  FUNC_2((VAR_0, "%c", VAR_4));
 }
 return(VAR_3);
}
