
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {size_t priority; } ;
struct ieee80211_sub_if_data {int wmm_acm; } ;


 int FUNC_0 (size_t) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_3(struct ieee80211_sub_if_data *VAR_1,
         struct sk_buff *VAR_2)
{

 while (FUNC_1(VAR_1->wmm_acm & FUNC_0(VAR_2->priority))) {
  if (FUNC_2(VAR_2)) {






   break;
  }
 }


 return VAR_0[VAR_2->priority];
}
