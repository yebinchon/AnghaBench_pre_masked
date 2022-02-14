
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 scalar_t__ FUNC_2 (struct frame_info*) ;

int
FUNC_3 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2;

  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2)
    {
      VAR_2 += VAR_0;
      return VAR_2 == FUNC_0 (VAR_2);
    }
  else if (FUNC_2 (VAR_1) == 0)




    return 1;
  else




    return 0;
}
