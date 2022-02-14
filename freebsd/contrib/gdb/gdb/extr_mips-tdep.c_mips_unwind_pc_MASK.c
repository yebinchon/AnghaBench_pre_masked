
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ pc; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct frame_info*,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct gdbarch*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct gdbarch *VAR_1, struct frame_info *VAR_2)
{
  return FUNC_0 (VAR_2,
           VAR_0 + FUNC_1 (VAR_1)->pc);
}
