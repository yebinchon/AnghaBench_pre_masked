
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int * saved_regs; } ;
typedef int CORE_ADDR ;



CORE_ADDR *
FUNC_0 (struct frame_info *VAR_0)
{
  return VAR_0->saved_regs;
}
