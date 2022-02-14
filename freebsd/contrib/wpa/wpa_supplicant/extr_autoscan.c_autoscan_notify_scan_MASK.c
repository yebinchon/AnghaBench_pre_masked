
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int scan_interval; TYPE_2__* sched_scan_plans; scalar_t__ autoscan_priv; TYPE_1__* autoscan; } ;
struct wpa_scan_results {int dummy; } ;
struct TYPE_4__ {int interval; } ;
struct TYPE_3__ {int (* notify_scan ) (scalar_t__,struct wpa_scan_results*) ;} ;


 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (scalar_t__,struct wpa_scan_results*) ;

int FUNC_2(struct wpa_supplicant *VAR_0,
    struct wpa_scan_results *VAR_1)
{
 int VAR_2;

 if (VAR_0->autoscan && VAR_0->autoscan_priv) {
  VAR_2 = VAR_0->autoscan->notify_scan(VAR_0->autoscan_priv,
       VAR_1);

  if (VAR_2 <= 0)
   return -1;

  VAR_0->scan_interval = VAR_2;
  VAR_0->sched_scan_plans[0].interval = VAR_2;

  FUNC_0(VAR_0);
 }

 return 0;
}
