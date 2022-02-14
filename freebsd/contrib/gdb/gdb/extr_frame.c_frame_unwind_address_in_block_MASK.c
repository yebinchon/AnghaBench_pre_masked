
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {scalar_t__ level; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct frame_info*) ;

CORE_ADDR
FUNC_3 (struct frame_info *VAR_1)
{

  CORE_ADDR VAR_2 = FUNC_0 (VAR_1);

  if ((&FUNC_1 != ((void*)0)) && (FUNC_1(&VAR_2) == 0))
   return VAR_2;
  if (VAR_1->level >= 0
      && FUNC_2 (VAR_1) == VAR_0)
    --VAR_2;
  return VAR_2;
}
