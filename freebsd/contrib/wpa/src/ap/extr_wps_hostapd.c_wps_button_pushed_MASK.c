
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_button_pushed_ctx {int p2p_dev_addr; int count; } ;
struct hostapd_data {TYPE_1__* wps; } ;
struct TYPE_2__ {int registrar; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_0, void *VAR_1)
{
 struct wps_button_pushed_ctx *VAR_2 = VAR_1;

 if (VAR_0->wps) {
  VAR_2->count++;
  return FUNC_0(VAR_0->wps->registrar,
         VAR_2->p2p_dev_addr);
 }

 return 0;
}
