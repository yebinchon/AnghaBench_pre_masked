
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dcache_block {struct dcache_block* p; } ;
struct TYPE_3__ {struct dcache_block* free_tail; struct dcache_block* free_head; struct dcache_block* the_cache; scalar_t__ valid_tail; scalar_t__ valid_head; } ;
typedef TYPE_1__ DCACHE ;


 int VAR_0 ;

void
FUNC_0 (DCACHE *VAR_1)
{
  int VAR_2;
  VAR_1->valid_head = 0;
  VAR_1->valid_tail = 0;

  VAR_1->free_head = 0;
  VAR_1->free_tail = 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      struct dcache_block *VAR_3 = VAR_1->the_cache + VAR_2;

      if (!VAR_1->free_head)
 VAR_1->free_head = VAR_3;
      else
 VAR_1->free_tail->p = VAR_3;
      VAR_1->free_tail = VAR_3;
      VAR_3->p = 0;
    }

  return;
}
