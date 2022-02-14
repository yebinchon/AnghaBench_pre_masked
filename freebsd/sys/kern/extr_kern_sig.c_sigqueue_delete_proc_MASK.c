
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
typedef int sigset_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct proc*,int *) ;

void
FUNC_3(struct proc *VAR_0, int VAR_1)
{
 sigset_t VAR_2;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_0, &VAR_2);
}
