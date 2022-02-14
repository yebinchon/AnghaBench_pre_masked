
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wpa_eapol_variable ;
typedef int u8 ;
struct sta_info {TYPE_2__* eapol_sm; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_4__ {int keyRun; TYPE_1__* eap_if; } ;
struct TYPE_3__ {int eapKeyAvailable; } ;




 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const u8 *VAR_1,
          wpa_eapol_variable VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_0;
 struct sta_info *VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 == ((void*)0) || VAR_4->eapol_sm == ((void*)0))
  return -1;
 switch (VAR_2) {
 case 128:
  return VAR_4->eapol_sm->keyRun;
 case 129:
  return VAR_4->eapol_sm->eap_if->eapKeyAvailable;
 default:
  return -1;
 }
}
