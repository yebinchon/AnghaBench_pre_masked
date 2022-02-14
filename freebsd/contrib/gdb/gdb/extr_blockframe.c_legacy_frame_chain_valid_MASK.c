
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,struct frame_info*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct frame_info*) ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct frame_info*) ;
 scalar_t__ FUNC_8 (int ) ;

int
FUNC_9 (CORE_ADDR VAR_1, struct frame_info *VAR_2)
{

  if (VAR_0
      && FUNC_2 (FUNC_7 (VAR_2), 0, 0))
    return 1;


  if (VAR_1 == 0)
    return 0;



  if (FUNC_3 (VAR_1, FUNC_6 (VAR_2)))
    return 0;



  if (FUNC_1 ())
    return FUNC_0 (VAR_1, VAR_2);



  if (FUNC_8 (FUNC_7 (VAR_2)))
    return 0;





  if (FUNC_4 (FUNC_5 (VAR_2)))
      return 0;

  return 1;
}
