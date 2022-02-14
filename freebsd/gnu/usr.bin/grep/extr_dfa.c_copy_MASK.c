
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelem; int * elems; } ;
typedef TYPE_1__ position_set ;



__attribute__((used)) static void
FUNC_0 (position_set const *VAR_0, position_set *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->nelem; ++VAR_2)
    VAR_1->elems[VAR_2] = VAR_0->elems[VAR_2];
  VAR_1->nelem = VAR_0->nelem;
}
