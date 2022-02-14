
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; } ;
struct page {TYPE_1__ lru; } ;
struct list_head {int dummy; } ;
struct kmem_cache {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct page *VAR_0, struct kmem_cache *VAR_1)
{
 VAR_0->lru.next = (struct list_head *)VAR_1;
}
