
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int extended_capa_len; int extended_capa_mask; int extended_capa; struct hostapd_data** bss; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* get_ext_capab ) (int ,int ,int *,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;

void FUNC_1(struct hostapd_iface *VAR_1)
{
 struct hostapd_data *VAR_2 = VAR_1->bss[0];

 if (!VAR_2->driver || !VAR_2->driver->get_ext_capab)
  return;

 VAR_2->driver->get_ext_capab(VAR_2->drv_priv, VAR_0,
        &VAR_1->extended_capa,
        &VAR_1->extended_capa_mask,
        &VAR_1->extended_capa_len);
}
