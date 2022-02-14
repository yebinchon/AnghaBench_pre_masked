
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211_node {void* ni_htstbc; void* ni_htopmode; void* ni_ht2ndchan; int ni_htctlchan; } ;
struct ieee80211_ie_htinfo {int hi_byte45; int hi_byte2; int hi_byte1; int hi_ctrlchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_3,
 const struct ieee80211_ie_htinfo *VAR_4)
{
 uint16_t VAR_5;

 VAR_3->ni_htctlchan = VAR_4->hi_ctrlchannel;
 VAR_3->ni_ht2ndchan = FUNC_0(VAR_4->hi_byte1, VAR_0);
 VAR_5 = FUNC_1(&VAR_4->hi_byte2);
 VAR_3->ni_htopmode = FUNC_0(VAR_5, VAR_2);
 VAR_5 = FUNC_1(&VAR_4->hi_byte45);
 VAR_3->ni_htstbc = FUNC_0(VAR_5, VAR_1);
}
