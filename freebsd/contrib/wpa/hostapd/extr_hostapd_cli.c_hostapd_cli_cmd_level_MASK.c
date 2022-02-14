
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl *VAR_0, int VAR_1, char *VAR_2[])
{
 char VAR_3[256];
 if (VAR_1 != 1) {
  FUNC_0("Invalid LEVEL command: needs one argument (debug "
         "level)\n");
  return 0;
 }
 FUNC_1(VAR_3, sizeof(VAR_3), "LEVEL %s", VAR_2[0]);
 return FUNC_2(VAR_0, VAR_3);
}
