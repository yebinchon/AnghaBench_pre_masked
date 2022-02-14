
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_tx_ampdu {int txa_tid; } ;
struct ieee80211_node {int ni_chw; int ni_flags; struct ieee80211_tx_ampdu* ni_tx_ampdu; scalar_t__ ni_htstbc; scalar_t__ ni_htopmode; TYPE_1__* ni_chan; int ni_htctlchan; int ni_ht2ndchan; int ni_htcap; int ni_ic; struct ieee80211vap* ni_vap; } ;
struct TYPE_7__ {int ic_ieee; } ;


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
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int,char*) ;
 int VAR_13 ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct ieee80211_tx_ampdu*) ;

void
FUNC_7(struct ieee80211_node *VAR_14)
{
 struct ieee80211vap *VAR_15 = VAR_14->ni_vap;
 struct ieee80211_tx_ampdu *VAR_16;
 int VAR_17;

 FUNC_3(VAR_15->iv_flags_ht & VAR_0, ("no HT requested"));
 VAR_14->ni_chan = FUNC_4(VAR_14->ni_ic,
     VAR_14->ni_chan, FUNC_5(VAR_14->ni_chan));

 VAR_14->ni_htcap = 0;
 if (VAR_15->iv_flags_ht & VAR_2)
  VAR_14->ni_htcap |= VAR_5;
 if (FUNC_0(VAR_14->ni_chan)) {
  VAR_14->ni_htcap |= VAR_4;
  VAR_14->ni_chw = 40;
  if (FUNC_2(VAR_14->ni_chan))
   VAR_14->ni_ht2ndchan = VAR_7;
  else if (FUNC_1(VAR_14->ni_chan))
   VAR_14->ni_ht2ndchan = VAR_8;
  if (VAR_15->iv_flags_ht & VAR_3)
   VAR_14->ni_htcap |= VAR_6;
 } else {
  VAR_14->ni_chw = 20;
  VAR_14->ni_ht2ndchan = VAR_9;
 }
 VAR_14->ni_htctlchan = VAR_14->ni_chan->ic_ieee;
 if (VAR_15->iv_flags_ht & VAR_1)
  VAR_14->ni_flags |= VAR_12;


 VAR_14->ni_htopmode = 0;
 VAR_14->ni_htstbc = 0;

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_16 = &VAR_14->ni_tx_ampdu[VAR_17];
  VAR_16->txa_tid = VAR_17;
  FUNC_6(VAR_16);
 }

 VAR_14->ni_flags |= VAR_11 | VAR_10;
}
