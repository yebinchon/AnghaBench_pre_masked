
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct types {int t_name; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 struct types* VAR_3 ;

void
FUNC_4(int VAR_4, char *VAR_5[])
{
 struct types *VAR_6;

 if (VAR_4 == 0 || VAR_4 > 2) {
  const char *VAR_7;

  FUNC_0("usage: %s [", VAR_5[0]);
  VAR_7 = " ";
  for (VAR_6 = VAR_3; VAR_6->t_name; VAR_6++) {
   FUNC_1(VAR_1, "%s%d", VAR_7, VAR_6->t_name);
   VAR_7 = " | ";
  }
  FUNC_2(" ]\n", VAR_1);
  VAR_0 = -1;
  return;
 }
 if (VAR_4 < 2) {
  FUNC_1(VAR_1, "Using %s mode to transfer files.\n", VAR_2);
  VAR_0 = 0;
  return;
 }
 FUNC_3(VAR_5[1]);
}
