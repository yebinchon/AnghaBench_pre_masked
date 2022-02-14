
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* debug_type ;
typedef scalar_t__ bfd_vma ;
struct TYPE_7__ {TYPE_3__* knamed; TYPE_1__* kindirect; } ;
struct TYPE_9__ {scalar_t__ size; int kind; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_4__* type; } ;
struct TYPE_6__ {TYPE_4__** slot; } ;






bfd_vma
FUNC_0 (void *VAR_0, debug_type VAR_1)
{
  if (VAR_1 == ((void*)0))
    return 0;




  if (VAR_1->size != 0)
    return VAR_1->size;

  switch (VAR_1->kind)
    {
    default:
      return 0;
    case 130:
      if (*VAR_1->u.kindirect->slot != ((void*)0))
 return FUNC_0 (VAR_0, *VAR_1->u.kindirect->slot);
      return 0;
    case 129:
    case 128:
      return FUNC_0 (VAR_0, VAR_1->u.knamed->type);
    }

}
