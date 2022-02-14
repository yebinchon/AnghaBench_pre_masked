
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 char* VAR_0 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 struct dirent* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct wpa_ctrl *VAR_1)
{
 struct dirent *VAR_2;
 DIR *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_2("Control interface directory '%s' could not be "
         "openned.\n", VAR_0);
  return;
 }

 FUNC_2("Available interfaces:\n");
 while ((VAR_2 = FUNC_3(VAR_3))) {
  if (FUNC_4(VAR_2->d_name, ".") == 0 ||
      FUNC_4(VAR_2->d_name, "..") == 0)
   continue;
  FUNC_2("%s\n", VAR_2->d_name);
 }
 FUNC_0(VAR_3);
}
