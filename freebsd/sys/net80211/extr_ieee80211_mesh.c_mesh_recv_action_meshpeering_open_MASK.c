
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_node {int ni_mlstate; int ni_mlpid; int ni_mllid; struct ieee80211vap* ni_vap; } ;
struct ieee80211_meshpeer_ie {int peer_llinkid; int peer_linkid; } ;
struct ieee80211_mesh_state {int ms_neighbors; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ieee80211_node*,int ,int ,int *) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211_node*,int const) ;
 struct ieee80211_meshpeer_ie* FUNC_4 (struct ieee80211_node*,struct ieee80211_frame const*,int const*,int const*,struct ieee80211_meshpeer_ie*,int ) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_node *VAR_9,
 const struct ieee80211_frame *VAR_10,
 const uint8_t *VAR_11, const uint8_t *VAR_12)
{
 struct ieee80211vap *VAR_13 = VAR_9->ni_vap;
 struct ieee80211_mesh_state *VAR_14 = VAR_13->iv_mesh;
 struct ieee80211_meshpeer_ie VAR_15;
 const struct ieee80211_meshpeer_ie *VAR_16;
 uint16_t VAR_17[3];


 VAR_16 = FUNC_4(VAR_9, VAR_10, VAR_11+2+2, VAR_12, &VAR_15,
     VAR_3);
 if (VAR_16 == ((void*)0)) {
  return 0;
 }


 FUNC_0(VAR_13, VAR_5 | VAR_6, VAR_9,
     "recv PEER OPEN, lid 0x%x", VAR_16->peer_llinkid);

 switch (VAR_9->ni_mlstate) {
 case 130:

  if (VAR_14->ms_neighbors >= VAR_4) {
   VAR_17[0] = VAR_16->peer_llinkid;
   VAR_17[1] = 0;
   VAR_17[2] = VAR_7;
   FUNC_1(VAR_9,
       VAR_0,
       VAR_1,
       VAR_17);

   return (0);
  }

  FUNC_3(VAR_9, 129);
  VAR_9->ni_mllid = VAR_16->peer_llinkid;
  VAR_9->ni_mlpid = FUNC_2(VAR_13);
  if (VAR_9->ni_mlpid == 0)
   return 0;
  VAR_17[0] = VAR_9->ni_mlpid;

  FUNC_1(VAR_9,
      VAR_0,
      VAR_3, VAR_17);

  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_9->ni_mllid;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_2,
      VAR_17);
  FUNC_5(VAR_9);
  break;
 case 129:

  if (VAR_9->ni_mllid != VAR_16->peer_llinkid) {
   VAR_17[0] = VAR_9->ni_mllid;
   VAR_17[1] = VAR_9->ni_mlpid;
   VAR_17[2] = VAR_8;
   FUNC_1(VAR_9,
       VAR_0,
       VAR_1,
       VAR_17);
   FUNC_3(VAR_9, 131);
   FUNC_5(VAR_9);
   break;
  }

  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_9->ni_mllid;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_2,
      VAR_17);
  break;
 case 128:
  VAR_9->ni_mllid = VAR_16->peer_llinkid;
  FUNC_3(VAR_9, 129);
  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_9->ni_mllid;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_2,
      VAR_17);

  break;
 case 133:
  if (VAR_9->ni_mlpid != VAR_16->peer_linkid ||
      VAR_9->ni_mllid != VAR_16->peer_llinkid) {
   VAR_17[0] = VAR_9->ni_mlpid;
   VAR_17[1] = VAR_9->ni_mllid;
   VAR_17[2] = VAR_8;
   FUNC_1(VAR_9,
       VAR_0,
       VAR_1,
       VAR_17);
   FUNC_3(VAR_9,
       131);
   FUNC_5(VAR_9);
   break;
  }
  FUNC_3(VAR_9, 132);
  VAR_9->ni_mllid = VAR_16->peer_llinkid;
  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_9->ni_mllid;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_2,
      VAR_17);
  FUNC_6(VAR_9);
  break;
 case 132:
  if (VAR_9->ni_mllid != VAR_16->peer_llinkid) {
   VAR_17[0] = VAR_9->ni_mllid;
   VAR_17[1] = VAR_9->ni_mlpid;
   VAR_17[2] = VAR_8;
   FUNC_1(VAR_9,
       VAR_0,
       VAR_1,
       VAR_17);
   FUNC_3(VAR_9, 131);
   FUNC_5(VAR_9);
   break;
  }
  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_9->ni_mllid;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_2,
      VAR_17);
  break;
 case 131:
  VAR_17[0] = VAR_9->ni_mlpid;
  VAR_17[1] = VAR_16->peer_llinkid;

  VAR_17[2] = VAR_8;
  FUNC_1(VAR_9,
      VAR_0,
      VAR_1,
      VAR_17);
  break;
 }
 return 0;
}
