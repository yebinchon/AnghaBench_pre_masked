
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct df_ref {int id; int reg; int insn; } ;
struct df_rd_bb_info {int gen; } ;
struct df {int dummy; } ;
typedef TYPE_2__* ddg_ptr ;
typedef TYPE_3__* ddg_node_ptr ;
struct TYPE_12__ {int cuid; } ;
struct TYPE_11__ {int num_nodes; TYPE_1__* nodes; int bb; } ;
struct TYPE_10__ {int insn; } ;


 int VAR_0 ;
 struct df_rd_bb_info* FUNC_0 (struct df*,int ) ;
 int FUNC_1 (struct df_ref*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int ,int ,int) ;
 struct df_ref* FUNC_4 (struct df*,int ,int) ;
 scalar_t__ FUNC_5 (struct df*,int ,int ) ;
 int FUNC_6 (int) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_8 (ddg_ptr VAR_2, struct df *VAR_3, struct df_ref *VAR_4)
{
  int VAR_5;
  int VAR_6 = FUNC_1 (VAR_4);
  struct df_ref *VAR_7 = FUNC_4 (VAR_3, VAR_2->bb, VAR_6);
  ddg_node_ptr VAR_8;
  ddg_node_ptr VAR_9;
  struct df_rd_bb_info *VAR_10;

  VAR_10 = FUNC_0 (VAR_3, VAR_2->bb);

  if (!VAR_7)
    return;

  VAR_8 = FUNC_7 (VAR_2, VAR_4->insn);
  VAR_9 = FUNC_7 (VAR_2, VAR_7->insn);

  FUNC_6 (VAR_8 && VAR_9);


  for (VAR_5 = VAR_8->cuid + 1; VAR_5 < VAR_2->num_nodes; VAR_5++)
     if (FUNC_5 (VAR_3, VAR_2->nodes[VAR_5].insn, VAR_4->reg))
       return;



  if (! FUNC_2 (VAR_10->gen, VAR_7->id))
    FUNC_3 (VAR_2, VAR_8, VAR_9, VAR_0, VAR_1, 1);
}
