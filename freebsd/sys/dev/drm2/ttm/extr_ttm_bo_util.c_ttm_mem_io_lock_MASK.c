
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int io_reserve_mutex; int io_reserve_fastpath; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct ttm_mem_type_manager *VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_1->io_reserve_fastpath))
  return 0;

 if (VAR_2) {
  if (FUNC_2(&VAR_1->io_reserve_mutex))
   return (-VAR_0);
  else
   return (0);
 }

 FUNC_1(&VAR_1->io_reserve_mutex);
 return 0;
}
