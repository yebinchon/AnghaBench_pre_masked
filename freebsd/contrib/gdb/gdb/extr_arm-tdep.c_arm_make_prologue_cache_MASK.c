
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct arm_prologue_cache {scalar_t__ framesize; scalar_t__ frameoffset; scalar_t__ prev_sp; TYPE_1__* saved_regs; int framereg; } ;
struct TYPE_3__ {int addr; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct frame_info*,struct arm_prologue_cache*) ;
 struct arm_prologue_cache* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct frame_info*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (struct frame_info*) ;

__attribute__((used)) static struct arm_prologue_cache *
FUNC_5 (struct frame_info *VAR_1)
{
  int VAR_2;
  struct arm_prologue_cache *VAR_3;
  CORE_ADDR VAR_4;

  VAR_3 = FUNC_1 (sizeof (struct arm_prologue_cache));
  VAR_3->saved_regs = FUNC_4 (VAR_1);

  FUNC_0 (VAR_1, VAR_3);
  VAR_4 = FUNC_2 (VAR_1, VAR_3->framereg);
  if (VAR_4 == 0)
    return VAR_3;

  VAR_3->prev_sp = VAR_4 + VAR_3->framesize - VAR_3->frameoffset;



  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    if (FUNC_3 (VAR_3->saved_regs, VAR_2))
      VAR_3->saved_regs[VAR_2].addr += VAR_3->prev_sp;

  return VAR_3;
}
