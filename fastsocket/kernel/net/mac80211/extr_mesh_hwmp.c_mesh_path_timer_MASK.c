
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mesh_path {int flags; scalar_t__ discovery_retries; int discovery_timeout; int is_gate; int state_lock; int exp_time; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ quiescing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct mesh_path*) ;
 int FUNC_3 (struct mesh_path*) ;
 int FUNC_4 (struct mesh_path*,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(unsigned long VAR_4)
{
 struct mesh_path *VAR_5 = (void *) VAR_4;
 struct ieee80211_sub_if_data *VAR_6 = VAR_5->sdata;
 int VAR_7;

 if (VAR_6->local->quiescing)
  return;

 FUNC_6(&VAR_5->state_lock);
 if (VAR_5->flags & VAR_1 ||
   (!(VAR_5->flags & VAR_2))) {
  VAR_5->flags &= ~(VAR_2 | VAR_1);
  FUNC_7(&VAR_5->state_lock);
 } else if (VAR_5->discovery_retries < FUNC_0(VAR_6)) {
  ++VAR_5->discovery_retries;
  VAR_5->discovery_timeout *= 2;
  VAR_5->flags &= ~VAR_0;
  FUNC_7(&VAR_5->state_lock);
  FUNC_4(VAR_5, 0);
 } else {
  VAR_5->flags = 0;
  VAR_5->exp_time = VAR_3;
  FUNC_7(&VAR_5->state_lock);
  if (!VAR_5->is_gate && FUNC_1(VAR_6) > 0) {
   VAR_7 = FUNC_3(VAR_5);
   if (VAR_7)
    FUNC_5(VAR_6, "no gate was reachable\n");
  } else
   FUNC_2(VAR_5);
 }
}
