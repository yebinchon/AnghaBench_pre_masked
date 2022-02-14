
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void** freelist; int inuse; } ;
struct kmem_cache_cpu {void** freelist; size_t offset; struct page* page; } ;
struct kmem_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache_cpu*,int ) ;
 int FUNC_1 (struct kmem_cache*,struct page*,int) ;
 scalar_t__ FUNC_2 (void**) ;

__attribute__((used)) static void FUNC_3(struct kmem_cache *VAR_1, struct kmem_cache_cpu *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 int VAR_4 = 1;

 if (VAR_3->freelist)
  FUNC_0(VAR_2, VAR_0);





 while (FUNC_2(VAR_2->freelist)) {
  void **VAR_5;

  VAR_4 = 0;


  VAR_5 = VAR_2->freelist;
  VAR_2->freelist = VAR_2->freelist[VAR_2->offset];


  VAR_5[VAR_2->offset] = VAR_3->freelist;
  VAR_3->freelist = VAR_5;
  VAR_3->inuse--;
 }
 VAR_2->page = ((void*)0);
 FUNC_1(VAR_1, VAR_3, VAR_4);
}
