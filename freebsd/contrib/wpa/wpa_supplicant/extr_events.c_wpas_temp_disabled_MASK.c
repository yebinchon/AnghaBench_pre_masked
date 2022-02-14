
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct TYPE_2__ {scalar_t__ sec; } ;
struct wpa_ssid {TYPE_1__ disabled_until; } ;
struct os_reltime {scalar_t__ sec; } ;


 int FUNC_0 (struct os_reltime*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*,int ) ;

int FUNC_2(struct wpa_supplicant *VAR_0, struct wpa_ssid *VAR_1)
{
 struct os_reltime VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->disabled_until.sec == 0)
  return 0;

 FUNC_0(&VAR_2);
 if (VAR_1->disabled_until.sec > VAR_2.sec)
  return VAR_1->disabled_until.sec - VAR_2.sec;

 FUNC_1(VAR_0, VAR_1, 0);

 return 0;
}
