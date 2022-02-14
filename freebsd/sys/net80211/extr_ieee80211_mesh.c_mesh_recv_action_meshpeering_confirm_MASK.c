
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int is_rx_mgtdiscard; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_node {int ni_mlstate; int ni_mllid; int ni_mlpid; struct ieee80211vap* ni_vap; } ;
struct ieee80211_meshpeer_ie {int peer_llinkid; int peer_linkid; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,int *,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

 int const VAR_5 ;



 int FUNC_1 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ieee80211_node*,int ,int ,int *) ;
 int FUNC_3 (struct ieee80211_node*,int const) ;
 struct ieee80211_meshpeer_ie* FUNC_4 (struct ieee80211_node*,struct ieee80211_frame const*,int const*,int const*,struct ieee80211_meshpeer_ie*,int ) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_node *VAR_7,
 const struct ieee80211_frame *VAR_8,
 const uint8_t *VAR_9, const uint8_t *VAR_10)
{
 struct ieee80211vap *VAR_11 = VAR_7->ni_vap;
 struct ieee80211_meshpeer_ie VAR_12;
 const struct ieee80211_meshpeer_ie *VAR_13;
 uint16_t VAR_14[3];


 VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_9+2+2+2+2, VAR_10, &VAR_12,
     VAR_2);
 if (VAR_13 == ((void*)0)) {
  return 0;
 }

 FUNC_1(VAR_11, VAR_3 | VAR_4, VAR_7,
     "recv PEER CONFIRM, local id 0x%x, peer id 0x%x",
     VAR_13->peer_llinkid, VAR_13->peer_linkid);

 switch (VAR_7->ni_mlstate) {
 case 129:
  FUNC_3(VAR_7, VAR_5);
  FUNC_6(VAR_7);
  break;
 case 128:
  FUNC_3(VAR_7, 131);
  FUNC_5(VAR_7);
  break;
 case 130:
  VAR_14[0] = VAR_7->ni_mlpid;
  VAR_14[1] = VAR_13->peer_llinkid;

  VAR_14[2] = VAR_6;
  FUNC_2(VAR_7,
      VAR_0,
      VAR_1,
      VAR_14);
  break;
 case 131:
  if (VAR_7->ni_mllid != VAR_13->peer_llinkid) {
   VAR_14[0] = VAR_7->ni_mlpid;
   VAR_14[1] = VAR_7->ni_mllid;
   VAR_14[2] = VAR_6;
   FUNC_2(VAR_7,
       VAR_0,
       VAR_1,
       VAR_14);
   FUNC_3(VAR_7, 130);
   FUNC_5(VAR_7);
  }
  break;
 default:
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_8, ((void*)0), "received confirm in invalid state %d",
      VAR_7->ni_mlstate);
  VAR_11->iv_stats.is_rx_mgtdiscard++;
  break;
 }
 return 0;
}
