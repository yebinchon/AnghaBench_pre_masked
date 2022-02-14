
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int ic_vaps; } ;
struct iwi_softc {int sc_state_timer; int sc_disassoctask; int sc_dev; int fw_state; int flags; int sc_monitortask; struct ieee80211com sc_ic; } ;
struct iwi_notif_scan_complete {int status; int nchan; } ;
struct iwi_notif_scan_channel {int nchan; } ;
struct iwi_notif_beacon_state {int number; int state; } ;
struct iwi_notif_authentication {int state; } ;
struct iwi_notif_association {int state; } ;
struct iwi_notif {int type; int len; int flags; } ;
struct TYPE_2__ {int is_beacon_miss; int is_rx_disassoc; int is_rx_auth_fail; int is_rx_deauth; } ;
struct ieee80211vap {TYPE_1__ iv_stats; int iv_bmissthreshold; int iv_state; int iv_opmode; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int const VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct iwi_softc*,int const) ;
 struct ieee80211vap* FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ieee80211vap*,int ,int) ;
 int FUNC_7 (struct ieee80211com*,int *) ;
 int FUNC_8 (struct ieee80211vap*) ;
 int FUNC_9 (struct ieee80211vap*,struct ieee80211_frame const*,int ) ;
 int FUNC_10 (struct iwi_softc*,struct iwi_notif*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct iwi_softc *VAR_8, struct iwi_notif *VAR_9)
{
 struct ieee80211com *VAR_10 = &VAR_8->sc_ic;
 struct ieee80211vap *VAR_11 = FUNC_3(&VAR_10->ic_vaps);
 struct iwi_notif_scan_channel *VAR_12;
 struct iwi_notif_scan_complete *VAR_13;
 struct iwi_notif_authentication *VAR_14;
 struct iwi_notif_association *VAR_15;
 struct iwi_notif_beacon_state *VAR_16;

 switch (VAR_9->type) {
 case 129:
  VAR_12 = (struct iwi_notif_scan_channel *)(VAR_9 + 1);

  FUNC_1(3, ("Scan of channel %u complete (%u)\n",
      FUNC_5(VAR_12->nchan, 0), VAR_12->nchan));


  VAR_8->sc_state_timer = 3;
  break;

 case 128:
  VAR_13 = (struct iwi_notif_scan_complete *)(VAR_9 + 1);

  FUNC_1(2, ("Scan completed (%u, %u)\n", VAR_13->nchan,
      VAR_13->status));

  FUNC_2(VAR_8, VAR_6);
  if (VAR_11->iv_opmode == VAR_0) {
   FUNC_7(VAR_10, &VAR_8->sc_monitortask);
   break;
  }

  if (VAR_13->status == VAR_7) {

   FUNC_8(VAR_11);
  }
  break;

 case 134:
  VAR_14 = (struct iwi_notif_authentication *)(VAR_9 + 1);
  switch (VAR_14->state) {
  case 138:
   FUNC_1(2, ("Authentication succeeeded\n"));
   FUNC_6(VAR_11, VAR_1, -1);
   break;
  case 143:





   VAR_8->flags &= ~VAR_5;
   if (VAR_11->iv_state != VAR_2) {
    FUNC_1(2, ("Authentication failed\n"));
    VAR_11->iv_stats.is_rx_auth_fail++;
    FUNC_2(VAR_8, 137);
   } else {
    FUNC_1(2, ("Deauthenticated\n"));
    VAR_11->iv_stats.is_rx_deauth++;
   }
   FUNC_6(VAR_11, VAR_3, -1);
   break;
  case 141:
  case 142:
  case 139:
   break;
  case 140:
   FUNC_1(2, ("Initial authentication handshake failed; "
    "you probably need shared key\n"));
   VAR_11->iv_stats.is_rx_auth_fail++;
   FUNC_2(VAR_8, 137);

   break;
  default:
   FUNC_4(VAR_8->sc_dev,
       "unknown authentication state %u\n", VAR_14->state);
   break;
  }
  break;

 case 135:
  VAR_15 = (struct iwi_notif_association *)(VAR_9 + 1);
  switch (VAR_15->state) {
  case 138:

   break;
  case 144:
   FUNC_1(2, ("Association succeeded\n"));
   VAR_8->flags |= VAR_5;
   FUNC_2(VAR_8, 137);
   FUNC_9(VAR_11,
       (const struct ieee80211_frame *)(VAR_15+1),
       FUNC_11(VAR_9->len) - sizeof(*VAR_15) - 1);
   FUNC_6(VAR_11, VAR_2, -1);
   break;
  case 145:
   VAR_8->flags &= ~VAR_5;
   switch (VAR_8->fw_state) {
   case 137:
    FUNC_1(2, ("Association failed\n"));
    FUNC_2(VAR_8, 137);
    FUNC_6(VAR_11, VAR_3, -1);
    break;

   case 136:
    FUNC_1(2, ("Dissassociated\n"));
    FUNC_2(VAR_8, 136);
    VAR_11->iv_stats.is_rx_disassoc++;
    FUNC_6(VAR_11, VAR_3, -1);
    break;
   }
   break;
  default:
   FUNC_4(VAR_8->sc_dev,
       "unknown association state %u\n", VAR_15->state);
   break;
  }
  break;

 case 133:

  VAR_16 = (struct iwi_notif_beacon_state *)(VAR_9 + 1);

  FUNC_1(5, ("Beacon state (%u, %u)\n",
      VAR_16->state, FUNC_12(VAR_16->number)));

  if (VAR_16->state == VAR_4) {







   if (FUNC_12(VAR_16->number) >= VAR_11->iv_bmissthreshold) {
    FUNC_0(("Beacon miss: %u >= %u\n",
        FUNC_12(VAR_16->number),
        VAR_11->iv_bmissthreshold));
    VAR_11->iv_stats.is_beacon_miss++;
    FUNC_7(VAR_10, &VAR_8->sc_disassoctask);
   }
  }
  break;

 case 132:
 case 130:

  FUNC_1(5, ("Notification (%u)\n", VAR_9->type));
  break;
 case 131:
  FUNC_10(VAR_8, VAR_9);
  break;

 default:
  FUNC_0(("unknown notification type %u flags 0x%x len %u\n",
      VAR_9->type, VAR_9->flags, FUNC_11(VAR_9->len)));
  break;
 }
}
