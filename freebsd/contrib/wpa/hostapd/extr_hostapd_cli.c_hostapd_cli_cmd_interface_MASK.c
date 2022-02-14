
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_ctrl *VAR_1, int VAR_2,
         char *VAR_3[])
{
 if (VAR_2 < 1) {
  FUNC_0(VAR_1);
  return 0;
 }
 if (FUNC_1(VAR_3[0]) != 0) {
  FUNC_2("Could not connect to interface '%s' - re-trying\n",
   VAR_0);
 }
 return 0;
}
