
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
struct page {int dummy; } ;
struct kmem_cache {int gfporder; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct page*,struct kmem_cache*) ;
 int FUNC_3 (struct page*,struct slab*) ;
 struct page* FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct kmem_cache *VAR_0, struct slab *VAR_1,
      void *VAR_2)
{
 int VAR_3;
 struct page *VAR_4;

 VAR_4 = FUNC_4(VAR_2);

 VAR_3 = 1;
 if (FUNC_1(!FUNC_0(VAR_4)))
  VAR_3 <<= VAR_0->gfporder;

 do {
  FUNC_2(VAR_4, VAR_0);
  FUNC_3(VAR_4, VAR_1);
  VAR_4++;
 } while (--VAR_3);
}
