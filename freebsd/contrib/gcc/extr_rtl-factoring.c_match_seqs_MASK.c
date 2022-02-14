
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pattern_seq_def {int dummy; } ;
struct matching_seq_def {int dummy; } ;
typedef TYPE_1__* pattern_seq ;
typedef TYPE_2__* p_hash_elem ;
typedef TYPE_3__* matching_seq ;
struct TYPE_9__ {scalar_t__ idx; scalar_t__ insn; int matching_length; int cost; struct TYPE_9__* next_matching_seq; scalar_t__ abstracted_length; } ;
struct TYPE_8__ {scalar_t__ insn; scalar_t__ idx; } ;
struct TYPE_7__ {scalar_t__ insn; scalar_t__ idx; TYPE_3__* matching_seqs; struct TYPE_7__* next_pattern_seq; int link_reg; scalar_t__ cost; scalar_t__ abstracted_length; scalar_t__ gain; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int*,int*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (p_hash_elem VAR_3, p_hash_elem VAR_4)
{
  int VAR_5;
  int VAR_6;
  matching_seq VAR_7, VAR_8, VAR_9;



  FUNC_0 (VAR_3->insn, VAR_4->insn, &VAR_5, &VAR_6);
  if (VAR_6 <= VAR_2)
    return;




  if (!VAR_1 || VAR_1->insn != VAR_3->insn)
    {
      pattern_seq VAR_10 =
        (pattern_seq) FUNC_1 (sizeof (struct pattern_seq_def));
      VAR_10->insn = VAR_3->insn;
      VAR_10->idx = VAR_3->idx;
      VAR_10->gain = 0;
      VAR_10->abstracted_length = 0;
      VAR_10->cost = 0;
      VAR_10->link_reg = VAR_0;
      VAR_10->matching_seqs = ((void*)0);
      VAR_10->next_pattern_seq = VAR_1;
      VAR_1 = VAR_10;
    }


  VAR_8 = ((void*)0);
  VAR_9 = VAR_1->matching_seqs;
  while (VAR_9 && VAR_9->idx < VAR_4->idx)
    {
      VAR_8 = VAR_9;
      VAR_9 = VAR_9->next_matching_seq;
    }



  VAR_7 = (matching_seq) FUNC_1 (sizeof (struct matching_seq_def));
  VAR_7->insn = VAR_4->insn;
  VAR_7->idx = VAR_4->idx;
  VAR_7->matching_length = VAR_5;
  VAR_7->abstracted_length = 0;
  VAR_7->cost = VAR_6;

  if (VAR_8 == ((void*)0))
    VAR_1->matching_seqs = VAR_7;
  else
    VAR_8->next_matching_seq = VAR_7;
  VAR_7->next_matching_seq = VAR_9;
}
