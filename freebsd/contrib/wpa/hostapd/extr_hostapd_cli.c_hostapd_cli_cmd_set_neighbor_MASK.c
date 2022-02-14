
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (char*,int,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_4(struct wpa_ctrl *VAR_0, int VAR_1,
     char *VAR_2[])
{
 char VAR_3[2048];
 int VAR_4;

 if (VAR_1 < 3 || VAR_1 > 6) {
  FUNC_2("Invalid set_neighbor command: needs 3-6 arguments\n");
  return -1;
 }

 VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3), "SET_NEIGHBOR %s %s %s %s %s %s",
     VAR_2[0], VAR_2[1], VAR_2[2], VAR_1 >= 4 ? VAR_2[3] : "",
     VAR_1 >= 5 ? VAR_2[4] : "", VAR_1 == 6 ? VAR_2[5] : "");
 if (FUNC_1(sizeof(VAR_3), VAR_4)) {
  FUNC_2("Too long SET_NEIGHBOR command.\n");
  return -1;
 }
 return FUNC_3(VAR_0, VAR_3);
}
