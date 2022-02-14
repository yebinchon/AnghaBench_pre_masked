
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int default_len; int* len; scalar_t__ keys_set; } ;
struct TYPE_6__ {int security_policy; TYPE_2__ wep; } ;
struct hostapd_bss_config {scalar_t__ individual_wep_key_len; int wpa; int rsn_pairwise; int wpa_pairwise; int group_cipher; int wpa_group; int wpa_group_rekey; int default_wep_key_len; void* wpa_key_mgmt; TYPE_3__ ssid; scalar_t__ osen; scalar_t__ ieee802_1x; TYPE_1__* radius; int wpa_group_rekey_set; scalar_t__ broadcast_key_idx_min; } ;
struct TYPE_4__ {int acct_servers; int acct_server; int auth_servers; int auth_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int,int,int) ;

void FUNC_1(struct hostapd_bss_config *VAR_13,
     int VAR_14)
{
 if (VAR_13->individual_wep_key_len == 0) {


  VAR_13->broadcast_key_idx_min = 0;
 }

 if ((VAR_13->wpa & 2) && VAR_13->rsn_pairwise == 0)
  VAR_13->rsn_pairwise = VAR_13->wpa_pairwise;
 if (VAR_13->group_cipher)
  VAR_13->wpa_group = VAR_13->group_cipher;
 else
  VAR_13->wpa_group = FUNC_0(VAR_13->wpa,
           VAR_13->wpa_pairwise,
           VAR_13->rsn_pairwise);
 if (!VAR_13->wpa_group_rekey_set)
  VAR_13->wpa_group_rekey = VAR_13->wpa_group == VAR_8 ?
   600 : 86400;

 if (VAR_14) {
  VAR_13->radius->auth_server = VAR_13->radius->auth_servers;
  VAR_13->radius->acct_server = VAR_13->radius->acct_servers;
 }

 if (VAR_13->wpa && VAR_13->ieee802_1x) {
  VAR_13->ssid.security_policy = VAR_4;
 } else if (VAR_13->wpa) {
  VAR_13->ssid.security_policy = VAR_5;
 } else if (VAR_13->ieee802_1x) {
  int VAR_15 = VAR_7;
  VAR_13->ssid.security_policy = VAR_0;
  VAR_13->ssid.wep.default_len = VAR_13->default_wep_key_len;
  if (VAR_14 && VAR_13->default_wep_key_len) {
   VAR_15 = VAR_13->default_wep_key_len >= 13 ?
    VAR_9 : VAR_10;
  } else if (VAR_14 && VAR_13->ssid.wep.keys_set) {
   if (VAR_13->ssid.wep.len[0] >= 13)
    VAR_15 = VAR_9;
   else
    VAR_15 = VAR_10;
  }
  VAR_13->wpa_group = VAR_15;
  VAR_13->wpa_pairwise = VAR_15;
  VAR_13->rsn_pairwise = VAR_15;
  if (VAR_14)
   VAR_13->wpa_key_mgmt = VAR_11;
 } else if (VAR_13->ssid.wep.keys_set) {
  int VAR_16 = VAR_10;
  if (VAR_13->ssid.wep.len[0] >= 13)
   VAR_16 = VAR_9;
  VAR_13->ssid.security_policy = VAR_3;
  VAR_13->wpa_group = VAR_16;
  VAR_13->wpa_pairwise = VAR_16;
  VAR_13->rsn_pairwise = VAR_16;
  if (VAR_14)
   VAR_13->wpa_key_mgmt = VAR_12;
 } else if (VAR_13->osen) {
  VAR_13->ssid.security_policy = VAR_1;
  VAR_13->wpa_group = VAR_6;
  VAR_13->wpa_pairwise = 0;
  VAR_13->rsn_pairwise = VAR_6;
 } else {
  VAR_13->ssid.security_policy = VAR_2;
  if (VAR_14) {
   VAR_13->wpa_group = VAR_7;
   VAR_13->wpa_pairwise = VAR_7;
   VAR_13->rsn_pairwise = VAR_7;
   VAR_13->wpa_key_mgmt = VAR_12;
  }
 }
}
