
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dcache_block {struct dcache_block* p; } ;
struct TYPE_4__ {struct dcache_block* valid_head; } ;
typedef TYPE_1__ DCACHE ;


 int FUNC_0 (TYPE_1__*,struct dcache_block*) ;

__attribute__((used)) static int
FUNC_1 (DCACHE *VAR_0)
{
  struct dcache_block *VAR_1;

  VAR_1 = VAR_0->valid_head;

  while (VAR_1)
    {
      if (!FUNC_0 (VAR_0, VAR_1))
 return 0;
      VAR_1 = VAR_1->p;
    }
  return 1;
}
