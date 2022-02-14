
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_1__ vif; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
struct TYPE_5__ {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_2,
      const size_t VAR_3,
      const u8 *VAR_4)
{
 struct ieee80211_chanctx_conf *VAR_5;
 int VAR_6, VAR_7 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  if ((VAR_4[VAR_6] & 0x7f) * 5 > 110)
   VAR_7 = 1;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2->vif.chanctx_conf);

 if (VAR_5 &&
     VAR_5->def.chan->band == VAR_0 &&
     VAR_7)
  VAR_2->flags |= VAR_1;
 else
  VAR_2->flags &= ~VAR_1;
 FUNC_3();

 FUNC_0(VAR_2, 1);
}
