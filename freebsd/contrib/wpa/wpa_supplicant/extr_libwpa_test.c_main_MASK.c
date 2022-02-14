
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (struct wpa_ctrl*) ;
 int FUNC_1 (struct wpa_ctrl*) ;
 int FUNC_2 (struct wpa_ctrl*) ;
 struct wpa_ctrl* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct wpa_ctrl*) ;
 int FUNC_5 (struct wpa_ctrl*,char*,size_t*) ;

int FUNC_6(int VAR_0, char *VAR_1[])
{
 struct wpa_ctrl *VAR_2;

 VAR_2 = FUNC_3("foo");
 if (!VAR_2)
  return -1;
 if (FUNC_0(VAR_2) == 0)
  FUNC_2(VAR_2);
 if (FUNC_4(VAR_2)) {
  char VAR_3[10];
  size_t VAR_4;

  VAR_4 = sizeof(VAR_3);
  FUNC_5(VAR_2, VAR_3, &VAR_4);
 }
 FUNC_1(VAR_2);

 return 0;
}
