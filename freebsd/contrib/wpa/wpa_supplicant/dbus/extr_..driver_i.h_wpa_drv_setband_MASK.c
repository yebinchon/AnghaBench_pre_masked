
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
typedef enum set_band { ____Placeholder_set_band } set_band ;
struct TYPE_2__ {int (* set_band ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
      enum set_band VAR_1)
{
 if (!VAR_0->driver->set_band)
  return -1;
 return VAR_0->driver->set_band(VAR_0->drv_priv, VAR_1);
}
