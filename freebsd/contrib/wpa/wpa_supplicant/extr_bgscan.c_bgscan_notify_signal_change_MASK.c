
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ bgscan_priv; TYPE_1__* bgscan; } ;
struct TYPE_2__ {int (* notify_signal_change ) (scalar_t__,int,int,int,int) ;} ;


 int FUNC_0 (scalar_t__,int,int,int,int) ;

void FUNC_1(struct wpa_supplicant *VAR_0, int VAR_1,
     int VAR_2, int VAR_3,
     int VAR_4)
{
 if (VAR_0->bgscan && VAR_0->bgscan_priv)
  VAR_0->bgscan->notify_signal_change(VAR_0->bgscan_priv, VAR_1,
          VAR_2,
          VAR_3,
          VAR_4);
}
