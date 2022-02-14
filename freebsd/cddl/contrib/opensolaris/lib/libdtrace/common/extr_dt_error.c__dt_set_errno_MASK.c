
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt_errno; char const* dt_errfile; int dt_errline; } ;
typedef TYPE_1__ dtrace_hdl_t ;



int
FUNC_0(dtrace_hdl_t *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 VAR_0->dt_errno = VAR_1;
 VAR_0->dt_errfile = VAR_2;
 VAR_0->dt_errline = VAR_3;
 return (-1);
}
