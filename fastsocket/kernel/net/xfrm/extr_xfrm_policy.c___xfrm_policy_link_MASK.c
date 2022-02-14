
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int all; } ;
struct xfrm_policy {int index; int byidx; int bydst; TYPE_1__ walk; int family; int selector; } ;
struct TYPE_4__ {int policy_hash_work; int * policy_count; struct hlist_head* policy_byidx; int policy_all; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *,struct hlist_head*) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct hlist_head* FUNC_3 (struct net*,int *,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct net*,int,int *) ;
 int FUNC_6 (struct xfrm_policy*) ;
 struct net* FUNC_7 (struct xfrm_policy*) ;

__attribute__((used)) static void FUNC_8(struct xfrm_policy *VAR_0, int VAR_1)
{
 struct net *VAR_2 = FUNC_7(VAR_0);
 struct hlist_head *VAR_3 = FUNC_3(VAR_2, &VAR_0->selector,
           VAR_0->family, VAR_1);

 FUNC_2(&VAR_0->walk.all, &VAR_2->xfrm.policy_all);
 FUNC_0(&VAR_0->bydst, VAR_3);
 FUNC_0(&VAR_0->byidx, VAR_2->xfrm.policy_byidx+FUNC_1(VAR_2, VAR_0->index));
 VAR_2->xfrm.policy_count[VAR_1]++;
 FUNC_6(VAR_0);

 if (FUNC_5(VAR_2, VAR_1, ((void*)0)))
  FUNC_4(&VAR_2->xfrm.policy_hash_work);
}
