
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {int dummy; } ;
struct arm_prologue_cache {size_t framereg; TYPE_1__* saved_regs; int prev_sp; } ;
struct TYPE_2__ {int addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 struct arm_prologue_cache* FUNC_1 (int) ;
 int FUNC_2 (struct frame_info*) ;
 int FUNC_3 (struct frame_info*,size_t) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,size_t) ;
 TYPE_1__* FUNC_6 (struct frame_info*) ;

__attribute__((used)) static struct arm_prologue_cache *
FUNC_7 (struct frame_info *VAR_3)
{
  struct arm_prologue_cache *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_1 (sizeof (struct arm_prologue_cache));

  VAR_4->prev_sp = FUNC_3 (VAR_3, VAR_0);

  VAR_4->saved_regs = FUNC_6 (VAR_3);

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    VAR_4->saved_regs[VAR_5].addr
      = FUNC_0 (VAR_4->prev_sp,
         FUNC_2 (VAR_3), VAR_5);


  VAR_4->framereg = VAR_0;
  VAR_4->prev_sp
    = FUNC_4 (VAR_4->saved_regs[VAR_4->framereg].addr,
      FUNC_5 (VAR_2, VAR_4->framereg));

  return VAR_4;
}
