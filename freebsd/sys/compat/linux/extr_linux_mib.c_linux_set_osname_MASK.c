
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; } ;
struct prison {int pr_mtx; } ;
struct linux_prison {int pr_osname; } ;
struct TYPE_2__ {int cr_prison; } ;


 int VAR_0 ;
 struct linux_prison* FUNC_0 (int ,struct prison**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, char *VAR_2)
{
 struct prison *VAR_3;
 struct linux_prison *VAR_4;

 VAR_4 = FUNC_0(VAR_1->td_ucred->cr_prison, &VAR_3);
 FUNC_2(VAR_4->pr_osname, VAR_2, VAR_0);
 FUNC_1(&VAR_3->pr_mtx);

 return (0);
}
