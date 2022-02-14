
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; struct eapol_authenticator* eapol_auth; } ;
struct eapol_authenticator {int default_wep_key_idx; int * default_wep_key; } ;
struct TYPE_2__ {scalar_t__ individual_wep_key_len; scalar_t__ wep_rekeying_period; int default_wep_key_len; int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,void (*) (void*,void*),struct hostapd_data*,int *) ;
 scalar_t__ FUNC_2 (int ,struct hostapd_data*,int ,int ,int,int,int *,int ,int *,int ) ;
 int FUNC_3 (struct hostapd_data*,int *,int ,int ,char*) ;
 scalar_t__ FUNC_4 (struct hostapd_data*) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_6, void *VAR_7)
{
 struct hostapd_data *VAR_8 = VAR_6;
 struct eapol_authenticator *VAR_9 = VAR_8->eapol_auth;

 if (VAR_9->default_wep_key_idx >= 3)
  VAR_9->default_wep_key_idx =
   VAR_8->conf->individual_wep_key_len > 0 ? 1 : 0;
 else
  VAR_9->default_wep_key_idx++;

 FUNC_6(VAR_2, "IEEE 802.1X: New default WEP key index %d",
     VAR_9->default_wep_key_idx);

 if (FUNC_4(VAR_8)) {
  FUNC_3(VAR_8, ((void*)0), VAR_1,
          VAR_0, "failed to generate a "
          "new broadcast key");
  FUNC_5(VAR_9->default_wep_key);
  VAR_9->default_wep_key = ((void*)0);
  return;
 }



 if (FUNC_2(VAR_8->conf->iface, VAR_8, VAR_3,
    VAR_4,
    VAR_9->default_wep_key_idx, 1, ((void*)0), 0,
    VAR_9->default_wep_key,
    VAR_8->conf->default_wep_key_len)) {
  FUNC_3(VAR_8, ((void*)0), VAR_1,
          VAR_0, "failed to configure a "
          "new broadcast key");
  FUNC_5(VAR_9->default_wep_key);
  VAR_9->default_wep_key = ((void*)0);
  return;
 }

 FUNC_0(VAR_8, VAR_5, ((void*)0));

 if (VAR_8->conf->wep_rekeying_period > 0) {
  FUNC_1(VAR_8->conf->wep_rekeying_period, 0,
           FUNC_7, VAR_8, ((void*)0));
 }
}
