
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct page {TYPE_1__ lru; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;

__attribute__((used)) static inline struct kmem_cache *FUNC_3(struct page *VAR_0)
{
 VAR_0 = FUNC_2(VAR_0);
 FUNC_0(!FUNC_1(VAR_0));
 return (struct kmem_cache *)VAR_0->lru.next;
}
