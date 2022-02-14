
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int num_bss; struct hostapd_data** bss; } ;
struct hostapd_data {int setup_complete_cb_ctx; int (* setup_complete_cb ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
          void *VAR_1)
{
 struct hostapd_iface *VAR_2 = VAR_0;
 struct hostapd_data *VAR_3;

 if (VAR_2->num_bss < 1 || !VAR_2->bss || !VAR_2->bss[0])
  return;
 VAR_3 = VAR_2->bss[0];
 if (VAR_3->setup_complete_cb)
  VAR_3->setup_complete_cb(VAR_3->setup_complete_cb_ctx);
}
