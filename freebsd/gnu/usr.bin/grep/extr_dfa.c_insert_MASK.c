
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nelem; TYPE_2__* elems; } ;
typedef TYPE_1__ position_set ;
struct TYPE_6__ {scalar_t__ index; int constraint; } ;
typedef TYPE_2__ position ;



__attribute__((used)) static void
FUNC_0 (position VAR_0, position_set *VAR_1)
{
  int VAR_2;
  position VAR_3, VAR_4;

  for (VAR_2 = 0; VAR_2 < VAR_1->nelem && VAR_0.index < VAR_1->elems[VAR_2].index; ++VAR_2)
    continue;
  if (VAR_2 < VAR_1->nelem && VAR_0.index == VAR_1->elems[VAR_2].index)
    VAR_1->elems[VAR_2].constraint |= VAR_0.constraint;
  else
    {
      VAR_3 = VAR_0;
      ++VAR_1->nelem;
      while (VAR_2 < VAR_1->nelem)
 {
   VAR_4 = VAR_1->elems[VAR_2];
   VAR_1->elems[VAR_2++] = VAR_3;
   VAR_3 = VAR_4;
 }
    }
}
