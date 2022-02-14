
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {unsigned int dot11RSNAConfigPMKLifetime; unsigned int dot11RSNAConfigPMKReauthThreshold; unsigned int dot11RSNAConfigSATimeout; unsigned int proto; unsigned int pairwise_cipher; unsigned int group_cipher; unsigned int key_mgmt; unsigned int mgmt_group_cipher; unsigned int rsn_enabled; unsigned int mfp; unsigned int ocv; } ;
typedef enum wpa_sm_conf_params { ____Placeholder_wpa_sm_conf_params } wpa_sm_conf_params ;
int FUNC_0(struct wpa_sm *VAR_0, enum wpa_sm_conf_params VAR_1,
       unsigned int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0 == ((void*)0))
  return -1;

 switch (VAR_1) {
 case 138:
  if (VAR_2 > 0)
   VAR_0->dot11RSNAConfigPMKLifetime = VAR_2;
  else
   VAR_3 = -1;
  break;
 case 137:
  if (VAR_2 > 0 && VAR_2 <= 100)
   VAR_0->dot11RSNAConfigPMKReauthThreshold = VAR_2;
  else
   VAR_3 = -1;
  break;
 case 136:
  if (VAR_2 > 0)
   VAR_0->dot11RSNAConfigSATimeout = VAR_2;
  else
   VAR_3 = -1;
  break;
 case 129:
  VAR_0->proto = VAR_2;
  break;
 case 130:
  VAR_0->pairwise_cipher = VAR_2;
  break;
 case 135:
  VAR_0->group_cipher = VAR_2;
  break;
 case 134:
  VAR_0->key_mgmt = VAR_2;
  break;





 case 128:
  VAR_0->rsn_enabled = VAR_2;
  break;
 case 133:
  VAR_0->mfp = VAR_2;
  break;
 case 131:
  VAR_0->ocv = VAR_2;
  break;
 default:
  break;
 }

 return VAR_3;
}
