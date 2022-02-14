
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; struct eapol_authenticator* eapol_auth; } ;
struct eapol_authenticator {int * default_wep_key; } ;
struct TYPE_2__ {int default_wep_key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_2)
{
 struct eapol_authenticator *VAR_3 = VAR_2->eapol_auth;

 if (VAR_2->conf->default_wep_key_len < 1)
  return 0;

 FUNC_0(VAR_3->default_wep_key);
 VAR_3->default_wep_key = FUNC_1(VAR_2->conf->default_wep_key_len);
 if (VAR_3->default_wep_key == ((void*)0) ||
     FUNC_2(VAR_3->default_wep_key,
        VAR_2->conf->default_wep_key_len)) {
  FUNC_4(VAR_1, "Could not generate random WEP key");
  FUNC_0(VAR_3->default_wep_key);
  VAR_3->default_wep_key = ((void*)0);
  return -1;
 }

 FUNC_3(VAR_0, "IEEE 802.1X: New default WEP key",
   VAR_3->default_wep_key,
   VAR_2->conf->default_wep_key_len);

 return 0;
}
