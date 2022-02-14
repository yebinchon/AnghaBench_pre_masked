
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pattern_seq ;
typedef TYPE_2__* matching_seq ;
struct TYPE_5__ {int matching_length; struct TYPE_5__* next_matching_seq; int insn; } ;
struct TYPE_4__ {TYPE_2__* matching_seqs; int insn; struct TYPE_4__* next_pattern_seq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  pattern_seq VAR_2;
  matching_seq VAR_3;

  if (!VAR_0)
    return;

  FUNC_1 (VAR_0, ";; Pattern sequences\n");
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next_pattern_seq)
    {
      FUNC_1 (VAR_0, "Pattern sequence at insn %d matches sequences at",
               FUNC_0 (VAR_2->insn));
      for (VAR_3 = VAR_2->matching_seqs; VAR_3; VAR_3 = VAR_3->next_matching_seq)
        {
          FUNC_1 (VAR_0, " insn %d (length %d)", FUNC_0 (VAR_3->insn),
                   VAR_3->matching_length);
          if (VAR_3->next_matching_seq)
            FUNC_1 (VAR_0, ",");
        }
      FUNC_1 (VAR_0, ".\n");
    }
  FUNC_1 (VAR_0, "\n");
}
