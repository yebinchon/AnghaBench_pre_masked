
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int * l2; TYPE_1__* conf; scalar_t__ drv_priv; int * wpa_auth; } ;
struct TYPE_2__ {int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (struct hostapd_data*,int *),struct hostapd_data*,int ) ;
 int FUNC_1 (struct hostapd_data*,int *) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,int *,int ) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,int ) ;
 int FUNC_4 (struct hostapd_data*,int *) ;
 int FUNC_5 (struct hostapd_data*) ;
 int FUNC_6 (struct hostapd_data*) ;
 int FUNC_7 (struct hostapd_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hostapd_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int ) ;

void FUNC_12(struct hostapd_data *VAR_2)
{
 FUNC_6(VAR_2);
 FUNC_9(VAR_2);
 if (VAR_2->wpa_auth) {
  FUNC_10(VAR_2->wpa_auth);
  VAR_2->wpa_auth = ((void*)0);

  if (VAR_2->drv_priv && FUNC_3(VAR_2, 0)) {
   FUNC_11(VAR_1, "Could not disable "
       "PrivacyInvoked for interface %s",
       VAR_2->conf->iface);
  }

  if (VAR_2->drv_priv &&
      FUNC_2(VAR_2, (u8 *) "", 0)) {
   FUNC_11(VAR_1, "Could not remove generic "
       "information element from interface %s",
       VAR_2->conf->iface);
  }
 }
 FUNC_7(VAR_2);
}
