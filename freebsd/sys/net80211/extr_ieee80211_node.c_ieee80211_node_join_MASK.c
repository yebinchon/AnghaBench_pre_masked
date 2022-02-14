
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211vap {int iv_max_aid; TYPE_1__* iv_auth; int iv_sta_assoc; int * iv_aid_bitmap; } ;
struct ieee80211com {int ic_flags; int (* ic_newassoc ) (struct ieee80211_node*,int) ;int ic_bsschan; int ic_sta_assoc; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_flags; int ni_chw; int ni_jointime; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct TYPE_2__ {int (* ia_node_join ) (struct ieee80211_node*) ;} ;


 int FUNC_0 (struct ieee80211vap*,int) ;
 int FUNC_1 (struct ieee80211vap*,int) ;
 scalar_t__ FUNC_2 (struct ieee80211vap*,struct ieee80211_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211com*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct ieee80211_node*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_10 (struct ieee80211_node*,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct ieee80211_node*) ;
 int FUNC_14 (struct ieee80211_node*) ;
 int FUNC_15 (struct ieee80211_node*) ;
 int FUNC_16 (struct ieee80211_node*) ;
 int FUNC_17 (struct ieee80211_node*,int) ;
 int FUNC_18 (struct ieee80211_node*) ;
 int FUNC_19 (struct ieee80211_node*) ;
 int FUNC_20 (struct ieee80211_node*,int) ;
 int FUNC_21 (struct ieee80211_node*) ;
 int VAR_16 ;

void
FUNC_22(struct ieee80211_node *VAR_17, int VAR_18)
{
 struct ieee80211com *VAR_19 = VAR_17->ni_ic;
 struct ieee80211vap *VAR_20 = VAR_17->ni_vap;
 int VAR_21;

 if (VAR_17->ni_associd == 0) {
  uint16_t VAR_22;

  FUNC_12(VAR_20->iv_aid_bitmap != ((void*)0), ("no aid bitmap"));




  for (VAR_22 = 1; VAR_22 < VAR_20->iv_max_aid; VAR_22++) {
   if (!FUNC_0(VAR_20, VAR_22))
    break;
  }
  if (VAR_22 >= VAR_20->iv_max_aid) {
   FUNC_10(VAR_17, VAR_18, VAR_15);
   FUNC_15(VAR_17);
   return;
  }
  VAR_17->ni_associd = VAR_22 | 0xc000;
  VAR_17->ni_jointime = VAR_16;
  FUNC_7(VAR_19);
  FUNC_1(VAR_20, VAR_17->ni_associd);
  VAR_20->iv_sta_assoc++;
  VAR_19->ic_sta_assoc++;

  if (FUNC_5(VAR_19->ic_bsschan))
   FUNC_13(VAR_17);
  if (FUNC_6(VAR_19->ic_bsschan))
   FUNC_19(VAR_17);
  if (FUNC_3(VAR_19->ic_bsschan) &&
      FUNC_4(VAR_19->ic_bsschan))
   FUNC_14(VAR_17);
  FUNC_11(VAR_19);

  VAR_21 = 1;
 } else
  VAR_21 = 0;




 FUNC_9(VAR_20, VAR_4 | VAR_5, VAR_17,
     "station associated at aid %d: %s preamble, %s slot time%s%s%s%s%s%s%s%s",
     FUNC_8(VAR_17),
     VAR_19->ic_flags & VAR_1 ? "short" : "long",
     VAR_19->ic_flags & VAR_2 ? "short" : "long",
     VAR_19->ic_flags & VAR_3 ? ", protection" : "",
     VAR_17->ni_flags & VAR_11 ? ", QoS" : "",

     VAR_17->ni_flags & VAR_8 ?
  (VAR_17->ni_chw == 40 ? ", HT40" : ", HT20") : "",
     VAR_17->ni_flags & VAR_6 ? " (+AMPDU)" : "",
     VAR_17->ni_flags & VAR_10 ? " (+SMPS-DYN)" :
         VAR_17->ni_flags & VAR_9 ? " (+SMPS)" : "",
     VAR_17->ni_flags & VAR_12 ? " (+RIFS)" : "",
     FUNC_2(VAR_20, VAR_17, VAR_7) ?
  ", fast-frames" : "",
     FUNC_2(VAR_20, VAR_17, VAR_13) ?
  ", turbo" : ""
 );

 FUNC_16(VAR_17);
 FUNC_18(VAR_17);

 if (VAR_19->ic_newassoc != ((void*)0))
  VAR_19->ic_newassoc(VAR_17, VAR_21);
 FUNC_10(VAR_17, VAR_18, VAR_14);

 if (VAR_20->iv_auth->ia_node_join != ((void*)0))
  VAR_20->iv_auth->ia_node_join(VAR_17);
 FUNC_17(VAR_17,
     VAR_18 == VAR_0);
}
