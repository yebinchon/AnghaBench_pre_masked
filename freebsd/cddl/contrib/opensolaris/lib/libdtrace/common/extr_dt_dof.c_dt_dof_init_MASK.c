
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ddo_xlms; int ddo_rels; int ddo_enoffs; int ddo_offs; int ddo_args; int ddo_probes; int ddo_udata; int ddo_ldata; int ddo_strs; int ddo_secs; int * ddo_xlexport; int * ddo_xlimport; int ddo_strsec; scalar_t__ ddo_nsecs; TYPE_1__* ddo_hdl; } ;
struct TYPE_5__ {TYPE_2__ dt_dof; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_dof_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,char*,int ) ;

void
FUNC_1(dtrace_hdl_t *VAR_1)
{
 dt_dof_t *VAR_2 = &VAR_1->dt_dof;

 VAR_2->ddo_hdl = VAR_1;
 VAR_2->ddo_nsecs = 0;
 VAR_2->ddo_strsec = VAR_0;
 VAR_2->ddo_xlimport = ((void*)0);
 VAR_2->ddo_xlexport = ((void*)0);

 FUNC_0(VAR_1, &VAR_2->ddo_secs, "section headers", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_strs, "string table", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_ldata, "loadable data", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_udata, "unloadable data", 0);

 FUNC_0(VAR_1, &VAR_2->ddo_probes, "probe data", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_args, "probe args", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_offs, "probe offs", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_enoffs, "probe is-enabled offs", 0);
 FUNC_0(VAR_1, &VAR_2->ddo_rels, "probe rels", 0);

 FUNC_0(VAR_1, &VAR_2->ddo_xlms, "xlate members", 0);
}
