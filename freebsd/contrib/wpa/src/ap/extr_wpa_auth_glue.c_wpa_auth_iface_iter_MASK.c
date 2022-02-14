
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_auth_iface_iter_data {int cb_ctx; scalar_t__ (* cb ) (scalar_t__,int ) ;} ;
struct hostapd_iface {size_t num_bss; TYPE_1__** bss; } ;
struct TYPE_2__ {scalar_t__ wpa_auth; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_0, void *VAR_1)
{
 struct wpa_auth_iface_iter_data *VAR_2 = VAR_1;
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_bss; VAR_3++) {
  if (VAR_0->bss[VAR_3]->wpa_auth &&
      VAR_2->cb(VAR_0->bss[VAR_3]->wpa_auth, VAR_2->cb_ctx))
   return 1;
 }
 return 0;
}
