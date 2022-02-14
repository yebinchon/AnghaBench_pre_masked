
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int sig_mads_on_wire_continue; int outstanding_mads_on_wire; int outstanding_mads_done_event; int outstanding_mads; } ;
typedef TYPE_1__ osm_congestion_control_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(osm_congestion_control_t *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->outstanding_mads);
 if (!VAR_1)
  FUNC_1(&VAR_0->outstanding_mads_done_event);

 FUNC_0(&VAR_0->outstanding_mads_on_wire);
 FUNC_1(&VAR_0->sig_mads_on_wire_continue);
}
