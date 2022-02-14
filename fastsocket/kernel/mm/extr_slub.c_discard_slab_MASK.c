
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int objects; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (struct kmem_cache*,int ,int ) ;
 int FUNC_1 (struct kmem_cache*,struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct kmem_cache *VAR_0, struct page *VAR_1)
{
 FUNC_0(VAR_0, FUNC_2(VAR_1), VAR_1->objects);
 FUNC_1(VAR_0, VAR_1);
}
