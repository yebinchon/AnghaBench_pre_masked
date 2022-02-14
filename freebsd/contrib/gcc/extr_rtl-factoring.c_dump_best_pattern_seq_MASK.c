
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* matching_seq ;
struct TYPE_4__ {int gain; int abstracted_length; int link_reg; TYPE_1__* matching_seqs; int insn; } ;
struct TYPE_3__ {int abstracted_length; struct TYPE_3__* next_matching_seq; int insn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_3 (int VAR_2)
{
  matching_seq VAR_3;

  if (!VAR_0)
    return;

  FUNC_2 (VAR_0, ";; Iteration %d\n", VAR_2);
  FUNC_2 (VAR_0,
           "Best pattern sequence with %d gain is at insn %d (length %d).\n",
           VAR_1->gain, FUNC_0 (VAR_1->insn),
           VAR_1->abstracted_length);
  FUNC_2 (VAR_0, "Matching sequences are at");
  for (VAR_3 = VAR_1->matching_seqs; VAR_3;
       VAR_3 = VAR_3->next_matching_seq)
    {
      FUNC_2 (VAR_0, " insn %d (length %d)", FUNC_0 (VAR_3->insn),
               VAR_3->abstracted_length);
      if (VAR_3->next_matching_seq)
        FUNC_2 (VAR_0, ",");
    }
  FUNC_2 (VAR_0, ".\n");
  FUNC_2 (VAR_0, "Using reg %d as link register.\n\n",
           FUNC_1 (VAR_1->link_reg));
}
