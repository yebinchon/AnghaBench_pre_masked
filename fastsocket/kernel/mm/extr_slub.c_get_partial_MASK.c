
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (struct kmem_cache*,int) ;
 int FUNC_1 (struct kmem_cache*,int) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static struct page *FUNC_4(struct kmem_cache *VAR_1, gfp_t VAR_2, int VAR_3)
{
 struct page *VAR_4;
 int VAR_5 = (VAR_3 == -1) ? FUNC_3() : VAR_3;

 VAR_4 = FUNC_2(FUNC_1(VAR_1, VAR_5));
 if (VAR_4 || (VAR_2 & VAR_0))
  return VAR_4;

 return FUNC_0(VAR_1, VAR_2);
}
