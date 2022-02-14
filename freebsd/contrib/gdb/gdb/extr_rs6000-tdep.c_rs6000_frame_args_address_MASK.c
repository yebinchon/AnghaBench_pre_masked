
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_extra_info {scalar_t__ initial_sp; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct frame_info*) ;
 struct frame_extra_info* FUNC_1 (struct frame_info*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct frame_info *VAR_0)
{
  struct frame_extra_info *VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1->initial_sp != 0)
    return VAR_1->initial_sp;
  else
    return FUNC_0 (VAR_0);
}
