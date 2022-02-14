
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_zone {scalar_t__ used_mem; scalar_t__ swap_limit; } ;
struct ttm_mem_global {unsigned int num_zones; int work; int swap_queue; int lock; struct ttm_mem_zone** zones; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ttm_mem_global *VAR_0)
{
 bool VAR_1 = 0;
 unsigned int VAR_2;
 struct ttm_mem_zone *VAR_3;

 FUNC_0(&VAR_0->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_zones; ++VAR_2) {
  VAR_3 = VAR_0->zones[VAR_2];
  if (VAR_3->used_mem > VAR_3->swap_limit) {
   VAR_1 = 1;
   break;
  }
 }

 FUNC_1(&VAR_0->lock);

 if (FUNC_3(VAR_1))
  FUNC_2(VAR_0->swap_queue, &VAR_0->work);

}
