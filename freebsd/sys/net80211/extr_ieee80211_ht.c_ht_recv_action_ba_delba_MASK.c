
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211com {int (* ic_ampdu_rx_stop ) (struct ieee80211_node*,struct ieee80211_rx_ampdu*) ;int (* ic_addba_stop ) (struct ieee80211_node*,struct ieee80211_tx_ampdu*) ;} ;
struct ieee80211_tx_ampdu {int dummy; } ;
struct ieee80211_rx_ampdu {int dummy; } ;
struct ieee80211_node {struct ieee80211_rx_ampdu* ni_rx_ampdu; struct ieee80211_tx_ampdu* ni_tx_ampdu; int ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct ieee80211_node*,char*,int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct ieee80211_node*,struct ieee80211_tx_ampdu*) ;
 int FUNC_4 (struct ieee80211_node*,struct ieee80211_rx_ampdu*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_4,
 const struct ieee80211_frame *VAR_5,
 const uint8_t *VAR_6, const uint8_t *VAR_7)
{
 struct ieee80211com *VAR_8 = VAR_4->ni_ic;
 struct ieee80211_rx_ampdu *VAR_9;
 struct ieee80211_tx_ampdu *VAR_10;
 uint16_t VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_6+2);
 VAR_12 = FUNC_2(VAR_6+4);

 VAR_13 = FUNC_1(VAR_11, VAR_1);

 FUNC_0(VAR_4->ni_vap, VAR_3 | VAR_2, VAR_4,
     "recv DELBA: baparamset 0x%x (tid %d initiator %d) "
     "code %d", VAR_11, VAR_13,
     FUNC_1(VAR_11, VAR_0), VAR_12);

 if ((VAR_11 & VAR_0) == 0) {
  VAR_10 = &VAR_4->ni_tx_ampdu[VAR_13];
  VAR_8->ic_addba_stop(VAR_4, VAR_10);
 } else {
  VAR_9 = &VAR_4->ni_rx_ampdu[VAR_13];
  VAR_8->ic_ampdu_rx_stop(VAR_4, VAR_9);
 }
 return 0;
}
