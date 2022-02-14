
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; scalar_t__ get_pref_freq_list_override; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;
struct TYPE_2__ {int (* get_pref_freq_list ) (int ,int,unsigned int*,unsigned int*) ;} ;


 int FUNC_0 (int ,int,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct wpa_supplicant*,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_supplicant *VAR_0,
          enum wpa_driver_if_type VAR_1,
          unsigned int *VAR_2,
          unsigned int *VAR_3)
{





 if (!VAR_0->driver->get_pref_freq_list)
  return -1;
 return VAR_0->driver->get_pref_freq_list(VAR_0->drv_priv, VAR_1,
       VAR_2, VAR_3);
}
