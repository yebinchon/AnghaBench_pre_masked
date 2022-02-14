
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ value; } ;
typedef TYPE_4__ symbol_info ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_12__ {TYPE_3__* native; } ;
struct TYPE_8__ {scalar_t__ n_value; } ;
struct TYPE_9__ {TYPE_1__ syment; } ;
struct TYPE_10__ {TYPE_2__ u; scalar_t__ fix_value; } ;


 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3 (bfd *VAR_0, asymbol *VAR_1, symbol_info *VAR_2)
{
  FUNC_0 (VAR_1, VAR_2);

  if (FUNC_1 (VAR_1)->native != ((void*)0)
      && FUNC_1 (VAR_1)->native->fix_value)
    VAR_2->value = FUNC_1 (VAR_1)->native->u.syment.n_value -
      (unsigned long) FUNC_2 (VAR_0);
}
