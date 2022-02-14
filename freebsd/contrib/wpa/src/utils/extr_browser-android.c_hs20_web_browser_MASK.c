
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct http_server {int dummy; } ;
struct browser_data {int success; } ;
typedef scalar_t__ pid_t ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct browser_data*,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,int ,struct browser_data*,int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (struct http_server*) ;
 struct http_server* FUNC_10 (struct in_addr*,int,int ,struct browser_data*) ;
 int FUNC_11 (struct browser_data*,int ,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,...) ;

int FUNC_15(const char *VAR_5)
{
 struct http_server *VAR_6;
 struct in_addr VAR_7;
 struct browser_data VAR_8;
 pid_t VAR_9;

 FUNC_14(VAR_1, "Launching Android browser to %s", VAR_5);

 FUNC_11(&VAR_8, 0, sizeof(VAR_8));

 if (FUNC_2() < 0) {
  FUNC_14(VAR_0, "eloop_init failed");
  return -1;
 }
 VAR_7.s_addr = FUNC_8((127 << 24) | 1);
 VAR_6 = FUNC_10(&VAR_7, 12345, VAR_4, &VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_14(VAR_0, "http_server_init failed");
  FUNC_1();
  return -1;
 }

 VAR_9 = FUNC_7();
 if (VAR_9 < 0) {
  FUNC_14(VAR_0, "fork: %s", FUNC_12(VAR_3));
  FUNC_9(VAR_6);
  FUNC_1();
  return -1;
 }

 if (VAR_9 == 0) {

  char *VAR_10[7];

  VAR_10[0] = "browser-android";
  VAR_10[1] = "start";
  VAR_10[2] = "-a";
  VAR_10[3] = "android.intent.action.VIEW";
  VAR_10[4] = "-d";
  VAR_10[5] = (void *) VAR_5;
  VAR_10[6] = ((void*)0);

  FUNC_5("/system/bin/am", VAR_10);
  FUNC_14(VAR_0, "execv: %s", FUNC_12(VAR_3));
  FUNC_6(0);
  return -1;
 }

 FUNC_3(30, 0, VAR_2, &VAR_8, ((void*)0));
 FUNC_4();
 FUNC_0(VAR_2, &VAR_8, ((void*)0));
 FUNC_9(VAR_6);
 FUNC_1();

 FUNC_14(VAR_1, "Closing Android browser");
 if (FUNC_13("/system/bin/input keyevent KEYCODE_HOME") != 0) {
  FUNC_14(VAR_1, "Failed to inject keyevent");
 }

 return VAR_8.success;
}
