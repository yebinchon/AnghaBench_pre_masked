
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p; int addr; } ;
struct frame_info {TYPE_1__ prev_func; int level; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct frame_info*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

CORE_ADDR
FUNC_4 (struct frame_info *VAR_2)
{
  if (!VAR_2->prev_func.p)
    {


      CORE_ADDR VAR_3 = FUNC_1 (VAR_2);
      VAR_2->prev_func.p = 1;
      VAR_2->prev_func.addr = FUNC_2 (VAR_3);
      if (VAR_0)
 FUNC_0 (VAR_1,
       "{ frame_func_unwind (fi=%d) -> 0x%s }\n",
       VAR_2->level, FUNC_3 (VAR_2->prev_func.addr));
    }
  return VAR_2->prev_func.addr;
}
