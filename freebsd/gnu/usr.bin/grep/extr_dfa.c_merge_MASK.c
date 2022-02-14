
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nelem; TYPE_1__* elems; } ;
typedef TYPE_2__ position_set ;
struct TYPE_6__ {scalar_t__ index; int constraint; } ;



__attribute__((used)) static void
FUNC_0 (position_set const *VAR_0, position_set const *VAR_1, position_set *VAR_2)
{
  int VAR_3 = 0, VAR_4 = 0;

  VAR_2->nelem = 0;
  while (VAR_3 < VAR_0->nelem && VAR_4 < VAR_1->nelem)
    if (VAR_0->elems[VAR_3].index > VAR_1->elems[VAR_4].index)
      VAR_2->elems[VAR_2->nelem++] = VAR_0->elems[VAR_3++];
    else if (VAR_0->elems[VAR_3].index < VAR_1->elems[VAR_4].index)
      VAR_2->elems[VAR_2->nelem++] = VAR_1->elems[VAR_4++];
    else
      {
 VAR_2->elems[VAR_2->nelem] = VAR_0->elems[VAR_3++];
 VAR_2->elems[VAR_2->nelem++].constraint |= VAR_1->elems[VAR_4++].constraint;
      }
  while (VAR_3 < VAR_0->nelem)
    VAR_2->elems[VAR_2->nelem++] = VAR_0->elems[VAR_3++];
  while (VAR_4 < VAR_1->nelem)
    VAR_2->elems[VAR_2->nelem++] = VAR_1->elems[VAR_4++];
}
