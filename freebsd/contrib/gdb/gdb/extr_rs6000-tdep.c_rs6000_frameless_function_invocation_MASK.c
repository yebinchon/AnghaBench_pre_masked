
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs6000_framedata {int frameless; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (struct frame_info*) ;
 int FUNC_4 (int ,scalar_t__,struct rs6000_framedata*) ;

int
FUNC_5 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2;
  struct rs6000_framedata VAR_3;



  if (FUNC_3 (VAR_1) != ((void*)0)
      && !(FUNC_2 (FUNC_3 (VAR_1)) == VAR_0))
    return 0;

  VAR_2 = FUNC_0 (VAR_1);




  if (!VAR_2)
    {




      if (FUNC_1 (VAR_1) == 0)
 return 1;
      else
 return 0;
    }

  (void) FUNC_4 (VAR_2, FUNC_1 (VAR_1), &VAR_3);
  return VAR_3.frameless;
}
