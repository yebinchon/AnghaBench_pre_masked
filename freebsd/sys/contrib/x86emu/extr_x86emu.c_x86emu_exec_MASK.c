
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intr; int intno; scalar_t__ R_CS; scalar_t__ R_IP; } ;
struct x86emu {int cur_cycles; TYPE_1__ x86; int exec_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;

void
FUNC_4(struct x86emu *VAR_2)
{
 VAR_2->x86.intr = 0;

 if (FUNC_1(VAR_2->exec_state))
  return;

 for (;;) {
  if (VAR_2->x86.intr) {
   if (((VAR_2->x86.intr & VAR_1) &&
       (VAR_2->x86.intno == 0 || VAR_2->x86.intno == 2)) ||
       !FUNC_0(VAR_0)) {
    FUNC_3(VAR_2);
   }
  }
  if (VAR_2->x86.R_CS == 0 && VAR_2->x86.R_IP == 0)
   return;
  FUNC_2(VAR_2);
  ++VAR_2->cur_cycles;
 }
}
