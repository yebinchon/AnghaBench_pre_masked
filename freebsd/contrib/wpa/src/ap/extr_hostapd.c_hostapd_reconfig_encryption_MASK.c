
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; scalar_t__ wpa_auth; } ;
struct TYPE_2__ {int iface; } ;


 int FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (int ,struct hostapd_data*) ;

void FUNC_2(struct hostapd_data *VAR_0)
{
 if (VAR_0->wpa_auth)
  return;

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0->conf->iface, VAR_0);
}
