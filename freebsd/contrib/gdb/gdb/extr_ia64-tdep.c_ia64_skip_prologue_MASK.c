
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_frame_cache {scalar_t__ bsp; scalar_t__ cfm; scalar_t__ after_prologue; scalar_t__ base; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,struct ia64_frame_cache*) ;

CORE_ADDR
FUNC_1 (CORE_ADDR VAR_0)
{
  struct ia64_frame_cache VAR_1;
  VAR_1.base = 0;
  VAR_1.after_prologue = 0;
  VAR_1.cfm = 0;
  VAR_1.bsp = 0;


  return FUNC_0 (VAR_0, VAR_0+1024, 0, &VAR_1);
}
