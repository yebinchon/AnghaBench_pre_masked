
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_channel_info {int dummy; } ;
struct TYPE_2__ {int (* channel_info ) (int ,struct wpa_channel_info*) ;} ;


 int FUNC_0 (int ,struct wpa_channel_info*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
           struct wpa_channel_info *VAR_1)
{
 if (VAR_0->driver->channel_info)
  return VAR_0->driver->channel_info(VAR_0->drv_priv, VAR_1);
 return -1;
}
