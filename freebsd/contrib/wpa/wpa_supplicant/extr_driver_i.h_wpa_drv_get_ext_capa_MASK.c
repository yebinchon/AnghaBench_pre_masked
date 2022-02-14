
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int extended_capa_len; int extended_capa_mask; int extended_capa; int drv_priv; TYPE_1__* driver; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;
struct TYPE_2__ {int (* get_ext_capab ) (int ,int,int *,int *,int *) ;} ;


 int FUNC_0 (int ,int,int *,int *,int *) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_supplicant *VAR_0,
           enum wpa_driver_if_type VAR_1)
{
 if (!VAR_0->driver->get_ext_capab)
  return -1;
 return VAR_0->driver->get_ext_capab(VAR_0->drv_priv, VAR_1,
         &VAR_0->extended_capa,
         &VAR_0->extended_capa_mask,
         &VAR_0->extended_capa_len);
}
