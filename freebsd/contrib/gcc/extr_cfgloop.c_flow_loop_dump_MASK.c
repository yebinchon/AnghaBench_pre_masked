
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct loop {int num; int depth; int level; unsigned int num_nodes; TYPE_3__* outer; TYPE_2__* latch; TYPE_1__* header; } ;
typedef TYPE_4__* basic_block ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int num; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {int index; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_4__**) ;
 TYPE_4__** FUNC_2 (struct loop const*) ;

void
FUNC_3 (const struct loop *VAR_0, FILE *VAR_1,
  void (*VAR_2) (const struct loop *, FILE *, int),
  int VAR_3)
{
  basic_block *VAR_4;
  unsigned VAR_5;

  if (! VAR_0 || ! VAR_0->header)
    return;

  FUNC_0 (VAR_1, ";;\n;; Loop %d\n", VAR_0->num);

  FUNC_0 (VAR_1, ";;  header %d, latch %d\n",
    VAR_0->header->index, VAR_0->latch->index);
  FUNC_0 (VAR_1, ";;  depth %d, level %d, outer %ld\n",
    VAR_0->depth, VAR_0->level,
    (long) (VAR_0->outer ? VAR_0->outer->num : -1));

  FUNC_0 (VAR_1, ";;  nodes:");
  VAR_4 = FUNC_2 (VAR_0);
  for (VAR_5 = 0; VAR_5 < VAR_0->num_nodes; VAR_5++)
    FUNC_0 (VAR_1, " %d", VAR_4[VAR_5]->index);
  FUNC_1 (VAR_4);
  FUNC_0 (VAR_1, "\n");

  if (VAR_2)
    VAR_2 (VAR_0, VAR_1, VAR_3);
}
