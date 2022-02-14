
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_id {void* special_addr; void* code_addr; void* stack_addr; } ;
typedef void* CORE_ADDR ;



struct frame_id
FUNC_0 (CORE_ADDR VAR_0, CORE_ADDR VAR_1,
                        CORE_ADDR VAR_2)
{
  struct frame_id VAR_3;
  VAR_3.stack_addr = VAR_0;
  VAR_3.code_addr = VAR_1;
  VAR_3.special_addr = VAR_2;
  return VAR_3;
}
