
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int * next; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

CORE_ADDR
FUNC_2 (struct frame_info *VAR_0)
{
  FUNC_1 (VAR_0->next != ((void*)0));
  return FUNC_0 (VAR_0->next);
}
