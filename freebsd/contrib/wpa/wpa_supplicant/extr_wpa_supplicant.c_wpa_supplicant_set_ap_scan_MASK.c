
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; TYPE_2__* conf; TYPE_1__* driver; } ;
struct TYPE_4__ {int ap_scan; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpa_supplicant*) ;

int FUNC_3(struct wpa_supplicant *VAR_4, int VAR_5)
{

 int VAR_6;

 if (VAR_5 < 0 || VAR_5 > 2)
  return -1;

 if (VAR_5 == 2 && FUNC_0(VAR_4->driver->name, "nl80211") == 0) {
  FUNC_1(VAR_1,
      "Note: nl80211 driver interface is not designed to be used with ap_scan=2; this can result in connection failures");
 }
 VAR_6 = VAR_4->conf->ap_scan;
 VAR_4->conf->ap_scan = VAR_5;

 if (VAR_6 != VAR_4->conf->ap_scan)
  FUNC_2(VAR_4);

 return 0;
}
