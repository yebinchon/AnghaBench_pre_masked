
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_node_table {int dummy; } ;
struct ieee80211_node {int ni_authmode; int ni_flags; int ni_associd; int ni_txpower; int ni_vlan; int* ni_txseqs; int* ni_rxseqs; int ni_rxfragstamp; int ni_noise; int ni_intval; int ni_capinfo; char* ni_esslen; int ni_essid; int ni_inact; int ni_inact_reload; int ni_txrate; int ni_htcap; int ni_htparam; int ni_htctlchan; int ni_ht2ndchan; int ni_htopmode; int ni_htstbc; int ni_chw; int ni_vhtcap; scalar_t__ ni_vht_basicmcs; scalar_t__ ni_vht_chan2; scalar_t__ ni_vht_chan1; TYPE_1__* ni_chan; int ni_bssid; int ni_macaddr; } ;
struct TYPE_2__ {int ic_freq; int ic_flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(struct ieee80211_node_table *VAR_3, struct ieee80211_node *VAR_4)
{
 FUNC_3("0x%p: mac %s refcnt %d\n", VAR_4,
  FUNC_0(VAR_4->ni_macaddr), FUNC_1(VAR_4));
 FUNC_3("\tauthmode %u flags 0x%x\n",
  VAR_4->ni_authmode, VAR_4->ni_flags);
 FUNC_3("\tassocid 0x%x txpower %u vlan %u\n",
  VAR_4->ni_associd, VAR_4->ni_txpower, VAR_4->ni_vlan);
 FUNC_3("\ttxseq %u rxseq %u fragno %u rxfragstamp %u\n",
  VAR_4->ni_txseqs[VAR_0],
  VAR_4->ni_rxseqs[VAR_0] >> VAR_2,
  VAR_4->ni_rxseqs[VAR_0] & VAR_1,
  VAR_4->ni_rxfragstamp);
 FUNC_3("\trssi %d noise %d intval %u capinfo 0x%x\n",
  FUNC_2(VAR_4), VAR_4->ni_noise,
  VAR_4->ni_intval, VAR_4->ni_capinfo);
 FUNC_3("\tbssid %s essid \"%.*s\" channel %u:0x%x\n",
  FUNC_0(VAR_4->ni_bssid),
  VAR_4->ni_esslen, VAR_4->ni_essid,
  VAR_4->ni_chan->ic_freq, VAR_4->ni_chan->ic_flags);
 FUNC_3("\tinact %u inact_reload %u txrate %u\n",
  VAR_4->ni_inact, VAR_4->ni_inact_reload, VAR_4->ni_txrate);
 FUNC_3("\thtcap %x htparam %x htctlchan %u ht2ndchan %u\n",
  VAR_4->ni_htcap, VAR_4->ni_htparam,
  VAR_4->ni_htctlchan, VAR_4->ni_ht2ndchan);
 FUNC_3("\thtopmode %x htstbc %x htchw %u\n",
  VAR_4->ni_htopmode, VAR_4->ni_htstbc, VAR_4->ni_chw);
 FUNC_3("\tvhtcap %x freq1 %d freq2 %d vhtbasicmcs %x\n",
  VAR_4->ni_vhtcap, (int) VAR_4->ni_vht_chan1, (int) VAR_4->ni_vht_chan2,
  (int) VAR_4->ni_vht_basicmcs);

}
