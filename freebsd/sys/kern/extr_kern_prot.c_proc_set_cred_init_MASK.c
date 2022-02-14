
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct proc {struct ucred* p_ucred; } ;



void
FUNC_0(struct proc *VAR_0, struct ucred *VAR_1)
{

 VAR_0->p_ucred = VAR_1;
}
