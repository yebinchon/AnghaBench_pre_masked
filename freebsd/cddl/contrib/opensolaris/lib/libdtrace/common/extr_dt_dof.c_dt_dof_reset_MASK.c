
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_prog_t ;
struct TYPE_8__ {int ddo_xlms; int ddo_rels; int ddo_enoffs; int ddo_offs; int ddo_args; int ddo_probes; int ddo_udata; int ddo_ldata; int ddo_strs; int ddo_secs; void** ddo_xlexport; void** ddo_xlimport; void* ddo_strsec; scalar_t__ ddo_nsecs; int * ddo_pgp; TYPE_1__* ddo_hdl; } ;
struct TYPE_7__ {int dt_xlatorid; TYPE_2__ dt_dof; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_dof_t ;
typedef int dof_secidx_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,void**) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_1, dtrace_prog_t *VAR_2)
{
 dt_dof_t *VAR_3 = &VAR_1->dt_dof;
 uint_t VAR_4, VAR_5 = VAR_1->dt_xlatorid;

 FUNC_0(VAR_3->ddo_hdl == VAR_1);
 VAR_3->ddo_pgp = VAR_2;

 VAR_3->ddo_nsecs = 0;
 VAR_3->ddo_strsec = VAR_0;

 FUNC_3(VAR_1, VAR_3->ddo_xlimport);
 FUNC_3(VAR_1, VAR_3->ddo_xlexport);

 VAR_3->ddo_xlimport = FUNC_1(VAR_1, sizeof (dof_secidx_t) * VAR_5);
 VAR_3->ddo_xlexport = FUNC_1(VAR_1, sizeof (dof_secidx_t) * VAR_5);

 if (VAR_5 != 0 && (VAR_3->ddo_xlimport == ((void*)0) || VAR_3->ddo_xlexport == ((void*)0)))
  return (-1);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3->ddo_xlimport[VAR_4] = VAR_0;
  VAR_3->ddo_xlexport[VAR_4] = VAR_0;
 }

 FUNC_2(VAR_1, &VAR_3->ddo_secs);
 FUNC_2(VAR_1, &VAR_3->ddo_strs);
 FUNC_2(VAR_1, &VAR_3->ddo_ldata);
 FUNC_2(VAR_1, &VAR_3->ddo_udata);

 FUNC_2(VAR_1, &VAR_3->ddo_probes);
 FUNC_2(VAR_1, &VAR_3->ddo_args);
 FUNC_2(VAR_1, &VAR_3->ddo_offs);
 FUNC_2(VAR_1, &VAR_3->ddo_enoffs);
 FUNC_2(VAR_1, &VAR_3->ddo_rels);

 FUNC_2(VAR_1, &VAR_3->ddo_xlms);
 return (0);
}
