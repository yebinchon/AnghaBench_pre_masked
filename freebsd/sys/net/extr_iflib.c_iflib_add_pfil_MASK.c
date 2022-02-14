
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pfil_head_args {int pa_headname; int pa_type; int pa_flags; int pa_version; } ;
struct pfil_head {int dummy; } ;
typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_8__ {TYPE_2__* ifc_rxqs; TYPE_1__* ifc_ifp; } ;
struct TYPE_7__ {struct pfil_head* pfil; } ;
struct TYPE_6__ {int if_xname; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pfil_head* FUNC_1 (struct pfil_head_args*) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_3)
{
 struct pfil_head *VAR_4;
 struct pfil_head_args VAR_5;
 iflib_rxq_t VAR_6;
 int VAR_7;

 VAR_5.pa_version = VAR_2;
 VAR_5.pa_flags = VAR_0;
 VAR_5.pa_type = VAR_1;
 VAR_5.pa_headname = VAR_3->ifc_ifp->if_xname;
 VAR_4 = FUNC_1(&VAR_5);

 for (VAR_7 = 0, VAR_6 = VAR_3->ifc_rxqs; VAR_7 < FUNC_0(VAR_3); VAR_7++, VAR_6++) {
  VAR_6->pfil = VAR_4;
 }
}
