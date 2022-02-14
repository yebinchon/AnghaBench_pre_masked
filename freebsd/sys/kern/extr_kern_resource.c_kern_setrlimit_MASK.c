
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int td_proc; } ;
struct rlimit {int dummy; } ;


 int FUNC_0 (struct thread*,int ,int ,struct rlimit*) ;

int
FUNC_1(struct thread *VAR_0, u_int VAR_1, struct rlimit *VAR_2)
{

 return (FUNC_0(VAR_0, VAR_0->td_proc, VAR_1, VAR_2));
}
