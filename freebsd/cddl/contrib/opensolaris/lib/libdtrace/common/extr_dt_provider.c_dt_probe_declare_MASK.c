
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pv_probes; int pv_flags; } ;
typedef TYPE_1__ dt_provider_t ;
struct TYPE_7__ {scalar_t__ pr_xargs; scalar_t__ pr_nargs; TYPE_5__* pr_ident; TYPE_1__* pr_pvp; } ;
typedef TYPE_2__ dt_probe_t ;
struct TYPE_8__ {scalar_t__ di_kind; TYPE_2__* di_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_5__*) ;

void
FUNC_2(dt_provider_t *VAR_2, dt_probe_t *VAR_3)
{
 FUNC_0(VAR_3->pr_ident->di_kind == VAR_0);
 FUNC_0(VAR_3->pr_ident->di_data == VAR_3);
 FUNC_0(VAR_3->pr_pvp == ((void*)0));

 if (VAR_3->pr_xargs != VAR_3->pr_nargs)
  VAR_2->pv_flags &= ~VAR_1;

 VAR_3->pr_pvp = VAR_2;
 FUNC_1(VAR_2->pv_probes, VAR_3->pr_ident);
}
