
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_flags; TYPE_1__* conf; } ;
struct TYPE_2__ {int ap_scan; } ;


 int VAR_0 ;

int FUNC_0(struct wpa_supplicant *VAR_1)
{
 return VAR_1->conf->ap_scan == 2 ||
  (VAR_1->drv_flags & VAR_0);
}
