
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab_rcu {int addr; struct kmem_cache* cachep; } ;
struct rcu_head {int dummy; } ;
struct kmem_cache {int slabp_cache; } ;


 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (int ,struct slab_rcu*) ;
 int FUNC_2 (struct kmem_cache*,int ) ;

__attribute__((used)) static void FUNC_3(struct rcu_head *VAR_0)
{
 struct slab_rcu *VAR_1 = (struct slab_rcu *)VAR_0;
 struct kmem_cache *VAR_2 = VAR_1->cachep;

 FUNC_2(VAR_2, VAR_1->addr);
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2->slabp_cache, VAR_1);
}
