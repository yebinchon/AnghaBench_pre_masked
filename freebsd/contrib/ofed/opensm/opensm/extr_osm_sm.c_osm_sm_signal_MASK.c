
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signal_mask; int signal_lock; int signal_event; } ;
typedef TYPE_1__ osm_sm_t ;
typedef int osm_signal_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(osm_sm_t * VAR_0, osm_signal_t VAR_1)
{
 FUNC_1(&VAR_0->signal_lock);
 VAR_0->signal_mask |= 1 << VAR_1;
 FUNC_0(&VAR_0->signal_event);
 FUNC_2(&VAR_0->signal_lock);
}
