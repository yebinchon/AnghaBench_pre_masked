
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* comm; int tid; } ;
union perf_event {TYPE_1__ comm; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,char*,int) ;

size_t FUNC_1(union perf_event *VAR_0, FILE *VAR_1)
{
 return FUNC_0(VAR_1, ": %s:%d\n", VAR_0->comm.comm, VAR_0->comm.tid);
}
