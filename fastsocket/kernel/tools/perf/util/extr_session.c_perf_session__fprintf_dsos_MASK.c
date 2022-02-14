
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_dsos; int kernel_dsos; } ;
struct perf_session {int machines; TYPE_1__ host_machine; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *,int *) ;

size_t FUNC_2(struct perf_session *VAR_0, FILE *VAR_1)
{
 return FUNC_0(&VAR_0->host_machine.kernel_dsos, VAR_1) +
        FUNC_0(&VAR_0->host_machine.user_dsos, VAR_1) +
        FUNC_1(&VAR_0->machines, VAR_1);
}
