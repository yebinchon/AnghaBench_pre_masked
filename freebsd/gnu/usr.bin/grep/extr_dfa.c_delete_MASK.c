
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nelem; TYPE_1__* elems; } ;
typedef TYPE_2__ position_set ;
struct TYPE_8__ {scalar_t__ index; } ;
typedef TYPE_3__ position ;
struct TYPE_6__ {scalar_t__ index; } ;



__attribute__((used)) static void
FUNC_0 (position VAR_0, position_set *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->nelem; ++VAR_2)
    if (VAR_0.index == VAR_1->elems[VAR_2].index)
      break;
  if (VAR_2 < VAR_1->nelem)
    for (--VAR_1->nelem; VAR_2 < VAR_1->nelem; ++VAR_2)
      VAR_1->elems[VAR_2] = VAR_1->elems[VAR_2 + 1];
}
