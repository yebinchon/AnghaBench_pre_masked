
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int rate_ctrl_priv; int sta; int rate_ctrl; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_local {int rate_ctrl; TYPE_1__ hw; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_local *VAR_2,
        struct sta_info *VAR_3, gfp_t VAR_4)
{
 if (VAR_2->hw.flags & VAR_1)
  return 0;

 VAR_3->rate_ctrl = VAR_2->rate_ctrl;
 VAR_3->rate_ctrl_priv = FUNC_0(VAR_3->rate_ctrl,
           &VAR_3->sta, VAR_4);
 if (!VAR_3->rate_ctrl_priv)
  return -VAR_0;

 return 0;
}
