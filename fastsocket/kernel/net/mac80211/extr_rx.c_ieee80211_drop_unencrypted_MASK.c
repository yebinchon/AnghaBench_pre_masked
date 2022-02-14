
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {TYPE_1__* sdata; scalar_t__ key; struct sk_buff* skb; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ drop_unencrypted; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_rx_data *VAR_2, __le16 VAR_3)
{
 struct sk_buff *VAR_4 = VAR_2->skb;
 struct ieee80211_rx_status *VAR_5 = FUNC_0(VAR_4);





 if (VAR_5->flag & VAR_1)
  return 0;


 if (FUNC_4(!FUNC_1(VAR_3) &&
       !FUNC_3(VAR_3) &&
       FUNC_2(VAR_3) &&
       (VAR_2->key || VAR_2->sdata->drop_unencrypted)))
  return -VAR_0;

 return 0;
}
