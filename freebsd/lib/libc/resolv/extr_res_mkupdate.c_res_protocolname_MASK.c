
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct valuelist {int dummy; } ;
struct protoent {char const* p_name; } ;


 struct protoent* FUNC_0 (int) ;
 struct valuelist* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;

const char *
FUNC_3(int VAR_1) {
 static char VAR_2[8];
 struct protoent *VAR_3;

 if (VAR_0 == (struct valuelist *)0)
  FUNC_1();
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0)) {
  (void) FUNC_2(VAR_2, "%d", VAR_1);
  return (VAR_2);
 }
 return (VAR_3->p_name);
}
