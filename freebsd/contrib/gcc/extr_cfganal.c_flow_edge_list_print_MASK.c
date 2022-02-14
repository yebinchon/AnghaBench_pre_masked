
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* edge ;
struct TYPE_7__ {TYPE_1__* dest; TYPE_2__* src; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int index; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int *) ;

void
FUNC_2 (const char *VAR_0, const edge *VAR_1, int VAR_2, FILE *VAR_3)
{
  int VAR_4;

  if (! VAR_1)
    return;

  FUNC_0 (VAR_3, "%s { ", VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    FUNC_0 (VAR_3, "%d->%d ", VAR_1[VAR_4]->src->index,
      VAR_1[VAR_4]->dest->index);

  FUNC_1 ("}\n", VAR_3);
}
