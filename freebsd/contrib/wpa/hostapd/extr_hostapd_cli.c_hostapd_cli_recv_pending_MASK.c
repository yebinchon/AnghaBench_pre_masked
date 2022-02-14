
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_4 (struct wpa_ctrl*,char*,size_t*) ;

__attribute__((used)) static void FUNC_5(struct wpa_ctrl *VAR_1, int VAR_2,
         int VAR_3)
{
 int VAR_4 = 1;
 if (VAR_0 == ((void*)0))
  return;
 while (FUNC_3(VAR_1)) {
  char VAR_5[4096];
  size_t VAR_6 = sizeof(VAR_5) - 1;
  if (FUNC_4(VAR_1, VAR_5, &VAR_6) == 0) {
   VAR_5[VAR_6] = '\0';
   if (VAR_3)
    FUNC_1(VAR_5, VAR_6);
   else {
    FUNC_0(VAR_5);
    if (VAR_2 && VAR_4)
     FUNC_2("\n");
    VAR_4 = 0;
    FUNC_2("%s\n", VAR_5);
   }
  } else {
   FUNC_2("Could not read pending message.\n");
   break;
  }
 }
}
