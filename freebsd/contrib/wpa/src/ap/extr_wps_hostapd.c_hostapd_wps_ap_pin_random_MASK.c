
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_ap_pin_data {int timeout; int pin_txt; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {char const* ap_pin; } ;


 int FUNC_0 (struct hostapd_data*,int ,struct wps_ap_pin_data*) ;
 int FUNC_1 (int ,int,char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int*) ;

const char * FUNC_3(struct hostapd_data *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 struct wps_ap_pin_data VAR_4;

 if (FUNC_2(&VAR_3) < 0)
  return ((void*)0);
 FUNC_1(VAR_4.pin_txt, sizeof(VAR_4.pin_txt), "%08u", VAR_3);
 VAR_4.timeout = VAR_2;
 FUNC_0(VAR_1, VAR_0, &VAR_4);
 return VAR_1->conf->ap_pin;
}
