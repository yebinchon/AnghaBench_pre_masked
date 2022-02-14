
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
 int FUNC_5 (char*,char**,char**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int FUNC_9 (struct http_server*) ;
 struct http_server* FUNC_10 (struct in_addr*,int,int ,struct browser_data*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 int FUNC_12 (struct browser_data*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;

int FUNC_15(const char *VAR_5)
{
 struct http_server *VAR_6;
 struct in_addr VAR_7;
 struct browser_data VAR_8;
 pid_t VAR_9;

 FUNC_14(VAR_1, "Launching wpadebug browser to %s", VAR_5);

 FUNC_12(&VAR_8, 0, sizeof(VAR_8));

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
  FUNC_14(VAR_0, "fork: %s", FUNC_13(VAR_3));
  FUNC_9(VAR_6);
  FUNC_1();
  return -1;
 }

 if (VAR_9 == 0) {

  char *VAR_10[14];
  char *VAR_11[] = { "PATH=/system/bin:/vendor/bin", ((void*)0) };

  VAR_10[0] = "browser-wpadebug";
  VAR_10[1] = "start";
  VAR_10[2] = "-a";
  VAR_10[3] = "android.action.MAIN";
  VAR_10[4] = "-c";
  VAR_10[5] = "android.intent.category.LAUNCHER";
  VAR_10[6] = "-n";
  VAR_10[7] = "w1.fi.wpadebug/.WpaWebViewActivity";
  VAR_10[8] = "-e";
  VAR_10[9] = "w1.fi.wpadebug.URL";
  VAR_10[10] = (void *) VAR_5;
  VAR_10[11] = "--user";
  VAR_10[12] = "-3";
  VAR_10[13] = ((void*)0);

  FUNC_5("/system/bin/am", VAR_10, VAR_11);
  FUNC_14(VAR_0, "execve: %s", FUNC_13(VAR_3));
  FUNC_6(0);
  return -1;
 }

 FUNC_3(300, 0, VAR_2, &VAR_8, ((void*)0));
 FUNC_4();
 FUNC_0(VAR_2, &VAR_8, ((void*)0));
 FUNC_9(VAR_6);
 FUNC_1();

 FUNC_14(VAR_1, "Closing Android browser");
 if (FUNC_11("/system/bin/am",
      "start -a android.action.MAIN "
      "-c android.intent.category.LAUNCHER "
      "-n w1.fi.wpadebug/.WpaWebViewActivity "
      "-e w1.fi.wpadebug.URL FINISH", 1) != 0) {
  FUNC_14(VAR_1, "Failed to close wpadebug browser");
 }

 return VAR_8.success;
}
