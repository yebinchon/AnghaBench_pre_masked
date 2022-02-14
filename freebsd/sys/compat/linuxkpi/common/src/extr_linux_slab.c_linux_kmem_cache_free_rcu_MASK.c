
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_kmem_rcu {int rcu_head; } ;
struct linux_kmem_cache {int dummy; } ;


 struct linux_kmem_rcu* FUNC_0 (struct linux_kmem_cache*,void*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

void
FUNC_2(struct linux_kmem_cache *VAR_1, void *VAR_2)
{
 struct linux_kmem_rcu *VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_1(&VAR_3->rcu_head, VAR_0);
}
