
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int n2 ;
typedef int n1 ;
typedef int dtrace_hdl_t ;
struct TYPE_20__ {int dx_id; } ;
typedef TYPE_3__ dt_xlator_t ;
struct TYPE_18__ {int dtvd_name; } ;
struct TYPE_21__ {TYPE_1__ pv_desc; } ;
typedef TYPE_4__ dt_provider_t ;
struct TYPE_22__ {scalar_t__ pr_nargs; scalar_t__ pr_xargs; size_t pr_xargc; size_t* pr_mapping; TYPE_6__** pr_nargv; TYPE_6__** pr_xargv; } ;
typedef TYPE_5__ dt_probe_t ;
struct TYPE_23__ {TYPE_2__* dn_ident; } ;
typedef TYPE_6__ dt_node_t ;
struct TYPE_24__ {int pcb_jmpbuf; int * pcb_hdl; } ;
struct TYPE_19__ {int di_name; TYPE_5__* di_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int ,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,int ) ;
 TYPE_3__* FUNC_4 (int *,TYPE_6__*,TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_7__* VAR_4 ;

__attribute__((used)) static void
FUNC_6(dt_node_t *VAR_5, dt_provider_t *VAR_6)
{
 dtrace_hdl_t *VAR_7 = VAR_4->pcb_hdl;
 dt_probe_t *VAR_8 = VAR_5->dn_ident->di_data;

 dt_xlator_t *VAR_9;
 uint_t VAR_10;

 char VAR_11[VAR_0];
 char VAR_12[VAR_0];

 if (VAR_8->pr_nargs == VAR_8->pr_xargs)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_8->pr_xargc; VAR_10++) {
  dt_node_t *VAR_13 = VAR_8->pr_xargv[VAR_10];
  dt_node_t *VAR_14 = VAR_8->pr_nargv[VAR_8->pr_mapping[VAR_10]];

  if ((VAR_9 = FUNC_4(VAR_7,
      VAR_14, VAR_13, VAR_1)) != ((void*)0)) {
   if (FUNC_3(VAR_7, VAR_6, VAR_9->dx_id) != 0)
    FUNC_5(VAR_4->pcb_jmpbuf, VAR_3);
   continue;
  }

  if (FUNC_1(VAR_14, VAR_13))
   continue;

  FUNC_0(VAR_5, VAR_2, "translator for %s:%s output "
      "argument #%u from %s to %s is not defined\n",
      VAR_6->pv_desc.dtvd_name, VAR_5->dn_ident->di_name, VAR_10 + 1,
      FUNC_2(VAR_14, VAR_11, sizeof (VAR_11)),
      FUNC_2(VAR_13, VAR_12, sizeof (VAR_12)));
 }
}
