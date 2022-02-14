
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bsym; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int dummy; } ;
typedef int asymbol ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct local_symbol*) ;

asymbol *
FUNC_2 (symbolS *VAR_0)
{
  if (FUNC_0 (VAR_0))
    VAR_0 = FUNC_1 ((struct local_symbol *) VAR_0);
  return VAR_0->bsym;
}
