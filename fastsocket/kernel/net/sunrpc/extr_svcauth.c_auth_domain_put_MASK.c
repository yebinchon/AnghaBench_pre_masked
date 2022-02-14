
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcount; } ;
struct auth_domain {TYPE_2__* flavour; int hash; TYPE_1__ ref; } ;
struct TYPE_4__ {int (* domain_release ) (struct auth_domain*) ;} ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct auth_domain*) ;

void FUNC_4(struct auth_domain *VAR_1)
{
 if (FUNC_0(&VAR_1->ref.refcount, &VAR_0)) {
  FUNC_1(&VAR_1->hash);
  VAR_1->flavour->domain_release(VAR_1);
  FUNC_2(&VAR_0);
 }
}
