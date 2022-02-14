
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct kmem_cache_node {int list_lock; int partial; int nr_partial; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kmem_cache_node *VAR_0,
    struct page *VAR_1, int VAR_2)
{
 FUNC_2(&VAR_0->list_lock);
 VAR_0->nr_partial++;
 if (VAR_2)
  FUNC_1(&VAR_1->lru, &VAR_0->partial);
 else
  FUNC_0(&VAR_1->lru, &VAR_0->partial);
 FUNC_3(&VAR_0->list_lock);
}
