
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ bgscan_priv; TYPE_1__* bgscan; } ;
struct wpa_scan_results {int dummy; } ;
struct TYPE_2__ {int (* notify_scan ) (scalar_t__,struct wpa_scan_results*) ;} ;


 int FUNC_0 (scalar_t__,struct wpa_scan_results*) ;

int FUNC_1(struct wpa_supplicant *VAR_0,
         struct wpa_scan_results *VAR_1)
{
 if (VAR_0->bgscan && VAR_0->bgscan_priv)
  return VAR_0->bgscan->notify_scan(VAR_0->bgscan_priv,
        VAR_1);
 return 0;
}
