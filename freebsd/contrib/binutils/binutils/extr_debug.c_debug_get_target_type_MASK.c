
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* debug_type ;
struct TYPE_7__ {TYPE_2__* kvolatile; TYPE_2__* kconst; TYPE_2__* kreference; TYPE_2__* kpointer; } ;
struct TYPE_8__ {int kind; TYPE_1__ u; } ;






 TYPE_2__* FUNC_0 (void*,TYPE_2__*,int *) ;

debug_type
FUNC_1 (void *VAR_0, debug_type VAR_1)
{
  if (VAR_1 == ((void*)0))
    return ((void*)0);

  VAR_1 = FUNC_0 (VAR_0, VAR_1, ((void*)0));
  if (VAR_1 == ((void*)0))
    return ((void*)0);

  switch (VAR_1->kind)
    {
    default:
      return ((void*)0);
    case 130:
      return VAR_1->u.kpointer;
    case 129:
      return VAR_1->u.kreference;
    case 131:
      return VAR_1->u.kconst;
    case 128:
      return VAR_1->u.kvolatile;
    }

}
