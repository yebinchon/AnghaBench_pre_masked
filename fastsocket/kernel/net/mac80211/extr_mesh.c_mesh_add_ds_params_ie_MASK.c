
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_sub_if_data *VAR_3,
     struct sk_buff *VAR_4)
{
 struct ieee80211_chanctx_conf *VAR_5;
 struct ieee80211_channel *VAR_6;
 u8 *VAR_7;

 if (FUNC_6(VAR_4) < 3)
  return -VAR_1;

 FUNC_3();
 VAR_5 = FUNC_2(VAR_3->vif.chanctx_conf);
 if (FUNC_0(!VAR_5)) {
  FUNC_4();
  return -VAR_0;
 }
 VAR_6 = VAR_5->def.chan;
 FUNC_4();

 VAR_7 = FUNC_5(VAR_4, 2 + 1);
 *VAR_7++ = VAR_2;
 *VAR_7++ = 1;
 *VAR_7++ = FUNC_1(VAR_6->center_freq);

 return 0;
}
