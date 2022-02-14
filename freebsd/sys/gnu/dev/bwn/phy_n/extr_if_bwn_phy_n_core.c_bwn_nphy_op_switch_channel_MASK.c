
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct bwn_mac {int dummy; } ;
typedef int bwn_chan_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*,int *) ;
 struct ieee80211_channel* FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,struct ieee80211_channel*,int ) ;

int
FUNC_4(struct bwn_mac *VAR_2, unsigned int VAR_3)
{
 struct ieee80211_channel *VAR_4 = FUNC_2(VAR_2);
 bwn_chan_type_t VAR_5 = FUNC_1(VAR_2, ((void*)0));

 if (FUNC_0(VAR_2) == VAR_0) {
  if ((VAR_3 < 1) || (VAR_3 > 14))
   return -VAR_1;
 } else {
  if (VAR_3 > 200)
   return -VAR_1;
 }

 return FUNC_3(VAR_2, VAR_4, VAR_5);
}
