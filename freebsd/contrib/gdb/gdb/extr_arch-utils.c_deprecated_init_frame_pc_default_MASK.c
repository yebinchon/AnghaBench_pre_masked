
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (struct frame_info*) ;
 int FUNC_4 () ;

CORE_ADDR
FUNC_5 (int VAR_0, struct frame_info *VAR_1)
{
  if (VAR_0 && FUNC_2 ())
    return FUNC_1 (FUNC_3 (VAR_1));
  else if (FUNC_3 (VAR_1) != ((void*)0))
    return FUNC_0 (FUNC_3 (VAR_1));
  else
    return FUNC_4 ();
}
