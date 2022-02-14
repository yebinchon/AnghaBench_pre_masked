
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slab {int dummy; } ;
struct TYPE_2__ {scalar_t__ prev; } ;
struct page {TYPE_1__ lru; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct slab *FUNC_2(struct page *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));
 return (struct slab *)VAR_0->lru.prev;
}
