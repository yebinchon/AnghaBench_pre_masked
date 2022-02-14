
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
struct TYPE_6__ {int dp_stmts; } ;
typedef TYPE_1__ dtrace_prog_t ;
typedef int dtrace_hdl_t ;
struct TYPE_7__ {int * ds_desc; } ;
typedef TYPE_2__ dt_stmt_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;

int
FUNC_2(dtrace_hdl_t *VAR_0, dtrace_prog_t *VAR_1, dtrace_stmtdesc_t *VAR_2)
{
 dt_stmt_t *VAR_3 = FUNC_0(VAR_0, sizeof (dt_stmt_t));

 if (VAR_3 == ((void*)0))
  return (-1);

 FUNC_1(&VAR_1->dp_stmts, VAR_3);
 VAR_3->ds_desc = VAR_2;

 return (0);
}
