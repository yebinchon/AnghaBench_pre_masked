
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {int dummy; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {int flags; TYPE_4__* section; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_2__* FUNC_6 (struct local_symbol*) ;

void
FUNC_7 (symbolS *VAR_3)
{
  if (FUNC_0 (VAR_3))
    VAR_3 = FUNC_6 ((struct local_symbol *) VAR_3);
  if (FUNC_4 (VAR_3->bsym->section)
      && (VAR_3->bsym->flags & VAR_1) != 0)
    return;
  VAR_3->bsym->flags |= VAR_1;
  if ((VAR_3->bsym->flags & VAR_0) != 0)
    FUNC_3 (FUNC_2("Accessing function `%s' as thread-local object"),
     FUNC_1 (VAR_3));
  else if (! FUNC_5 (VAR_3->bsym->section)
    && (VAR_3->bsym->section->flags & VAR_2) == 0)
    FUNC_3 (FUNC_2("Accessing `%s' as thread-local object"),
     FUNC_1 (VAR_3));
}
