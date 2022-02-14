
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff {int * tbl; TYPE_3__* eqn; TYPE_2__* last; } ;
struct TYPE_6__ {TYPE_1__* node; } ;
struct TYPE_5__ {size_t tok; int col; int line; } ;
struct TYPE_4__ {int pos; int line; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,...) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(struct roff *VAR_2)
{
 if (VAR_2->last != ((void*)0))
  FUNC_1(VAR_0, VAR_2->last->line,
      VAR_2->last->col, "%s", VAR_1[VAR_2->last->tok]);

 if (VAR_2->eqn != ((void*)0)) {
  FUNC_1(VAR_0,
      VAR_2->eqn->node->line, VAR_2->eqn->node->pos, "EQ");
  FUNC_0(VAR_2->eqn);
  VAR_2->eqn = ((void*)0);
 }

 if (VAR_2->tbl != ((void*)0)) {
  FUNC_2(VAR_2->tbl, 1);
  VAR_2->tbl = ((void*)0);
 }
}
