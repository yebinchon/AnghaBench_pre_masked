
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl *VAR_0, int VAR_1, char *VAR_2[])
{
 char VAR_3[64];
 if (VAR_1 < 1) {
  FUNC_0("Invalid 'sta' command - at least one argument, STA "
         "address, is required.\n");
  return -1;
 }
 if (VAR_1 > 1)
  FUNC_1(VAR_3, sizeof(VAR_3), "STA %s %s", VAR_2[0], VAR_2[1]);
 else
  FUNC_1(VAR_3, sizeof(VAR_3), "STA %s", VAR_2[0]);
 return FUNC_2(VAR_0, VAR_3);
}
