
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct ieee80211_local {int roc_list; scalar_t__ radar_detect_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_local *VAR_3,
          struct ieee80211_sub_if_data *VAR_4)
{
 if (VAR_3->radar_detect_enabled)
  return 0;

 if (!FUNC_0(&VAR_3->roc_list))
  return 0;

 if (VAR_4->vif.type == VAR_2 &&
     VAR_4->u.mgd.flags & (VAR_0 |
      VAR_1))
  return 0;

 return 1;
}
