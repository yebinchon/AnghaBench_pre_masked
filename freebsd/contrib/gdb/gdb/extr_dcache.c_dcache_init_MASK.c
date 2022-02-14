
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dcache_block {int dummy; } ;
struct TYPE_5__ {struct dcache_block* the_cache; } ;
typedef TYPE_1__ DCACHE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct dcache_block*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

DCACHE *
FUNC_3 (void)
{
  int VAR_2 = sizeof (struct dcache_block) * VAR_0;
  DCACHE *VAR_3;

  VAR_3 = (DCACHE *) FUNC_2 (sizeof (*VAR_3));

  VAR_3->the_cache = (struct dcache_block *) FUNC_2 (VAR_2);
  FUNC_1 (VAR_3->the_cache, 0, VAR_2);

  FUNC_0 (VAR_3);

  VAR_1 = VAR_3;
  return VAR_3;
}
