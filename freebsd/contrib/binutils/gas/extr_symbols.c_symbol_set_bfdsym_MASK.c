
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* bsym; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int dummy; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ asymbol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct local_symbol*) ;

void
FUNC_2 (symbolS *VAR_1, asymbol *VAR_2)
{
  if (FUNC_0 (VAR_1))
    VAR_1 = FUNC_1 ((struct local_symbol *) VAR_1);







  if ((VAR_1->bsym->flags & VAR_0) == 0)
    VAR_1->bsym = VAR_2;

}
