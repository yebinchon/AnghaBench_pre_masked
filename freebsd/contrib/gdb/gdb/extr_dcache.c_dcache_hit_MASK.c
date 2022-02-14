
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dcache_block {scalar_t__ addr; struct dcache_block* p; int refs; } ;
struct TYPE_3__ {struct dcache_block* valid_head; } ;
typedef TYPE_1__ DCACHE ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct dcache_block *
FUNC_1 (DCACHE *VAR_0, CORE_ADDR VAR_1)
{
  struct dcache_block *VAR_2;


  VAR_2 = VAR_0->valid_head;

  while (VAR_2)
    {
      if (FUNC_0 (VAR_1) == VAR_2->addr)
 {
   VAR_2->refs++;
   return VAR_2;
 }
      VAR_2 = VAR_2->p;
    }

  return ((void*)0);
}
