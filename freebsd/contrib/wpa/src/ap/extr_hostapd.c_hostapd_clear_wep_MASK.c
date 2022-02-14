
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {scalar_t__ conf; TYPE_1__* iface; scalar_t__ drv_priv; } ;
struct TYPE_2__ {int driver_ap_teardown; } ;


 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_0)
{
 if (VAR_0->drv_priv && !VAR_0->iface->driver_ap_teardown && VAR_0->conf) {
  FUNC_1(VAR_0, 0);
  FUNC_0(VAR_0);
 }
}
