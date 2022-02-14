
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab_rcu {int head; void* addr; struct kmem_cache* cachep; } ;
struct slab {int colouroff; int s_mem; } ;
struct kmem_cache {int flags; int slabp_cache; } ;


 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,struct slab*) ;
 int FUNC_3 (struct kmem_cache*,void*) ;
 int VAR_1 ;
 int FUNC_4 (struct kmem_cache*,struct slab*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct kmem_cache *VAR_2, struct slab *VAR_3)
{
 void *VAR_4 = VAR_3->s_mem - VAR_3->colouroff;

 FUNC_4(VAR_2, VAR_3);
 if (FUNC_5(VAR_2->flags & VAR_0)) {
  struct slab_rcu *VAR_5;

  VAR_5 = (struct slab_rcu *)VAR_3;
  VAR_5->cachep = VAR_2;
  VAR_5->addr = VAR_4;
  FUNC_1(&VAR_5->head, VAR_1);
 } else {
  FUNC_3(VAR_2, VAR_4);
  if (FUNC_0(VAR_2))
   FUNC_2(VAR_2->slabp_cache, VAR_3);
 }
}
