
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_actkind_t ;
typedef int dtrace_actdesc_t ;
struct TYPE_3__ {int dn_args; } ;
typedef TYPE_1__ dt_node_t ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(dtrace_hdl_t *VAR_0, dt_node_t *VAR_1, dtrace_stmtdesc_t *VAR_2,
    dtrace_actkind_t VAR_3)
{
 dtrace_actdesc_t *VAR_4 = FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_4, VAR_1->dn_args, VAR_3);
}
