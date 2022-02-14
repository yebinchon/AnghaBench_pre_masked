
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (int,char**) ;

__attribute__((used)) static int
FUNC_6(int VAR_1, char **VAR_2)
{
 char *VAR_3;

 VAR_1--;
 VAR_2++;
 if (VAR_1 == 0) {
  (void) FUNC_0(VAR_0,
      "error: no feature operation specified\n");
  FUNC_2();
 }

 VAR_3 = VAR_2[0];
 if (FUNC_1(VAR_3, "stat") == 0) {
  FUNC_5(VAR_1, VAR_2);
 } else if (FUNC_1(VAR_3, "enable") == 0) {
  FUNC_3(VAR_1, VAR_2);
 } else if (FUNC_1(VAR_3, "ref") == 0) {
  FUNC_4(VAR_1, VAR_2);
 } else {
  (void) FUNC_0(VAR_0, "error: unknown subcommand: %s\n",
      VAR_3);
  FUNC_2();
 }

 return (0);
}
