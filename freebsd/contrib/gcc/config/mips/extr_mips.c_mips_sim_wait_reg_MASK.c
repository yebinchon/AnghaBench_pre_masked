
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_sim {unsigned int time; TYPE_1__* last_set; } ;
typedef int rtx ;
struct TYPE_2__ {scalar_t__ insn; unsigned int time; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct mips_sim*) ;

__attribute__((used)) static void
FUNC_5 (struct mips_sim *VAR_0, rtx VAR_1, rtx VAR_2)
{
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_1 (FUNC_2 (VAR_2), FUNC_0 (VAR_2)); VAR_3++)
    if (VAR_0->last_set[FUNC_2 (VAR_2) + VAR_3].insn != 0)
      {
 unsigned int VAR_4;

 VAR_4 = VAR_0->last_set[FUNC_2 (VAR_2) + VAR_3].time;
 VAR_4 += FUNC_3 (VAR_0->last_set[FUNC_2 (VAR_2) + VAR_3].insn, VAR_1);
 while (VAR_0->time < VAR_4)
   FUNC_4 (VAR_0);
    }
}
