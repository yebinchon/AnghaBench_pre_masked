
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {scalar_t__ lsy_section; } ;
struct TYPE_5__ {int flags; scalar_t__ section; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;

int
FUNC_2 (symbolS *VAR_4, int VAR_5)
{
  if (FUNC_0 (VAR_4))
    return ((struct local_symbol *) VAR_4)->lsy_section == VAR_3;

  return ((VAR_5
    && ((VAR_4->bsym->flags & VAR_1) != 0
        || (VAR_2
     && (VAR_4->bsym->flags & VAR_0) != 0)))
   || VAR_4->bsym->section == VAR_3
   || FUNC_1 (VAR_4->bsym->section));
}
