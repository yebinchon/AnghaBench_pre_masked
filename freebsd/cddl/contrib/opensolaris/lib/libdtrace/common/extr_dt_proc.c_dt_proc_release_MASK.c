
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_8__ {TYPE_3__* dt_procs; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_9__ {scalar_t__ dpr_refs; int dpr_cacheable; } ;
typedef TYPE_2__ dt_proc_t ;
struct TYPE_10__ {scalar_t__ dph_lrucnt; scalar_t__ dph_lrulim; } ;
typedef TYPE_3__ dt_proc_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct ps_prochandle*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,struct ps_prochandle*,int ) ;

void
FUNC_3(dtrace_hdl_t *VAR_1, struct ps_prochandle *VAR_2)
{
 dt_proc_t *VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 dt_proc_hash_t *VAR_4 = VAR_1->dt_procs;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->dpr_refs != 0);

 if (--VAR_3->dpr_refs == 0 &&
     (!VAR_3->dpr_cacheable || VAR_4->dph_lrucnt > VAR_4->dph_lrulim))
  FUNC_1(VAR_1, VAR_2);
}
