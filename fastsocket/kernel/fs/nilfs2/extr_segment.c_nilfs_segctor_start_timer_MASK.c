
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_sc_info {int sc_state; int sc_state_lock; TYPE_1__* sc_timer; scalar_t__ sc_interval; } ;
struct TYPE_2__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nilfs_sc_info *VAR_2)
{
 FUNC_1(&VAR_2->sc_state_lock);
 if (VAR_2->sc_timer && !(VAR_2->sc_state & VAR_0)) {
  VAR_2->sc_timer->expires = VAR_1 + VAR_2->sc_interval;
  FUNC_0(VAR_2->sc_timer);
  VAR_2->sc_state |= VAR_0;
 }
 FUNC_2(&VAR_2->sc_state_lock);
}
