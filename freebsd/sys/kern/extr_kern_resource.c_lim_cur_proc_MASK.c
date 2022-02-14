
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;
struct proc {int dummy; } ;
typedef int rlim_t ;


 int FUNC_0 (struct proc*,int,struct rlimit*) ;

rlim_t
FUNC_1(struct proc *VAR_0, int VAR_1)
{
 struct rlimit VAR_2;

 FUNC_0(VAR_0, VAR_1, &VAR_2);
 return (VAR_2.rlim_cur);
}
