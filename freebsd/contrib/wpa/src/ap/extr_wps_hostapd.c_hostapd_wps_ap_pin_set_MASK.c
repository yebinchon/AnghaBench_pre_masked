
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_ap_pin_data {int timeout; int pin_txt; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (struct hostapd_data*,int ,struct wps_ap_pin_data*) ;
 int FUNC_1 (int ,int,char*,char const*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_0 ;

int FUNC_3(struct hostapd_data *VAR_1, const char *VAR_2,
      int VAR_3)
{
 struct wps_ap_pin_data VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4.pin_txt, sizeof(VAR_4.pin_txt), "%s", VAR_2);
 if (FUNC_2(sizeof(VAR_4.pin_txt), VAR_5))
  return -1;
 VAR_4.timeout = VAR_3;
 return FUNC_0(VAR_1, VAR_0, &VAR_4);
}
