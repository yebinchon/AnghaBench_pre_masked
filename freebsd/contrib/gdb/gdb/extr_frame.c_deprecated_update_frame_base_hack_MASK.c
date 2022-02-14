
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack_addr; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct frame_info {TYPE_2__ this_id; int level; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct frame_info *VAR_2, CORE_ADDR VAR_3)
{
  if (VAR_0)
    FUNC_0 (VAR_1,
   "{ deprecated_update_frame_base_hack (frame=%d,base=0x%s) }\n",
   VAR_2->level, FUNC_1 (VAR_3));

  VAR_2->this_id.value.stack_addr = VAR_3;
}
