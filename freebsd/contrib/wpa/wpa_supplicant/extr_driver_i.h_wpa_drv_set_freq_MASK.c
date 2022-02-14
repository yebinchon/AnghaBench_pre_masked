
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct hostapd_freq_params {int dummy; } ;
struct TYPE_2__ {int (* set_freq ) (int ,struct hostapd_freq_params*) ;} ;


 int FUNC_0 (int ,struct hostapd_freq_params*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
       struct hostapd_freq_params *VAR_1)
{
 if (VAR_0->driver->set_freq)
  return VAR_0->driver->set_freq(VAR_0->drv_priv, VAR_1);
 return -1;
}
