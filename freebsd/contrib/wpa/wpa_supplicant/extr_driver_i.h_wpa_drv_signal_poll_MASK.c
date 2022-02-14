
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_signal_info {int dummy; } ;
struct TYPE_2__ {int (* signal_poll ) (int ,struct wpa_signal_info*) ;} ;


 int FUNC_0 (int ,struct wpa_signal_info*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
          struct wpa_signal_info *VAR_1)
{
 if (VAR_0->driver->signal_poll)
  return VAR_0->driver->signal_poll(VAR_0->drv_priv, VAR_1);
 return -1;
}
