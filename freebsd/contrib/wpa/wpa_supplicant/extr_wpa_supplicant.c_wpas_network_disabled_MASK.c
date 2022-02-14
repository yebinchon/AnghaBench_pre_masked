
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int drv_enc; scalar_t__ drv_capa_known; scalar_t__ p2p_mgmt; } ;
struct wpa_ssid {size_t* wep_key_len; scalar_t__ ssid_len; int mem_only_psk; scalar_t__ sae_password; int key_mgmt; int ext_psk; int passphrase; int psk_set; scalar_t__ disabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct wpa_supplicant *VAR_4, struct wpa_ssid *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 if (VAR_4->p2p_mgmt)
  return 1;

 if (VAR_5 == ((void*)0))
  return 1;

 if (VAR_5->disabled)
  return 1;

 if (VAR_4->drv_capa_known)
  VAR_7 = VAR_4->drv_enc;
 else
  VAR_7 = (unsigned int) -1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  size_t VAR_8 = VAR_5->wep_key_len[VAR_6];
  if (VAR_8 == 0)
   continue;
  if (VAR_8 == 5 && (VAR_7 & VAR_3))
   continue;
  if (VAR_8 == 13 && (VAR_7 & VAR_1))
   continue;
  if (VAR_8 == 16 && (VAR_7 & VAR_2))
   continue;
  return 1;
 }

 if (FUNC_1(VAR_5->key_mgmt) && !VAR_5->psk_set &&
     (!VAR_5->passphrase || VAR_5->ssid_len != 0) && !VAR_5->ext_psk &&
     !(FUNC_0(VAR_5->key_mgmt) && VAR_5->sae_password) &&
     !VAR_5->mem_only_psk)
  return 1;

 return 0;
}
