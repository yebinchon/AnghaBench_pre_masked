
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chswitch_work; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__* local; } ;
struct TYPE_4__ {int hw; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 =
  (struct ieee80211_sub_if_data *) VAR_0;

 FUNC_0(&VAR_1->local->hw, &VAR_1->u.mgd.chswitch_work);
}
