
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int all; } ;
struct xfrm_policy {TYPE_1__ walk; int byidx; int bydst; } ;
struct TYPE_4__ {int * policy_count; } ;
struct net {TYPE_2__ xfrm; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct net* FUNC_3 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_4(struct xfrm_policy *VAR_0,
      int VAR_1)
{
 struct net *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_1(&VAR_0->bydst))
  return ((void*)0);

 FUNC_0(&VAR_0->bydst);
 FUNC_0(&VAR_0->byidx);
 FUNC_2(&VAR_0->walk.all);
 VAR_2->xfrm.policy_count[VAR_1]--;

 return VAR_0;
}
