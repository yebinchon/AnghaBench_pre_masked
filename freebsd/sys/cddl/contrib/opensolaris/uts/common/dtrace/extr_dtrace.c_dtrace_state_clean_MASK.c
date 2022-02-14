
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dtvs_dynvars; } ;
struct TYPE_6__ {int* dts_options; scalar_t__ dts_activity; int dts_cleaner; TYPE_1__ dts_vstate; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef int dtrace_optval_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,void (*) (void*),TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 dtrace_state_t *VAR_5 = VAR_4;
 dtrace_optval_t *VAR_6 = VAR_5->dts_options;

 if (VAR_5->dts_activity == VAR_1)
  return;

 FUNC_1(&VAR_5->dts_vstate.dtvs_dynvars);
 FUNC_2(VAR_5);

 FUNC_0(&VAR_5->dts_cleaner, VAR_3 * VAR_6[VAR_0] / VAR_2,
     FUNC_3, VAR_5);
}
