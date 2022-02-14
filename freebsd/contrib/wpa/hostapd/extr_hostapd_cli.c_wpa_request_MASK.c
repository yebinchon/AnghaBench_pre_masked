
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
struct hostapd_cli_cmd {char* cmd; int (* handler ) (struct wpa_ctrl*,int,char**) ;} ;


 struct hostapd_cli_cmd* VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (struct wpa_ctrl*,int,char**) ;

__attribute__((used)) static void FUNC_5(struct wpa_ctrl *VAR_1, int VAR_2, char *VAR_3[])
{
 const struct hostapd_cli_cmd *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = 0;
 VAR_4 = VAR_0;
 while (VAR_4->cmd) {
  if (FUNC_3(VAR_4->cmd, VAR_3[0], FUNC_2(VAR_3[0])) == 0) {
   VAR_5 = VAR_4;
   if (FUNC_0(VAR_4->cmd, VAR_3[0]) == 0) {

    VAR_6 = 1;
    break;
   }
   VAR_6++;
  }
  VAR_4++;
 }

 if (VAR_6 > 1) {
  FUNC_1("Ambiguous command '%s'; possible commands:", VAR_3[0]);
  VAR_4 = VAR_0;
  while (VAR_4->cmd) {
   if (FUNC_3(VAR_4->cmd, VAR_3[0], FUNC_2(VAR_3[0])) ==
       0) {
    FUNC_1(" %s", VAR_4->cmd);
   }
   VAR_4++;
  }
  FUNC_1("\n");
 } else if (VAR_6 == 0) {
  FUNC_1("Unknown command '%s'\n", VAR_3[0]);
 } else {
  VAR_5->handler(VAR_1, VAR_2 - 1, &VAR_3[1]);
 }
}
