
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ bgscan_priv; TYPE_1__* bgscan; } ;
struct TYPE_2__ {int (* notify_beacon_loss ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct wpa_supplicant *VAR_0)
{
 if (VAR_0->bgscan && VAR_0->bgscan_priv)
  VAR_0->bgscan->notify_beacon_loss(VAR_0->bgscan_priv);
}
