
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int * saved_regs; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

CORE_ADDR *
FUNC_1 (struct frame_info *VAR_1)
{
  VAR_1->saved_regs = (CORE_ADDR *)
    FUNC_0 (VAR_0);
  return VAR_1->saved_regs;
}
