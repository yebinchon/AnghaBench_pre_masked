
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int disabled; int p2p_persistent_group; int group_cipher; int pairwise_cipher; scalar_t__ mode; scalar_t__ key_mgmt; scalar_t__ ieee80211w; scalar_t__ ocv; scalar_t__ psk_set; scalar_t__ passphrase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct wpa_ssid*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_ssid *VAR_11, int VAR_12)
{
 int VAR_13 = 0;

 if (VAR_11->passphrase) {
  if (VAR_11->psk_set) {
   FUNC_1(VAR_1, "Line %d: both PSK and "
       "passphrase configured.", VAR_12);
   VAR_13++;
  }
  FUNC_0(VAR_11);
 }

 if (VAR_11->disabled == 2)
  VAR_11->p2p_persistent_group = 1;

 if ((VAR_11->group_cipher & VAR_4) &&
     !(VAR_11->pairwise_cipher & (VAR_4 | VAR_5 |
           VAR_6 | VAR_7 |
           VAR_8))) {

  FUNC_1(VAR_0, "Line %d: removed CCMP from group cipher"
      " list since it was not allowed for pairwise "
      "cipher", VAR_12);
  VAR_11->group_cipher &= ~VAR_4;
 }

 if (VAR_11->mode == VAR_3 &&
     (VAR_11->key_mgmt != VAR_9 &&
     VAR_11->key_mgmt != VAR_10)) {
  FUNC_1(VAR_1,
      "Line %d: key_mgmt for mesh network should be open or SAE",
      VAR_12);
  VAR_13++;
 }
 return VAR_13;
}
