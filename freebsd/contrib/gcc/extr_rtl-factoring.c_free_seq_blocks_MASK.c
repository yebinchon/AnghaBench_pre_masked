
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* seq_block ;
typedef TYPE_1__* matching_seq ;
struct TYPE_5__ {struct TYPE_5__* next_seq_block; struct TYPE_5__* next_matching_seq; struct TYPE_5__* matching_seqs; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  while (VAR_0)
    {
      seq_block VAR_1 = VAR_0;
      while (VAR_1->matching_seqs)
        {
          matching_seq VAR_2 = VAR_1->matching_seqs;
          VAR_1->matching_seqs = VAR_2->next_matching_seq;
          FUNC_0 (VAR_2);
        }
      VAR_0 = VAR_1->next_seq_block;
      FUNC_0 (VAR_1);
    }
}
