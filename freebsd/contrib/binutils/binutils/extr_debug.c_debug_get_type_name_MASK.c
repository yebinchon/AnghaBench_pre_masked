
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_5__* debug_type ;
struct TYPE_10__ {TYPE_2__* knamed; TYPE_3__* kindirect; } ;
struct TYPE_11__ {scalar_t__ kind; TYPE_4__ u; } ;
struct TYPE_9__ {char const* tag; TYPE_5__** slot; } ;
struct TYPE_8__ {TYPE_1__* name; } ;
struct TYPE_7__ {char const* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

const char *
FUNC_0 (void *VAR_3, debug_type VAR_4)
{
  if (VAR_4->kind == VAR_0)
    {
      if (*VAR_4->u.kindirect->slot != ((void*)0))
 return FUNC_0 (VAR_3, *VAR_4->u.kindirect->slot);
      return VAR_4->u.kindirect->tag;
    }
  if (VAR_4->kind == VAR_1
      || VAR_4->kind == VAR_2)
    return VAR_4->u.knamed->name->name;
  return ((void*)0);
}
