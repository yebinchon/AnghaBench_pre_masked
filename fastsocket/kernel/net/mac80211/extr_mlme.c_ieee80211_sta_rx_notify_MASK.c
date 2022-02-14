
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_sub_if_data *VAR_0,
        struct ieee80211_hdr *VAR_1)
{
 if (FUNC_1(VAR_1->addr1))
  return;

 FUNC_0(VAR_0);
}
