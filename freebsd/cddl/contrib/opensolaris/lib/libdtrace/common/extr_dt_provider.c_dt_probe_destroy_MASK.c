
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_8__ {struct TYPE_8__* pr_argv; struct TYPE_8__* pr_mapping; struct TYPE_8__* pi_enoffs; struct TYPE_8__* pi_offs; struct TYPE_8__* pi_fname; struct TYPE_8__* pi_rname; struct TYPE_8__* pi_next; struct TYPE_8__* pr_inst; struct TYPE_8__* pr_xargv; struct TYPE_8__* pr_nargv; int pr_xargs; int pr_nargs; TYPE_1__* pr_pvp; } ;
typedef TYPE_2__ dt_probe_t ;
typedef TYPE_2__ dt_probe_instance_t ;
struct TYPE_9__ {int * pcb_hdl; } ;
struct TYPE_7__ {int * pv_hdl; } ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_4__* VAR_0 ;

void
FUNC_2(dt_probe_t *VAR_1)
{
 dt_probe_instance_t *VAR_2, *VAR_3;
 dtrace_hdl_t *VAR_4;

 if (VAR_1->pr_pvp != ((void*)0))
  VAR_4 = VAR_1->pr_pvp->pv_hdl;
 else
  VAR_4 = VAR_0->pcb_hdl;

 FUNC_1(&VAR_1->pr_nargs);
 FUNC_1(&VAR_1->pr_xargs);

 FUNC_0(VAR_4, VAR_1->pr_nargv);
 FUNC_0(VAR_4, VAR_1->pr_xargv);

 for (VAR_2 = VAR_1->pr_inst; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->pi_next;
  FUNC_0(VAR_4, VAR_2->pi_rname);
  FUNC_0(VAR_4, VAR_2->pi_fname);
  FUNC_0(VAR_4, VAR_2->pi_offs);
  FUNC_0(VAR_4, VAR_2->pi_enoffs);
  FUNC_0(VAR_4, VAR_2);
 }

 FUNC_0(VAR_4, VAR_1->pr_mapping);
 FUNC_0(VAR_4, VAR_1->pr_argv);
 FUNC_0(VAR_4, VAR_1);
}
