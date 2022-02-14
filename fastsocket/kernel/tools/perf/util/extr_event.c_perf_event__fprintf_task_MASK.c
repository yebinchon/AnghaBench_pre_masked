
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; int tid; int ppid; int ptid; } ;
union perf_event {TYPE_1__ fork; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,int,int,int,int) ;

size_t FUNC_1(union perf_event *VAR_0, FILE *VAR_1)
{
 return FUNC_0(VAR_1, "(%d:%d):(%d:%d)\n",
         VAR_0->fork.pid, VAR_0->fork.tid,
         VAR_0->fork.ppid, VAR_0->fork.ptid);
}
