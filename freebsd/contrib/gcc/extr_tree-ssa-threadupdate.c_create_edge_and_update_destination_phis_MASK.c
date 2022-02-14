
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct redirection_data {TYPE_1__* outgoing_edge; TYPE_4__* dup_block; } ;
typedef TYPE_2__* edge ;
struct TYPE_8__ {int count; } ;
struct TYPE_7__ {int dest; int count; int probability; } ;
struct TYPE_6__ {int dest_idx; int dest; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (struct redirection_data *VAR_2)
{
  edge VAR_3 = FUNC_3 (VAR_2->dup_block, VAR_2->outgoing_edge->dest, VAR_0);
  tree VAR_4;

  VAR_3->probability = VAR_1;
  VAR_3->count = VAR_2->dup_block->count;





  for (VAR_4 = FUNC_4 (VAR_3->dest); VAR_4; VAR_4 = FUNC_1 (VAR_4))
    {
      int VAR_5 = VAR_2->outgoing_edge->dest_idx;
      FUNC_2 (VAR_4, FUNC_0 (VAR_4, VAR_5), VAR_3);
    }
}
