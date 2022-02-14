
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* c_handler ) (int,char**) ;int c_name; scalar_t__ c_conn; int c_proxy; } ;
typedef int sigfunc ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int ) ;
 struct cmd* FUNC_3 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,char**) ;
 int VAR_8 ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(int VAR_9, char *VAR_10[])
{
 struct cmd *VAR_11;
 int VAR_12;
 sigfunc VAR_13;
 char VAR_14[VAR_0];

 if (VAR_9 == 0 || (VAR_9 == 1 && !FUNC_1(&VAR_9, &VAR_10, "command"))) {
  FUNC_0("usage: %s command\n", VAR_10[0]);
  VAR_3 = -1;
  return;
 }
 VAR_11 = FUNC_3(VAR_10[1]);
 if (VAR_11 == (struct cmd *) -1) {
  FUNC_2("?Ambiguous command.\n", VAR_8);
  VAR_3 = -1;
  return;
 }
 if (VAR_11 == 0) {
  FUNC_2("?Invalid command.\n", VAR_8);
  VAR_3 = -1;
  return;
 }
 if (!VAR_11->c_proxy) {
  FUNC_2("?Invalid proxy command.\n", VAR_8);
  VAR_3 = -1;
  return;
 }
 if (FUNC_6(VAR_2, 1)) {
  VAR_3 = -1;
  return;
 }
 VAR_13 = FUNC_11(VAR_1, VAR_6);
 FUNC_5(1);
 if (VAR_11->c_conn && !VAR_4) {
  FUNC_2("Not connected.\n", VAR_8);
  FUNC_5(0);
  (void)FUNC_11(VAR_1, VAR_13);
  VAR_3 = -1;
  return;
 }
 VAR_12 = FUNC_7(VAR_5, " \t");
 if (VAR_12 > 0)
  FUNC_4(VAR_5, VAR_5 + VAR_12 + 1, FUNC_9(VAR_5) - VAR_12 + 1);
 (void)FUNC_8(VAR_14, VAR_11->c_name, sizeof(VAR_14));
 VAR_10[1] = VAR_14;
 (*VAR_11->c_handler)(VAR_9-1, VAR_10+1);
 if (VAR_4) {
  VAR_7 = 1;
 }
 else {
  VAR_7 = 0;
 }
 FUNC_5(0);
 (void)FUNC_11(VAR_1, VAR_13);
}
