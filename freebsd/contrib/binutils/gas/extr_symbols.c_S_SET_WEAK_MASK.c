
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {int dummy; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct local_symbol*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3 (symbolS *VAR_3)
{
  if (FUNC_0 (VAR_3))
    VAR_3 = FUNC_1 ((struct local_symbol *) VAR_3);



  VAR_3->bsym->flags |= VAR_2;
  VAR_3->bsym->flags &= ~(VAR_0 | VAR_1);
}
