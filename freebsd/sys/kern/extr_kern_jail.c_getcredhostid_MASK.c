
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {TYPE_1__* cr_prison; } ;
struct TYPE_2__ {unsigned long pr_hostid; int pr_mtx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ucred *VAR_0, unsigned long *VAR_1)
{

 FUNC_0(&VAR_0->cr_prison->pr_mtx);
 *VAR_1 = VAR_0->cr_prison->pr_hostid;
 FUNC_1(&VAR_0->cr_prison->pr_mtx);
}
