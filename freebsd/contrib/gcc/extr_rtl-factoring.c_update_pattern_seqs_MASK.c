
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pattern_seq ;
typedef TYPE_2__* matching_seq ;
struct TYPE_5__ {scalar_t__ cost; int abstracted_length; int insn; struct TYPE_5__* next_matching_seq; } ;
struct TYPE_4__ {struct TYPE_4__* next_pattern_seq; int abstracted_length; int insn; TYPE_2__* matching_seqs; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  pattern_seq VAR_2;
  matching_seq VAR_3;

  VAR_2 = VAR_0;
  VAR_0 = VAR_2->next_pattern_seq;

  for (VAR_3 = VAR_2->matching_seqs; VAR_3; VAR_3 = VAR_3->next_matching_seq)
    if (VAR_3->cost > VAR_1)
      FUNC_0 (VAR_3->insn, VAR_3->abstracted_length);
  FUNC_0 (VAR_2->insn, VAR_2->abstracted_length);

  VAR_2->next_pattern_seq = VAR_0;
  VAR_0 = VAR_2;
}
