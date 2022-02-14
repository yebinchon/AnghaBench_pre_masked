
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {TYPE_1__* cr_prison; } ;
struct TYPE_2__ {int pr_mtx; int pr_domainname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,size_t) ;

void
FUNC_3(struct ucred *VAR_0, char *VAR_1, size_t VAR_2)
{

 FUNC_0(&VAR_0->cr_prison->pr_mtx);
 FUNC_2(VAR_1, VAR_0->cr_prison->pr_domainname, VAR_2);
 FUNC_1(&VAR_0->cr_prison->pr_mtx);
}
