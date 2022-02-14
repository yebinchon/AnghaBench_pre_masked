
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct kmem_cache* slab; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (struct kmem_cache*,struct page*,void const*) ;
 struct page* FUNC_1 (void const*) ;

int FUNC_2(struct kmem_cache *VAR_0, const void *VAR_1)
{
 struct page *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2 || VAR_0 != VAR_2->slab)

  return 0;

 if (!FUNC_0(VAR_0, VAR_2, VAR_1))
  return 0;







 return 1;
}
