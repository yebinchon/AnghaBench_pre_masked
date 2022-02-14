
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_peer {int * vht_capabilities; } ;
struct wpa_eapol_ie_parse {int vht_capabilities; } ;
struct ieee80211_vht_capabilities {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(const struct wpa_eapol_ie_parse *VAR_1,
         struct wpa_tdls_peer *VAR_2)
{
 if (!VAR_1->vht_capabilities) {
  FUNC_3(VAR_0, "TDLS: No supported vht capabilities "
      "received");
  return 0;
 }

 if (!VAR_2->vht_capabilities) {
  VAR_2->vht_capabilities =
                        FUNC_1(sizeof(struct ieee80211_vht_capabilities));
  if (VAR_2->vht_capabilities == ((void*)0))
                        return -1;
 }

 FUNC_0(VAR_2->vht_capabilities, VAR_1->vht_capabilities,
                  sizeof(struct ieee80211_vht_capabilities));
 FUNC_2(VAR_0, "TDLS: Peer VHT capabilities",
      (u8 *) VAR_2->vht_capabilities,
      sizeof(struct ieee80211_vht_capabilities));

 return 0;
}
