
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; int dev; int priority; scalar_t__ cb; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_data {int skbs; struct ieee80211_local* local; } ;
struct ieee80211_local {scalar_t__ tx_headroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_tx_data *VAR_8,
         struct sk_buff *VAR_9, int VAR_10,
         int VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_8->local;
 struct ieee80211_tx_info *VAR_13;
 struct sk_buff *VAR_14;
 int VAR_15 = VAR_11 - VAR_10 - VAR_2;
 int VAR_16 = VAR_10 + VAR_15;
 int VAR_17 = VAR_9->len - VAR_10 - VAR_15;

 if (FUNC_1(VAR_17 < 0))
  return -VAR_0;



 while (VAR_17) {
  int VAR_18 = VAR_15;

  if (VAR_18 > VAR_17)
   VAR_18 = VAR_17;
  VAR_17 -= VAR_18;
  VAR_14 = FUNC_3(VAR_12->tx_headroom +
        VAR_11 +
        VAR_3 +
        VAR_4);
  if (!VAR_14)
   return -VAR_1;

  FUNC_2(&VAR_8->skbs, VAR_14);

  FUNC_7(VAR_14, VAR_12->tx_headroom +
     VAR_3);

  FUNC_4(VAR_14->cb, VAR_9->cb, sizeof(VAR_14->cb));

  VAR_13 = FUNC_0(VAR_14);
  VAR_13->flags &= ~(VAR_5 |
     VAR_6);

  if (VAR_17)
   VAR_13->flags |= VAR_7;

  FUNC_5(VAR_14, VAR_9);
  VAR_14->priority = VAR_9->priority;
  VAR_14->dev = VAR_9->dev;


  FUNC_4(FUNC_6(VAR_14, VAR_10), VAR_9->data, VAR_10);
  FUNC_4(FUNC_6(VAR_14, VAR_18), VAR_9->data + VAR_16, VAR_18);

  VAR_16 += VAR_18;
 }


 VAR_9->len = VAR_10 + VAR_15;
 return 0;
}
