
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_ap_pin_data {int timeout; int pin_txt; } ;
struct hostapd_data {int wps_upnp; TYPE_1__* conf; int wps; } ;
struct TYPE_2__ {int ap_pin; } ;


 int FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hostapd_data *VAR_0, void *VAR_1)
{
 struct wps_ap_pin_data *VAR_2 = VAR_1;

 if (!VAR_0->wps)
  return 0;

 FUNC_1(VAR_0->conf->ap_pin);
 VAR_0->conf->ap_pin = FUNC_2(VAR_2->pin_txt);



 FUNC_0(VAR_0, VAR_2->timeout);
 return 0;
}
