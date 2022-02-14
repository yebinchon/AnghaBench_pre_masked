
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_6__ {int dtad_kind; TYPE_5__* dtad_difo; } ;
typedef TYPE_1__ dtrace_actdesc_t ;
struct TYPE_7__ {int dn_expr; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_8__ {int dtdo_rtype; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(dtrace_hdl_t *VAR_3, dt_node_t *VAR_4, dtrace_stmtdesc_t *VAR_5)
{
 dtrace_actdesc_t *VAR_6 = FUNC_2(VAR_3, VAR_5);

 FUNC_1(VAR_2, VAR_4->dn_expr);
 VAR_6->dtad_difo = FUNC_0(VAR_2);
 VAR_6->dtad_difo->dtdo_rtype = VAR_1;
 VAR_6->dtad_kind = VAR_0;
}
