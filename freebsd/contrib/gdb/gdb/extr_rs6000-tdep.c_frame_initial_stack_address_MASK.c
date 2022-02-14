
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rs6000_framedata {scalar_t__ alloca_reg; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {void* initial_sp; } ;
typedef void* CORE_ADDR ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct frame_info*) ;
 void* FUNC_2 (char*,int ) ;
 int FUNC_3 (struct frame_info*,struct rs6000_framedata*) ;
 scalar_t__ FUNC_4 (struct frame_info*,scalar_t__,char*) ;
 void* FUNC_5 (struct frame_info*) ;
 TYPE_1__* FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct frame_info*) ;
 int FUNC_8 (struct frame_info*) ;
 int FUNC_9 (int ,int ,struct rs6000_framedata*) ;

__attribute__((used)) static CORE_ADDR
FUNC_10 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2;
  struct rs6000_framedata VAR_3;
  struct frame_info *VAR_4;




  if (FUNC_6 (VAR_1)->initial_sp)
    return FUNC_6 (VAR_1)->initial_sp;



  (void) FUNC_9 (FUNC_7 (VAR_1), FUNC_8 (VAR_1), &VAR_3);




  if (!FUNC_1 (VAR_1))
    FUNC_3 (VAR_1, &VAR_3);




  if (VAR_3.alloca_reg < 0)
    {
      FUNC_6 (VAR_1)->initial_sp = FUNC_5 (VAR_1);
      return FUNC_6 (VAR_1)->initial_sp;
    }



  {
    char VAR_5[VAR_0];
    if (FUNC_4 (VAR_1, VAR_3.alloca_reg, VAR_5))
      {
 FUNC_6 (VAR_1)->initial_sp
   = FUNC_2 (VAR_5,
          FUNC_0 (VAR_3.alloca_reg));
      }
    else



      FUNC_6 (VAR_1)->initial_sp = FUNC_5 (VAR_1);
  }
  return FUNC_6 (VAR_1)->initial_sp;
}
