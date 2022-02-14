
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int objects; } ;
struct kmem_cache {int size; } ;


 void* FUNC_0 (struct page*) ;

__attribute__((used)) static inline int FUNC_1(struct kmem_cache *VAR_0,
    struct page *VAR_1, const void *VAR_2)
{
 void *VAR_3;

 if (!VAR_2)
  return 1;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 < VAR_3 || VAR_2 >= VAR_3 + VAR_1->objects * VAR_0->size ||
  (VAR_2 - VAR_3) % VAR_0->size) {
  return 0;
 }

 return 1;
}
