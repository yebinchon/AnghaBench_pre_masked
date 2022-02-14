
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_zone {int kobj_ref; } ;
struct ttm_mem_global {unsigned int num_zones; int kobj_ref; struct ttm_mem_zone** zones; int * swap_queue; int work; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ttm_mem_global*) ;
 int FUNC_5 (struct ttm_mem_zone*) ;
 int FUNC_6 () ;

void FUNC_7(struct ttm_mem_global *VAR_0)
{
 unsigned int VAR_1;
 struct ttm_mem_zone *VAR_2;


 FUNC_6();
 FUNC_3();

 FUNC_1(VAR_0->swap_queue, &VAR_0->work);
 FUNC_2(VAR_0->swap_queue);
 VAR_0->swap_queue = ((void*)0);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_zones; ++VAR_1) {
  VAR_2 = VAR_0->zones[VAR_1];
  if (FUNC_0(&VAR_2->kobj_ref))
   FUNC_5(VAR_2);
 }
 if (FUNC_0(&VAR_0->kobj_ref))
  FUNC_4(VAR_0);
}
