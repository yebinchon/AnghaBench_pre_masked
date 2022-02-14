
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;

void FUNC_2(struct ieee80211_hw *VAR_0,
         struct sk_buff_head *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)))
  FUNC_1(VAR_0, VAR_2);
}
