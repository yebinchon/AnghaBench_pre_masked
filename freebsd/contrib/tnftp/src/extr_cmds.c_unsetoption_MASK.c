
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*) ;
 struct option* FUNC_3 (char*) ;
 int VAR_1 ;

void
FUNC_4(int VAR_2, char *VAR_3[])
{
 struct option *VAR_4;

 VAR_0 = -1;
 if (VAR_2 == 0 || VAR_2 != 2) {
  FUNC_1("usage: %s option\n", VAR_3[0]);
  return;
 }

 VAR_4 = FUNC_3(VAR_3[1]);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_1, "No such option `%s'.\n", VAR_3[1]);
  return;
 }
 FUNC_0(VAR_4->value);
 FUNC_2(VAR_1, "Unsetting `%s'.\n", VAR_4->name);
 VAR_0 = 0;
}
