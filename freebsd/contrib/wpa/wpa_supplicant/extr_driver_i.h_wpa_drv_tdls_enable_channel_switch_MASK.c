
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct hostapd_freq_params {int dummy; } ;
struct TYPE_2__ {int (* tdls_enable_channel_switch ) (int ,int const*,int ,struct hostapd_freq_params const*) ;} ;


 int FUNC_0 (int ,int const*,int ,struct hostapd_freq_params const*) ;

__attribute__((used)) static inline int FUNC_1(
 struct wpa_supplicant *VAR_0, const u8 *VAR_1, u8 VAR_2,
 const struct hostapd_freq_params *VAR_3)
{
 if (!VAR_0->driver->tdls_enable_channel_switch)
  return -1;
 return VAR_0->driver->tdls_enable_channel_switch(VAR_0->drv_priv, VAR_1,
        VAR_2,
        VAR_3);
}
