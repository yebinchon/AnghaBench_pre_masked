
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* seq_block ;
typedef TYPE_4__* matching_seq ;
struct TYPE_9__ {TYPE_1__* rtl; } ;
struct TYPE_13__ {TYPE_2__ il; } ;
struct TYPE_12__ {int insn; } ;
struct TYPE_11__ {int insn; struct TYPE_11__* next_matching_seq; } ;
struct TYPE_10__ {TYPE_4__* matching_seqs; struct TYPE_10__* next_seq_block; } ;
struct TYPE_8__ {int global_live_at_end; } ;


 TYPE_7__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__* VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  seq_block VAR_2;
  matching_seq VAR_3;

  FUNC_2 (VAR_0->insn);
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next_seq_block)
    {
      for (VAR_3 = VAR_2->matching_seqs; VAR_3; VAR_3 = VAR_3->next_matching_seq)
        {
          FUNC_2 (VAR_3->insn);
          FUNC_1 (FUNC_0 (VAR_0->insn)->
                       il.rtl->global_live_at_end,
                       FUNC_0 (VAR_3->insn)->il.rtl->global_live_at_end);
        }
    }
}
