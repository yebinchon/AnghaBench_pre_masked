
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int ,char const*) ;
 int FUNC_1 (char*,char*) ;
 struct wpa_ctrl* FUNC_2 (char*) ;
 int VAR_0 ;

__attribute__((used)) static struct wpa_ctrl * FUNC_3(const char *VAR_1)
{
 char VAR_2[128];
 struct wpa_ctrl *VAR_3;

 FUNC_0(VAR_2, sizeof(VAR_2), "%s%s", VAR_0, VAR_1);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1("wpa_command: wpa_ctrl_open(%s) failed\n", VAR_2);
 return VAR_3;
}
