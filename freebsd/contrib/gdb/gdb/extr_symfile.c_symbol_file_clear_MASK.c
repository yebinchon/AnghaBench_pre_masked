
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_8 (int VAR_1)
{
  if ((FUNC_4 () || FUNC_5 ())
      && VAR_1
      && !FUNC_7 ("Discard symbol table from `%s'? ",
   VAR_0->name))
    FUNC_2 ("Not confirmed.");
    FUNC_3 ();
    VAR_0 = ((void*)0);
    if (VAR_1)
      FUNC_6 ("No symbol file now.\n");



}
