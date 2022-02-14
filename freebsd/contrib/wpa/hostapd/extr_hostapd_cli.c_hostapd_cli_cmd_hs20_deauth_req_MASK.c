
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,char*,char*,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_4(struct wpa_ctrl *VAR_0, int VAR_1,
        char *VAR_2[])
{
 char VAR_3[300];
 int VAR_4;

 if (VAR_1 < 3) {
  FUNC_2("Invalid 'hs20_deauth_req' command - at least three arguments (STA addr, Code, Re-auth Delay) are needed\n");
  return -1;
 }

 if (VAR_1 > 3)
  VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3),
      "HS20_DEAUTH_REQ %s %s %s %s",
      VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
 else
  VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3),
      "HS20_DEAUTH_REQ %s %s %s",
      VAR_2[0], VAR_2[1], VAR_2[2]);
 if (FUNC_1(sizeof(VAR_3), VAR_4))
  return -1;
 return FUNC_3(VAR_0, VAR_3);
}
