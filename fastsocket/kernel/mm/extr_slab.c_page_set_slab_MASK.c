
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slab {int dummy; } ;
struct TYPE_2__ {struct list_head* prev; } ;
struct page {TYPE_1__ lru; } ;
struct list_head {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct page *VAR_0, struct slab *VAR_1)
{
 VAR_0->lru.prev = (struct list_head *)VAR_1;
}
