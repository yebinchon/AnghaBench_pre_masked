
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*,struct page*,void*,int ) ;
 int FUNC_1 (int ,void*) ;
 struct page* FUNC_2 (void*) ;

void FUNC_3(struct kmem_cache *VAR_1, void *VAR_2)
{
 struct page *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, VAR_3, VAR_2, VAR_0);

 FUNC_1(VAR_0, VAR_2);
}
