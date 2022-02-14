
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int started; int tasklet; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_7(struct ieee80211_local *VAR_0)
{
 FUNC_1();

 FUNC_6(VAR_0);
 VAR_0->ops->stop(&VAR_0->hw);
 FUNC_5(VAR_0);


 FUNC_3(&VAR_0->tasklet);
 FUNC_4(&VAR_0->tasklet);

 FUNC_0();

 VAR_0->started = 0;
}
