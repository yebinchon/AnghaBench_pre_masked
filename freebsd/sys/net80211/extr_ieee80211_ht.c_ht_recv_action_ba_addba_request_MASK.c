
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int is_addba_reject; } ;
struct ieee80211vap {int iv_flags_ht; TYPE_1__ iv_stats; } ;
struct ieee80211com {int (* ic_send_action ) (struct ieee80211_node*,int ,int ,int*) ;int (* ic_ampdu_rx_start ) (struct ieee80211_node*,struct ieee80211_rx_ampdu*,int,int,int) ;} ;
struct ieee80211_rx_ampdu {int rxa_wnd; } ;
struct ieee80211_node {int ni_flags; struct ieee80211_rx_ampdu* ni_rx_ampdu; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_node*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct ieee80211_node*,struct ieee80211_rx_ampdu*,int,int,int) ;
 int FUNC_5 (struct ieee80211_node*,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_13,
 const struct ieee80211_frame *VAR_14,
 const uint8_t *VAR_15, const uint8_t *VAR_16)
{
 struct ieee80211com *VAR_17 = VAR_13->ni_ic;
 struct ieee80211vap *VAR_18 = VAR_13->ni_vap;
 struct ieee80211_rx_ampdu *VAR_19;
 uint8_t VAR_20;
 uint16_t VAR_21, VAR_22, VAR_23;
 uint16_t VAR_24[5];
 int VAR_25;

 VAR_20 = VAR_15[2];
 VAR_21 = FUNC_3(VAR_15+3);
 VAR_22 = FUNC_3(VAR_15+5);
 VAR_23 = FUNC_3(VAR_15+7);

 VAR_25 = FUNC_1(VAR_21, VAR_4);

 FUNC_0(VAR_18, VAR_9 | VAR_8, VAR_13,
     "recv ADDBA request: dialogtoken %u baparamset 0x%x "
     "(tid %d bufsiz %d) batimeout %d baseqctl %d:%d",
     VAR_20, VAR_21,
     VAR_25, FUNC_1(VAR_21, VAR_2),
     VAR_22,
     FUNC_1(VAR_23, VAR_6),
     FUNC_1(VAR_23, VAR_5));

 VAR_19 = &VAR_13->ni_rx_ampdu[VAR_25];


 VAR_24[0] = VAR_20;





 if ((VAR_13->ni_flags & VAR_10) &&
     (VAR_18->iv_flags_ht & VAR_7)) {

  VAR_17->ic_ampdu_rx_start(VAR_13, VAR_19,
      VAR_21, VAR_22, VAR_23);

  VAR_24[1] = VAR_11;
 } else {
  FUNC_0(VAR_18, VAR_9 | VAR_8,
      VAR_13, "reject ADDBA request: %s",
      VAR_13->ni_flags & VAR_10 ?
         "administratively disabled" :
         "not negotiated for station");
  VAR_18->iv_stats.is_addba_reject++;
  VAR_24[1] = VAR_12;
 }

 VAR_24[2] = VAR_3
  | FUNC_2(VAR_25, VAR_4)
  | FUNC_2(VAR_19->rxa_wnd, VAR_2)
  ;
 VAR_24[3] = 0;
 VAR_24[4] = 0;
 VAR_17->ic_send_action(VAR_13, VAR_1,
  VAR_0, VAR_24);
 return 0;
}
