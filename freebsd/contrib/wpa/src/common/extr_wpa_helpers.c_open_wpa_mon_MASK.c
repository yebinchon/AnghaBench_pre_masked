
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpa_ctrl*) ;
 int FUNC_1 (struct wpa_ctrl*) ;
 struct wpa_ctrl* FUNC_2 (char const*) ;

struct wpa_ctrl * FUNC_3(const char *VAR_0)
{
 struct wpa_ctrl *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 if (FUNC_0(VAR_1) < 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
