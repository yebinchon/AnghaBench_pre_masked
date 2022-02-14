
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; } ;
struct prison {int pr_mtx; } ;
struct linux_prison {int pr_oss_version; } ;
struct TYPE_2__ {int cr_prison; } ;


 struct linux_prison* FUNC_0 (int ,struct prison**) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct thread *VAR_0)
{
 struct prison *VAR_1;
 struct linux_prison *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0->td_ucred->cr_prison, &VAR_1);
 VAR_3 = VAR_2->pr_oss_version;
 FUNC_1(&VAR_1->pr_mtx);

 return (VAR_3);
}
