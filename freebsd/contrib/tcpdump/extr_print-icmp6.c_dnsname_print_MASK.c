
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1, const u_char *VAR_2)
{
 int VAR_3;


 FUNC_0((VAR_0,", \""));
 while (VAR_1 < VAR_2) {
  VAR_3 = *VAR_1++;
  if (VAR_3) {
   if (VAR_3 > VAR_2 - VAR_1) {
    FUNC_0((VAR_0,"???"));
    break;
   }
   while (VAR_3-- && VAR_1 < VAR_2) {
    FUNC_1(VAR_0, *VAR_1);
    VAR_1++;
   }
   if (VAR_1 + 1 < VAR_2 && *VAR_1)
    FUNC_0((VAR_0,"."));
  } else {
   if (VAR_1 == VAR_2) {

    FUNC_0((VAR_0,"."));
   } else if (VAR_1 + 1 == VAR_2 && *VAR_1 == '\0') {

   } else {

    FUNC_0((VAR_0,"???"));
   }
   break;
  }
 }
 FUNC_0((VAR_0,"\""));
}
