
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int * shrink; } ;
struct ttm_pool_manager {TYPE_1__ mm_shrink; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ttm_pool_manager *VAR_1)
{
 VAR_1->mm_shrink.shrink = &VAR_0;
 VAR_1->mm_shrink.seeks = 1;
 FUNC_0(&VAR_1->mm_shrink);
}
