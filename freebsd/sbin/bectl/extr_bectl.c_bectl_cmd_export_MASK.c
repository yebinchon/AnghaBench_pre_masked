
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, char *VAR_5[])
{
 char *VAR_6;

 if (VAR_4 == 1) {
  FUNC_1(VAR_3, "bectl export: missing boot environment name\n");
  return (FUNC_3(0));
 }

 if (VAR_4 > 2) {
  FUNC_1(VAR_3, "bectl export: extra arguments provided\n");
  return (FUNC_3(0));
 }

 VAR_6 = VAR_5[1];

 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_3, "bectl export: must redirect output\n");
  return (VAR_0);
 }

 FUNC_0(VAR_2, VAR_6, VAR_1);

 return (0);
}
