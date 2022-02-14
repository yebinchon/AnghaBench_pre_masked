
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_3 (struct wpa_ctrl*,char const*,int ,char*,size_t*,int *) ;
 struct wpa_ctrl* FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1,
       char *VAR_2, size_t VAR_3)
{
 struct wpa_ctrl *VAR_4;
 size_t VAR_5;

 FUNC_0("wpa_command(ifname='%s', cmd='%s')\n", VAR_0, VAR_1);
 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_5 = VAR_3;
 if (FUNC_3(VAR_4, VAR_1, FUNC_1(VAR_1), VAR_2, &VAR_5, ((void*)0)) < 0) {
  FUNC_0("wpa_command: wpa_ctrl_request failed\n");
  FUNC_2(VAR_4);
  return -1;
 }
 FUNC_2(VAR_4);
 VAR_2[VAR_5] = '\0';
 return 0;
}
