
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct valuelist {int dummy; } ;
struct servent {char const* s_name; } ;


 struct servent* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct valuelist* VAR_0 ;
 int FUNC_3 (char*,char*,int) ;

const char *
FUNC_4(u_int16_t VAR_1, const char *VAR_2) {
 static char VAR_3[8];
 struct servent *VAR_4;

 if (VAR_0 == (struct valuelist *)0)
  FUNC_2();
 VAR_4 = FUNC_0(FUNC_1(VAR_1), VAR_2);
 if (VAR_4 == ((void*)0)) {
  (void) FUNC_3(VAR_3, "%d", VAR_1);
  return (VAR_3);
 }
 return (VAR_4->s_name);
}
