
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_4 (struct wpa_ctrl*,char const*,int ,char*,size_t*,int *) ;
 struct wpa_ctrl* FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_0, const char *VAR_1)
{
 struct wpa_ctrl *VAR_2;
 char VAR_3[128];
 size_t VAR_4;

 FUNC_0("wpa_command(ifname='%s', cmd='%s')\n", VAR_0, VAR_1);
 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_4 = sizeof(VAR_3);
 if (FUNC_4(VAR_2, VAR_1, FUNC_1(VAR_1), VAR_3, &VAR_4, ((void*)0)) < 0) {
  FUNC_0("wpa_command: wpa_ctrl_request failed\n");
  FUNC_3(VAR_2);
  return -1;
 }
 FUNC_3(VAR_2);
 VAR_3[VAR_4] = '\0';
 if (FUNC_2(VAR_3, "FAIL", 4) == 0) {
  FUNC_0("wpa_command: Command failed (FAIL received)\n");
  return -1;
 }
 return 0;
}
