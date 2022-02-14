
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {TYPE_2__* iv_des_chan; TYPE_1__* iv_ic; } ;
struct ieee80211_channel {scalar_t__ ic_freq; int ic_ieee; } ;
struct TYPE_4__ {scalar_t__ ic_freq; } ;
struct TYPE_3__ {int ic_chan_active; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_1, const struct ieee80211_channel *VAR_2)
{
 return (FUNC_0(VAR_1->iv_ic->ic_chan_active, VAR_2->ic_ieee) ||
     (VAR_1->iv_des_chan != VAR_0 &&
      VAR_2->ic_freq != VAR_1->iv_des_chan->ic_freq));
}
