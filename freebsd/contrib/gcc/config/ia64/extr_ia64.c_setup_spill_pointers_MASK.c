
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* rtx ;
struct TYPE_4__ {int gr_used_mask; } ;
struct TYPE_3__ {int save_gr_used_mask; int n_iter; int * iter_reg; scalar_t__ next_iter; void** prev_off; int ** prev_insn; int ** prev_addr; void** init_reg; int init_after; } ;
typedef void* HOST_WIDE_INT ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_3 (int VAR_3, rtx VAR_4, HOST_WIDE_INT VAR_5)
{
  int VAR_6;

  VAR_2.init_after = FUNC_1 ();
  VAR_2.init_reg[0] = VAR_4;
  VAR_2.init_reg[1] = VAR_4;
  VAR_2.prev_addr[0] = ((void*)0);
  VAR_2.prev_addr[1] = ((void*)0);
  VAR_2.prev_insn[0] = ((void*)0);
  VAR_2.prev_insn[1] = ((void*)0);
  VAR_2.prev_off[0] = VAR_5;
  VAR_2.prev_off[1] = VAR_5;
  VAR_2.next_iter = 0;
  VAR_2.save_gr_used_mask = VAR_1.gr_used_mask;

  VAR_2.n_iter = 1 + (VAR_3 > 2);
  for (VAR_6 = 0; VAR_6 < VAR_2.n_iter; ++VAR_6)
    {
      int VAR_7 = FUNC_2 ();
      VAR_2.iter_reg[VAR_6] = FUNC_0 (VAR_0, VAR_7);
      VAR_1.gr_used_mask |= 1 << VAR_7;
    }
}
