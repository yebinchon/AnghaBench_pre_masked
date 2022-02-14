
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_block_def {int dummy; } ;
typedef TYPE_1__* seq_block ;
typedef TYPE_2__* matching_seq ;
struct TYPE_7__ {TYPE_2__* matching_seqs; } ;
struct TYPE_6__ {scalar_t__ cost; scalar_t__ abstracted_length; struct TYPE_6__* next_matching_seq; } ;
struct TYPE_5__ {scalar_t__ length; TYPE_2__* matching_seqs; struct TYPE_5__* next_seq_block; void* label; } ;


 void* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  seq_block VAR_4;
  matching_seq *VAR_5;
  matching_seq VAR_6;


  VAR_2 = 0;


  for (VAR_5 = &VAR_1->matching_seqs; *VAR_5;)
    {

      if ((*VAR_5)->cost <= VAR_3)
        {
          VAR_5 = &(*VAR_5)->next_matching_seq;
          continue;
        }



      if (!VAR_2 || ((*VAR_5)->abstracted_length < VAR_2->length))
        {
          VAR_4 = (seq_block) FUNC_0 (sizeof (struct seq_block_def));
          VAR_4->length = (*VAR_5)->abstracted_length;
          VAR_4->label = VAR_0;
          VAR_4->matching_seqs = 0;
          VAR_4->next_seq_block = VAR_2;
          VAR_2 = VAR_4;
        }
      else
        {
          for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next_seq_block)
            {
              if ((*VAR_5)->abstracted_length == VAR_4->length)
                break;
              if (!VAR_4->next_seq_block
                  || ((*VAR_5)->abstracted_length <
                      VAR_4->next_seq_block->length))
                {
                  seq_block VAR_7 =
                    (seq_block) FUNC_0 (sizeof (struct seq_block_def));
                  VAR_7->length = (*VAR_5)->abstracted_length;
                  VAR_7->label = VAR_0;
                  VAR_7->matching_seqs = 0;
                  VAR_7->next_seq_block = VAR_4->next_seq_block;
                  VAR_4->next_seq_block = VAR_7;
                }
            }
        }



      VAR_6 = *VAR_5;
      *VAR_5 = VAR_6->next_matching_seq;
      VAR_6->next_matching_seq = VAR_4->matching_seqs;
      VAR_4->matching_seqs = VAR_6;
    }
}
