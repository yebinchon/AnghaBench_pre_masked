
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct kmem_cache* slab; } ;
struct kmem_cache {int flags; size_t objsize; size_t inuse; size_t size; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 void const* VAR_5 ;
 size_t FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int) ;
 struct page* FUNC_5 (void const*) ;

size_t FUNC_6(const void *VAR_6)
{
 struct page *VAR_7;
 struct kmem_cache *VAR_8;

 if (FUNC_4(VAR_6 == VAR_5))
  return 0;

 VAR_7 = FUNC_5(VAR_6);

 if (FUNC_4(!FUNC_1(VAR_7))) {
  FUNC_2(!FUNC_0(VAR_7));
  return VAR_0 << FUNC_3(VAR_7);
 }
 VAR_8 = VAR_7->slab;
 if (VAR_8->flags & (VAR_1 | VAR_4))
  return VAR_8->inuse;



 return VAR_8->size;
}
