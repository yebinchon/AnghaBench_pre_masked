
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int * eapol_auth; TYPE_1__* conf; scalar_t__ drv_priv; scalar_t__ driver; } ;
struct TYPE_2__ {int iface; scalar_t__ wpa; scalar_t__ ieee802_1x; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct hostapd_data*,int *) ;
 int FUNC_2 (struct hostapd_data*,int ,int ) ;
 int FUNC_3 (struct hostapd_data*) ;
 int VAR_0 ;

void FUNC_4(struct hostapd_data *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, ((void*)0));

 if (VAR_1->driver && VAR_1->drv_priv &&
     (VAR_1->conf->ieee802_1x || VAR_1->conf->wpa))
  FUNC_2(VAR_1, VAR_1->conf->iface, 0);

 FUNC_0(VAR_1->eapol_auth);
 VAR_1->eapol_auth = ((void*)0);

 FUNC_3(VAR_1);
}
