
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {int full; int total_objects; int nr_slabs; int partial; int list_lock; scalar_t__ nr_partial; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct kmem_cache_node *VAR_0, struct kmem_cache *VAR_1)
{
 VAR_0->nr_partial = 0;
 FUNC_2(&VAR_0->list_lock);
 FUNC_0(&VAR_0->partial);





}
