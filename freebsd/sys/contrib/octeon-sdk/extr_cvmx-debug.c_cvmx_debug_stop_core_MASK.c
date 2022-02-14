
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int core_finished; } ;
typedef TYPE_2__ cvmx_debug_state_t ;
struct TYPE_7__ {int dint; scalar_t__ sst; int dss; int dbp; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_debug_register_t ;


 int FUNC_0 (TYPE_2__,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(cvmx_debug_state_t VAR_0, unsigned VAR_1, cvmx_debug_register_t *VAR_2, int VAR_3)
{
    if (!FUNC_0(VAR_0, VAR_1) && !VAR_2->s.dbp && !VAR_2->s.dss && (VAR_2->s.dint != 1))
    {
        VAR_2->s.sst = 0;
        FUNC_1("Core #%d not in active cores, continuing.\n", VAR_1);
        return 0;
    }
    if ((VAR_0.core_finished & (1u<<VAR_1)) && VAR_3)
      return 0;
    return 1;
}
