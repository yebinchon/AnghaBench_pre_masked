
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_caps; int ic_txpowlimit; int * ic_curchan; int * ic_bsschan; int * ic_channels; int ic_curmode; int ic_vaps; } ;
struct ndis_softc {int ndis_dev; struct ieee80211com ndis_ic; } ;
struct ieee80211vap {int iv_flags; struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {void* ni_authmode; int * ni_chan; int ni_esslen; int ni_essid; int ni_bssid; } ;
struct TYPE_7__ {int nc_dsconfig; } ;
struct TYPE_6__ {int ns_ssidlen; int ns_ssid; } ;
struct TYPE_8__ {TYPE_2__ nwbx_config; TYPE_1__ nwbx_ssid; int nwbx_macaddr; int nwbx_nettype; } ;
typedef TYPE_3__ ndis_wlan_bssid_ex ;
typedef int arg ;


 int FUNC_0 (int ,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ndis_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int* VAR_20 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int * FUNC_6 (struct ieee80211com*,int,int) ;
 int FUNC_7 (struct ndis_softc*,TYPE_3__**) ;
 int FUNC_8 (struct ndis_softc*,int ,int*,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int*) ;

__attribute__((used)) static void
FUNC_12(struct ndis_softc *VAR_21)
{
 struct ieee80211com *VAR_22 = &VAR_21->ndis_ic;
 struct ieee80211vap *VAR_23 = FUNC_2(&VAR_22->ic_vaps);
 struct ieee80211_node *VAR_24 = VAR_23->iv_bss;
 ndis_wlan_bssid_ex *VAR_25;
 int VAR_26, VAR_27, VAR_28 = 0;
 int VAR_29;
 uint32_t VAR_30;

 if (!FUNC_1(VAR_21))
  return;

 if ((VAR_26 = FUNC_7(VAR_21, &VAR_25)) != 0)
  return;


 VAR_22->ic_curmode = FUNC_10(VAR_25->nwbx_nettype);
 VAR_29 = FUNC_9(VAR_25->nwbx_nettype);
 FUNC_0(VAR_24->ni_bssid, VAR_25->nwbx_macaddr);


 FUNC_3(VAR_25->nwbx_ssid.ns_ssid, VAR_24->ni_essid,
     VAR_25->nwbx_ssid.ns_ssidlen);
 VAR_24->ni_esslen = VAR_25->nwbx_ssid.ns_ssidlen;

 if (VAR_22->ic_caps & VAR_5) {
  VAR_27 = sizeof(VAR_30);
  VAR_26 = FUNC_8(VAR_21, VAR_17, &VAR_30, &VAR_27);

  if (VAR_26)
   FUNC_4(VAR_21->ndis_dev,
       "get power mode failed: %d\n", VAR_26);
  if (VAR_30 == VAR_14)
   VAR_23->iv_flags &= ~VAR_8;
  else
   VAR_23->iv_flags |= VAR_8;
 }


 if (VAR_22->ic_caps & VAR_6) {
  VAR_27 = sizeof(VAR_30);
  FUNC_8(VAR_21, VAR_18, &VAR_30, &VAR_27);
  for (VAR_28 = 0; VAR_28 < FUNC_11(VAR_20); VAR_28++)
   if (VAR_20[VAR_28] >= VAR_30)
    break;
  VAR_22->ic_txpowlimit = VAR_28;
 }





 VAR_22->ic_curchan = FUNC_6(VAR_22,
     VAR_25->nwbx_config.nc_dsconfig / 1000, VAR_29);
 if (VAR_22->ic_curchan == ((void*)0))
  VAR_22->ic_curchan = &VAR_22->ic_channels[0];
 VAR_24->ni_chan = VAR_22->ic_curchan;
 VAR_22->ic_bsschan = VAR_22->ic_curchan;

 FUNC_5(VAR_25, VAR_13);




 VAR_27 = sizeof(VAR_30);
 VAR_26 = FUNC_8(VAR_21, VAR_16, &VAR_30, &VAR_27);
 if (VAR_26)
  FUNC_4(VAR_21->ndis_dev,
      "get authmode status failed: %d\n", VAR_26);
 else {
  VAR_23->iv_flags &= ~VAR_10;
  switch (VAR_30) {
  case 134:
   VAR_24->ni_authmode = VAR_2;
   break;
  case 133:
   VAR_24->ni_authmode = VAR_3;
   break;
  case 135:
   VAR_24->ni_authmode = VAR_0;
   break;
  case 132:
  case 128:
  case 129:
   VAR_24->ni_authmode = VAR_4;
   VAR_23->iv_flags |= VAR_11;
   break;
  case 131:
  case 130:
   VAR_24->ni_authmode = VAR_4;
   VAR_23->iv_flags |= VAR_12;
   break;
  default:
   VAR_24->ni_authmode = VAR_1;
   break;
  }
 }

 VAR_27 = sizeof(VAR_30);
 VAR_26 = FUNC_8(VAR_21, VAR_19, &VAR_30, &VAR_27);

 if (VAR_26)
  FUNC_4(VAR_21->ndis_dev,
      "get wep status failed: %d\n", VAR_26);

 if (VAR_30 == VAR_15)
  VAR_23->iv_flags |= VAR_9|VAR_7;
 else
  VAR_23->iv_flags &= ~(VAR_9|VAR_7);
}
