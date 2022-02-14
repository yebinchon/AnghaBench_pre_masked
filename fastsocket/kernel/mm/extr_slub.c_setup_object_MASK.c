
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {int (* ctor ) (void*) ;} ;


 int FUNC_0 (struct kmem_cache*,struct page*,void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int (*) (void*)) ;

__attribute__((used)) static void FUNC_3(struct kmem_cache *VAR_0, struct page *VAR_1,
    void *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 if (FUNC_2(VAR_0->ctor))
  VAR_0->ctor(VAR_2);
}
