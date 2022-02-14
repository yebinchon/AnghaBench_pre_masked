
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_8__ {TYPE_5__* dtad_difo; int dtad_kind; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
struct TYPE_9__ {int dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_7__ {int dtdt_size; } ;
struct TYPE_10__ {TYPE_1__ dtdo_rtype; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(dtrace_hdl_t *VAR_2, dt_node_t *VAR_3, dtrace_stmtdesc_t *VAR_4)
{
 dtrace_actdesc_t *VAR_5 = FUNC_2(VAR_2, VAR_4);

 FUNC_1(VAR_1, VAR_3->dn_args);
 VAR_5->dtad_difo = FUNC_0(VAR_1);
 VAR_5->dtad_kind = VAR_0;
 VAR_5->dtad_difo->dtdo_rtype.dtdt_size = sizeof (int);
}
