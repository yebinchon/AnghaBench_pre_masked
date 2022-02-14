
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_context {int registrar; } ;
struct hostapd_data {struct wps_context* wps; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_context*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct wps_context*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct hostapd_data *VAR_1)
{
 struct wps_context *VAR_2 = VAR_1->wps;

 if (VAR_2 == ((void*)0))
  return 0;
 return 0;
}
