
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__* debug_type ;
typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_1__* kmethod; TYPE_3__* kfunction; } ;
struct TYPE_12__ {int kind; TYPE_2__ u; } ;
struct TYPE_11__ {TYPE_4__* const* arg_types; int varargs; } ;
struct TYPE_9__ {TYPE_4__* const* arg_types; int varargs; } ;




 TYPE_4__* FUNC_0 (void*,TYPE_4__*,int *) ;

const debug_type *
FUNC_1 (void *VAR_0, debug_type VAR_1,
      bfd_boolean *VAR_2)
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
    case 129:
      *VAR_2 = VAR_1->u.kfunction->varargs;
      return VAR_1->u.kfunction->arg_types;
    case 128:
      *VAR_2 = VAR_1->u.kmethod->varargs;
      return VAR_1->u.kmethod->arg_types;
    }

}
