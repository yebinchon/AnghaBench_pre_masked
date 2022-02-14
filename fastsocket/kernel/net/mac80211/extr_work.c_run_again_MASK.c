
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expires; } ;
struct ieee80211_local {TYPE_1__ work_timer; } ;


 int FUNC_0 (struct ieee80211_local*) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_local *VAR_0,
        unsigned long VAR_1)
{
 FUNC_0(VAR_0);

 if (!FUNC_3(&VAR_0->work_timer) ||
     FUNC_2(VAR_1, VAR_0->work_timer.expires))
  FUNC_1(&VAR_0->work_timer, VAR_1);
}
