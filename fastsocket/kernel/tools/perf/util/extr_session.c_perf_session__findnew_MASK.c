
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_session {int host_machine; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (int *,int ) ;

struct thread *FUNC_1(struct perf_session *VAR_0, pid_t VAR_1)
{
 return FUNC_0(&VAR_0->host_machine, VAR_1);
}
