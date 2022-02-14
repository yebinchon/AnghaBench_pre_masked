
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct df_ru_bb_info {int gen; } ;
struct df_ref {scalar_t__ id; int insn; int reg; } ;
struct df_link {struct df_ref* ref; struct df_link* next; } ;
struct df {int dummy; } ;
typedef int rtx ;
typedef TYPE_2__* ddg_ptr ;
typedef TYPE_3__* ddg_node_ptr ;
struct TYPE_12__ {int cuid; } ;
struct TYPE_11__ {int num_nodes; TYPE_1__* nodes; int bb; } ;
struct TYPE_10__ {int insn; } ;


 struct df_link* FUNC_0 (struct df_ref*) ;
 int FUNC_1 (struct df_ref*) ;
 int FUNC_2 (struct df_ref*) ;
 struct df_ru_bb_info* FUNC_3 (struct df*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int ,int ,int) ;
 struct df_ref* FUNC_6 (struct df*,int ,int) ;
 scalar_t__ FUNC_7 (struct df*,int ,int ) ;
 int FUNC_8 (int) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10 (ddg_ptr VAR_3, struct df *VAR_4, struct df_ref *VAR_5)
{
  int VAR_6 = FUNC_2 (VAR_5);
  struct df_ru_bb_info *VAR_7 = FUNC_3 (VAR_4, VAR_3->bb);
  struct df_link *VAR_8;
  int VAR_9 = 0;
  rtx VAR_10 = FUNC_1 (VAR_5);
  ddg_node_ptr VAR_11 = FUNC_9 (VAR_3, VAR_10);



  for (VAR_8 = FUNC_0 (VAR_5); VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      if (FUNC_4 (VAR_7->gen, VAR_8->ref->id))
 {
   rtx VAR_12 = FUNC_1 (VAR_8->ref);
   ddg_node_ptr VAR_13 = FUNC_9 (VAR_3, VAR_12);

   FUNC_8 (VAR_11 && VAR_13);


   VAR_9 = 1;
   FUNC_5 (VAR_3, VAR_11, VAR_13, VAR_2,
      VAR_1, 1);
 }
    }







  if (! VAR_9)
    {
      struct df_ref *VAR_14 = FUNC_6 (VAR_4, VAR_3->bb, VAR_6);
      int VAR_15;
      ddg_node_ptr VAR_16;

      if (!VAR_14 || VAR_5->id == VAR_14->id)
 return;


      for (VAR_15 = VAR_11->cuid + 1; VAR_15 < VAR_3->num_nodes; VAR_15++)
  if (FUNC_7 (VAR_4, VAR_3->nodes[VAR_15].insn, VAR_5->reg))
    return;

      VAR_16 = FUNC_9 (VAR_3, VAR_14->insn);
      FUNC_5 (VAR_3, VAR_11, VAR_16, VAR_0, VAR_1, 1);
    }
}
