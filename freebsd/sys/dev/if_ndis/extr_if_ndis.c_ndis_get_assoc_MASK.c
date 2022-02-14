
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ieee80211com {scalar_t__ ic_opmode; int ic_vaps; } ;
struct ndis_softc {int ndis_dev; int ndis_link; struct ieee80211com ndis_ic; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {int ni_associd; } ;
struct TYPE_7__ {int nwbx_len; int nwbx_macaddr; } ;
typedef TYPE_1__ ndis_wlan_bssid_ex ;
typedef int ndis_80211_macaddr ;
struct TYPE_8__ {int nblx_items; int * nblx_bssid; } ;
typedef TYPE_2__ ndis_80211_bssid_list_ex ;
typedef int bssid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211vap* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct ndis_softc*,TYPE_2__**) ;
 int FUNC_7 (struct ndis_softc*,int ,int *,int*) ;

__attribute__((used)) static int
FUNC_8(struct ndis_softc *VAR_6, ndis_wlan_bssid_ex **VAR_7)
{
 struct ieee80211com *VAR_8 = &VAR_6->ndis_ic;
 struct ieee80211vap *VAR_9;
 struct ieee80211_node *VAR_10;
 ndis_80211_bssid_list_ex *VAR_11;
 ndis_wlan_bssid_ex *VAR_12;
 ndis_80211_macaddr VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (!VAR_6->ndis_link)
  return (VAR_0);

 VAR_15 = sizeof(VAR_13);
 VAR_16 = FUNC_7(VAR_6, VAR_5, &VAR_13, &VAR_15);
 if (VAR_16) {
  FUNC_3(VAR_6->ndis_dev, "failed to get bssid\n");
  return (VAR_0);
 }

 VAR_9 = FUNC_0(&VAR_8->ic_vaps);
 VAR_10 = VAR_9->iv_bss;

 VAR_16 = FUNC_6(VAR_6, &VAR_11);
 if (VAR_16)
  return (VAR_16);

 VAR_12 = (ndis_wlan_bssid_ex *)&VAR_11->nblx_bssid[0];
 for (VAR_14 = 0; VAR_14 < VAR_11->nblx_items; VAR_14++) {
  if (FUNC_1(VAR_12->nwbx_macaddr, VAR_13, sizeof(VAR_13)) == 0) {
   *VAR_7 = FUNC_5(VAR_12->nwbx_len, VAR_4, VAR_3);
   if (*VAR_7 == ((void*)0)) {
    FUNC_4(VAR_11, VAR_4);
    return (VAR_1);
   }
   FUNC_2((char *)VAR_12, (char *)*VAR_7, VAR_12->nwbx_len);
   FUNC_4(VAR_11, VAR_4);
   if (VAR_8->ic_opmode == VAR_2)
    VAR_10->ni_associd = 1 | 0xc000;
   return (0);
  }
  VAR_12 = (ndis_wlan_bssid_ex *)((char *)VAR_12 + VAR_12->nwbx_len);
 }

 FUNC_4(VAR_11, VAR_4);
 return (VAR_0);
}
