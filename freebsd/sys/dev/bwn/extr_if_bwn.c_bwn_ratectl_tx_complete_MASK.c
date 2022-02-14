
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ratectl_tx_status {int long_retries; int status; int flags; } ;
struct ieee80211_node {int dummy; } ;
struct bwn_txstatus {int framecnt; scalar_t__ ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_node const*,struct ieee80211_ratectl_tx_status*) ;

__attribute__((used)) static void
FUNC_1(const struct ieee80211_node *VAR_3,
    const struct bwn_txstatus *VAR_4)
{
 struct ieee80211_ratectl_tx_status VAR_5;
 int VAR_6 = 0;







 VAR_5.flags = VAR_0;
 if (VAR_4->ack) {
  VAR_5.status = VAR_2;
  VAR_6 = VAR_4->framecnt - 1;
 } else {
  VAR_5.status = VAR_1;
  VAR_6 = VAR_4->framecnt;
  if (VAR_6 == 0)
   VAR_6 = 1;
 }
 VAR_5.long_retries = VAR_6;
 FUNC_0(VAR_3, &VAR_5);
}
