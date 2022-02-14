
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_channel {int band; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct ieee80211_sub_if_data*,int *,int ,struct ieee80211_channel*,int const*,size_t,int const*,size_t,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_0, u8 *VAR_1,
         const u8 *VAR_2, size_t VAR_3,
         const u8 *VAR_4, size_t VAR_5,
         u32 VAR_6, bool VAR_7, u32 VAR_8,
         struct ieee80211_channel *VAR_9, bool VAR_10)
{
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_1(VAR_0, VAR_1, VAR_6, VAR_9,
     VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_11)->flags |= VAR_8;
  if (VAR_10)
   FUNC_3(VAR_0, VAR_11, 7, VAR_9->band);
  else
   FUNC_2(VAR_0, VAR_11);
 }
}
