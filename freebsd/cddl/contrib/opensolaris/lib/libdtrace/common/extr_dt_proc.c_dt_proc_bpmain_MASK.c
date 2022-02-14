
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {scalar_t__ dpr_pid; } ;
typedef TYPE_1__ dt_proc_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(dtrace_hdl_t *VAR_1, dt_proc_t *VAR_2, const char *VAR_3)
{
 FUNC_0("pid %d: breakpoint at %s()\n", (int)VAR_2->dpr_pid, VAR_3);
 FUNC_1(VAR_2, VAR_0);
}
