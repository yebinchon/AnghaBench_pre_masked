
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct dom_info {int nodes; int* dfs_parent; int* dfs_order; int* key; int* next_bucket; int* bucket; int* dom; int fake_exit_edge; TYPE_3__** dfs_to_bb; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
struct TYPE_11__ {scalar_t__ index; } ;
typedef TYPE_1__ edge_iterator ;
typedef TYPE_2__* edge ;
typedef TYPE_3__* basic_block ;
struct TYPE_13__ {size_t index; int preds; int succs; } ;
struct TYPE_12__ {TYPE_3__* src; TYPE_3__* dest; } ;
typedef int TBB ;


 TYPE_3__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 TYPE_2__* FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ FUNC_4 (int ) ;
 size_t FUNC_5 (struct dom_info*,int) ;
 size_t VAR_2 ;
 int FUNC_6 (struct dom_info*,int,int) ;

__attribute__((used)) static void
FUNC_7 (struct dom_info *VAR_3, enum cdi_direction VAR_4)
{
  TBB VAR_5, VAR_6, VAR_7, VAR_8;
  basic_block VAR_9;
  edge_iterator VAR_10, VAR_11;

  if (VAR_4)
    VAR_9 = VAR_1;
  else
    VAR_9 = VAR_0;


  VAR_5 = VAR_3->nodes;
  while (VAR_5 > 1)
    {
      basic_block VAR_12 = VAR_3->dfs_to_bb[VAR_5];
      edge VAR_13;

      VAR_8 = VAR_3->dfs_parent[VAR_5];
      VAR_7 = VAR_5;

      VAR_10 = (VAR_4) ? FUNC_4 (VAR_12->succs) : FUNC_4 (VAR_12->preds);

      if (VAR_4)
 {

   if (FUNC_0 (VAR_3->fake_exit_edge, VAR_12->index))
     {
       VAR_11 = VAR_10;
       VAR_11.index = 0;
       goto do_fake_exit_edge;
     }
 }





      while (!FUNC_2 (VAR_10))
 {
   TBB VAR_14;
   basic_block VAR_15;

   VAR_13 = FUNC_1 (VAR_10);
   VAR_15 = (VAR_4) ? VAR_13->dest : VAR_13->src;
   VAR_11 = VAR_10;
   FUNC_3 (&VAR_11);

   if (VAR_15 == VAR_9)
     {
     do_fake_exit_edge:
       VAR_14 = VAR_3->dfs_order[VAR_2];
     }
   else
     VAR_14 = VAR_3->dfs_order[VAR_15->index];



   if (VAR_14 > VAR_5)
     VAR_14 = VAR_3->key[FUNC_5 (VAR_3, VAR_14)];
   if (VAR_14 < VAR_7)
     VAR_7 = VAR_14;

   VAR_10 = VAR_11;
 }

      VAR_3->key[VAR_5] = VAR_7;
      FUNC_6 (VAR_3, VAR_8, VAR_5);
      VAR_3->next_bucket[VAR_5] = VAR_3->bucket[VAR_7];
      VAR_3->bucket[VAR_7] = VAR_5;


      for (VAR_6 = VAR_3->bucket[VAR_8]; VAR_6; VAR_6 = VAR_3->next_bucket[VAR_6])
 {
   VAR_7 = FUNC_5 (VAR_3, VAR_6);
   if (VAR_3->key[VAR_7] < VAR_3->key[VAR_6])
     VAR_3->dom[VAR_6] = VAR_7;
   else
     VAR_3->dom[VAR_6] = VAR_8;
 }

      VAR_3->bucket[VAR_8] = 0;
      VAR_5--;
    }


  VAR_3->dom[1] = 0;
  for (VAR_5 = 2; VAR_5 <= VAR_3->nodes; VAR_5++)
    if (VAR_3->dom[VAR_5] != VAR_3->key[VAR_5])
      VAR_3->dom[VAR_5] = VAR_3->dom[VAR_3->dom[VAR_5]];
}
