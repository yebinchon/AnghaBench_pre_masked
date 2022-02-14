
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct arm_prologue_cache {scalar_t__ framesize; scalar_t__ frameoffset; scalar_t__ prev_sp; } ;
typedef scalar_t__ CORE_ADDR ;


 void* FUNC_0 (struct frame_info*) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (struct frame_info *VAR_0, void **VAR_1)
{
  struct arm_prologue_cache *VAR_2;

  if (*VAR_1 == ((void*)0))
    *VAR_1 = FUNC_0 (VAR_0);
  VAR_2 = *VAR_1;

  return VAR_2->prev_sp + VAR_2->frameoffset - VAR_2->framesize;
}
