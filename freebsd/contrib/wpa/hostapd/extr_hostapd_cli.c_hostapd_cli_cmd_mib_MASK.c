
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_ctrl *VAR_0, int VAR_1, char *VAR_2[])
{
 if (VAR_1 > 0) {
  char VAR_3[100];
  FUNC_0(VAR_3, sizeof(VAR_3), "MIB %s", VAR_2[0]);
  return FUNC_1(VAR_0, VAR_3);
 }
 return FUNC_1(VAR_0, "MIB");
}
