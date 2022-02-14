
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {char const* lsy_name; } ;
struct TYPE_5__ {char const* name; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (symbolS *VAR_0, const char *VAR_1)
{
  if (FUNC_0 (VAR_0))
    {
      ((struct local_symbol *) VAR_0)->lsy_name = VAR_1;
      return;
    }
  VAR_0->bsym->name = VAR_1;
}
