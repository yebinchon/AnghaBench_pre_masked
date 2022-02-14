
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct wpa_ctrl*,char const*,int ,char*,size_t*,int ) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl *VAR_2, const char *VAR_3, int VAR_4)
{
 char VAR_5[4096];
 size_t VAR_6;
 int VAR_7;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("Not connected to hostapd - command dropped.\n");
  return -1;
 }
 VAR_6 = sizeof(VAR_5) - 1;
 VAR_7 = FUNC_2(VAR_2, VAR_3, FUNC_1(VAR_3), VAR_5, &VAR_6,
          VAR_1);
 if (VAR_7 == -2) {
  FUNC_0("'%s' command timed out.\n", VAR_3);
  return -2;
 } else if (VAR_7 < 0) {
  FUNC_0("'%s' command failed.\n", VAR_3);
  return -1;
 }
 if (VAR_4) {
  VAR_5[VAR_6] = '\0';
  FUNC_0("%s", VAR_5);
 }
 return 0;
}
