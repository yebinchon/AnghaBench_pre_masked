
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_4__* assert_locus_t ;
struct TYPE_11__ {TYPE_3__* dest; TYPE_2__* src; } ;
struct TYPE_10__ {struct TYPE_10__* next; int val; scalar_t__ comp_code; TYPE_5__* e; TYPE_1__* bb; int si; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {int index; } ;
typedef int FILE ;


 size_t FUNC_0 (int ) ;
 TYPE_4__** VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,int ) ;
 char** VAR_1 ;

void
FUNC_5 (FILE *VAR_2, tree VAR_3)
{
  assert_locus_t VAR_4;

  FUNC_3 (VAR_2, "Assertions to be inserted for ");
  FUNC_4 (VAR_2, VAR_3, 0);
  FUNC_3 (VAR_2, "\n");

  VAR_4 = VAR_0[FUNC_0 (VAR_3)];
  while (VAR_4)
    {
      FUNC_3 (VAR_2, "\t");
      FUNC_4 (VAR_2, FUNC_1 (VAR_4->si), 0);
      FUNC_3 (VAR_2, "\n\tBB #%d", VAR_4->bb->index);
      if (VAR_4->e)
 {
   FUNC_3 (VAR_2, "\n\tEDGE %d->%d", VAR_4->e->src->index,
            VAR_4->e->dest->index);
   FUNC_2 (VAR_2, VAR_4->e, 0);
 }
      FUNC_3 (VAR_2, "\n\tPREDICATE: ");
      FUNC_4 (VAR_2, VAR_3, 0);
      FUNC_3 (VAR_2, " %s ", VAR_1[(int)VAR_4->comp_code]);
      FUNC_4 (VAR_2, VAR_4->val, 0);
      FUNC_3 (VAR_2, "\n\n");
      VAR_4 = VAR_4->next;
    }

  FUNC_3 (VAR_2, "\n");
}
