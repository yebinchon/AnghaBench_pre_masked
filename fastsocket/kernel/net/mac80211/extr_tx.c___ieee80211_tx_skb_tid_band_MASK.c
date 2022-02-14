
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int priority; int dev; } ;
struct ieee80211_sub_if_data {int dev; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int FUNC_0 (struct ieee80211_sub_if_data*,struct sk_buff*,int) ;
 int* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_1,
     struct sk_buff *VAR_2, int VAR_3,
     enum ieee80211_band VAR_4)
{
 int VAR_5 = VAR_0[VAR_3 & 7];

 FUNC_3(VAR_2, 0);
 FUNC_4(VAR_2, 0);
 FUNC_6(VAR_2, 0);

 FUNC_5(VAR_2, VAR_5);
 VAR_2->priority = VAR_3;

 VAR_2->dev = VAR_1->dev;






 FUNC_1();
 FUNC_0(VAR_1, VAR_2, VAR_4);
 FUNC_2();
}
