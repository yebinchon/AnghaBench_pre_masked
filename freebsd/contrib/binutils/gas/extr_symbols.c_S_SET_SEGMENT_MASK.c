
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {scalar_t__ lsy_section; } ;
typedef scalar_t__ segT ;
struct TYPE_6__ {int flags; scalar_t__ section; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (struct local_symbol*) ;
 scalar_t__ VAR_1 ;

void
FUNC_3 (symbolS *VAR_2, segT VAR_3)
{




  if (FUNC_0 (VAR_2))
    {
      if (VAR_3 == VAR_1)
 VAR_2 = FUNC_2 ((struct local_symbol *) VAR_2);
      else
 {
   ((struct local_symbol *) VAR_2)->lsy_section = VAR_3;
   return;
 }
    }

  if (VAR_2->bsym->flags & VAR_0)
    {
      if (VAR_2->bsym->section != VAR_3)
 FUNC_1 ();
    }
  else
    VAR_2->bsym->section = VAR_3;
}
