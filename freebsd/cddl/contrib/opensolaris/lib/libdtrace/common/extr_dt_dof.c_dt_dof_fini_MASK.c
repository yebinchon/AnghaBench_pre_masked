
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ddo_xlms; int ddo_rels; int ddo_enoffs; int ddo_offs; int ddo_args; int ddo_probes; int ddo_udata; int ddo_ldata; int ddo_strs; int ddo_secs; int ddo_xlexport; int ddo_xlimport; } ;
struct TYPE_6__ {TYPE_2__ dt_dof; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_dof_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(dtrace_hdl_t *VAR_0)
{
 dt_dof_t *VAR_1 = &VAR_0->dt_dof;

 FUNC_1(VAR_0, VAR_1->ddo_xlimport);
 FUNC_1(VAR_0, VAR_1->ddo_xlexport);

 FUNC_0(VAR_0, &VAR_1->ddo_secs);
 FUNC_0(VAR_0, &VAR_1->ddo_strs);
 FUNC_0(VAR_0, &VAR_1->ddo_ldata);
 FUNC_0(VAR_0, &VAR_1->ddo_udata);

 FUNC_0(VAR_0, &VAR_1->ddo_probes);
 FUNC_0(VAR_0, &VAR_1->ddo_args);
 FUNC_0(VAR_0, &VAR_1->ddo_offs);
 FUNC_0(VAR_0, &VAR_1->ddo_enoffs);
 FUNC_0(VAR_0, &VAR_1->ddo_rels);

 FUNC_0(VAR_0, &VAR_1->ddo_xlms);
}
