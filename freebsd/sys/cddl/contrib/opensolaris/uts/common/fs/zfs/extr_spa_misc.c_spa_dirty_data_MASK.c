
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_4__ {int dp_dirty_total; } ;



uint64_t
FUNC_0(spa_t *VAR_0)
{
 return (VAR_0->spa_dsl_pool->dp_dirty_total);
}
