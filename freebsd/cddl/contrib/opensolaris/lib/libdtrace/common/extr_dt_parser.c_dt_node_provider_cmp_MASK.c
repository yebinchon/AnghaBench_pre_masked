
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int dtvd_name; } ;
struct TYPE_16__ {int pv_flags; int pv_probes; TYPE_1__ pv_desc; } ;
typedef TYPE_3__ dt_provider_t ;
struct TYPE_17__ {scalar_t__ pr_xargs; scalar_t__ pr_nargs; TYPE_12__* pr_ident; int pr_nargc; int pr_xargc; } ;
typedef TYPE_4__ dt_probe_t ;
typedef int dt_node_t ;
struct TYPE_18__ {TYPE_2__* pcb_hdl; } ;
struct TYPE_15__ {scalar_t__ dt_gen; } ;
struct TYPE_13__ {scalar_t__ di_gen; int di_flags; int di_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_12__*) ;
 int FUNC_2 (TYPE_3__*,int *,char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static void
FUNC_4(dt_provider_t *VAR_4, dt_node_t *VAR_5,
    dt_probe_t *VAR_6, dt_probe_t *VAR_7)
{
 FUNC_2(VAR_4, VAR_5, "output",
     VAR_6->pr_xargc, VAR_6->pr_xargs, VAR_7->pr_xargc, VAR_7->pr_xargs);

 if (VAR_6->pr_nargs != VAR_6->pr_xargs && VAR_7->pr_nargs != VAR_7->pr_xargs) {
  FUNC_2(VAR_4, VAR_5, "input",
      VAR_6->pr_nargc, VAR_6->pr_nargs, VAR_7->pr_nargc, VAR_7->pr_nargs);
 }

 if (VAR_6->pr_nargs == VAR_6->pr_xargs && VAR_7->pr_nargs != VAR_7->pr_xargs) {
  if (VAR_4->pv_flags & VAR_1) {
   FUNC_0(VAR_5, VAR_2,
       "provider interface mismatch: %s\n"
       "\t current: probe %s:%s has an output prototype\n"
       "\tprevious: probe %s:%s has no output prototype\n",
       VAR_4->pv_desc.dtvd_name, VAR_4->pv_desc.dtvd_name,
       VAR_7->pr_ident->di_name, VAR_4->pv_desc.dtvd_name,
       VAR_6->pr_ident->di_name);
  }

  if (VAR_6->pr_ident->di_gen == VAR_3->pcb_hdl->dt_gen)
   VAR_6->pr_ident->di_flags |= VAR_0;

  FUNC_1(VAR_4->pv_probes, VAR_6->pr_ident);
  FUNC_3(VAR_4, VAR_7);
 }
}
