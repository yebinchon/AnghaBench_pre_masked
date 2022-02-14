
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct kmem_cache_node {int list_lock; int nr_partial; } ;
struct kmem_cache {int dummy; } ;


 struct kmem_cache_node* FUNC_0 (struct kmem_cache*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kmem_cache *VAR_0, struct page *VAR_1)
{
 struct kmem_cache_node *VAR_2 = FUNC_0(VAR_0, FUNC_2(VAR_1));

 FUNC_3(&VAR_2->list_lock);
 FUNC_1(&VAR_1->lru);
 VAR_2->nr_partial--;
 FUNC_4(&VAR_2->list_lock);
}
