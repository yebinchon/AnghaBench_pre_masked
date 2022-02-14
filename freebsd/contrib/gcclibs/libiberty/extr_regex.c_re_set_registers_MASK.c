
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_registers {unsigned int num_regs; int * end; int * start; } ;
struct re_pattern_buffer {int regs_allocated; } ;
typedef int regoff_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0 (struct re_pattern_buffer *VAR_2,
                  struct re_registers *VAR_3, unsigned VAR_4,
                  regoff_t *VAR_5, regoff_t *VAR_6)
{
  if (VAR_4)
    {
      VAR_2->regs_allocated = VAR_0;
      VAR_3->num_regs = VAR_4;
      VAR_3->start = VAR_5;
      VAR_3->end = VAR_6;
    }
  else
    {
      VAR_2->regs_allocated = VAR_1;
      VAR_3->num_regs = 0;
      VAR_3->start = VAR_3->end = (regoff_t *) 0;
    }
}
