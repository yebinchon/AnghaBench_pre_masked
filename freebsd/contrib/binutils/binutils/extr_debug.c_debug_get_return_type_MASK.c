
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* debug_type ;
struct TYPE_12__ {TYPE_2__* kmethod; TYPE_1__* kfunction; } ;
struct TYPE_13__ {int kind; TYPE_3__ u; } ;
struct TYPE_11__ {TYPE_4__* return_type; } ;
struct TYPE_10__ {TYPE_4__* return_type; } ;




 TYPE_4__* VAR_0 ;
 TYPE_4__* FUNC_0 (void*,TYPE_4__*,int *) ;

debug_type
FUNC_1 (void *VAR_1, debug_type VAR_2)
{
  if (VAR_2 == ((void*)0))
    return VAR_0;

  VAR_2 = FUNC_0 (VAR_1, VAR_2, ((void*)0));
  if (VAR_2 == ((void*)0))
    return VAR_0;

  switch (VAR_2->kind)
    {
    default:
      return VAR_0;
    case 129:
      return VAR_2->u.kfunction->return_type;
    case 128:
      return VAR_2->u.kmethod->return_type;
    }

}
