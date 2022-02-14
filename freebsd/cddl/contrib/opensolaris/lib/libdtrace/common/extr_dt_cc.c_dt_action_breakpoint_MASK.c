
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {scalar_t__ dtad_arg; int dtad_kind; } ;
typedef TYPE_1__ dtrace_actdesc_t ;
typedef int dt_node_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(dtrace_hdl_t *VAR_1, dt_node_t *VAR_2, dtrace_stmtdesc_t *VAR_3)
{
 dtrace_actdesc_t *VAR_4 = FUNC_0(VAR_1, VAR_3);

 VAR_4->dtad_kind = VAR_0;
 VAR_4->dtad_arg = 0;
}
