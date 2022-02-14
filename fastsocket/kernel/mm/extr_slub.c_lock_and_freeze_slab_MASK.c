
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct kmem_cache_node {int nr_partial; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static inline int FUNC_3(struct kmem_cache_node *VAR_0,
       struct page *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  FUNC_1(&VAR_1->lru);
  VAR_0->nr_partial--;
  FUNC_0(VAR_1);
  return 1;
 }
 return 0;
}
