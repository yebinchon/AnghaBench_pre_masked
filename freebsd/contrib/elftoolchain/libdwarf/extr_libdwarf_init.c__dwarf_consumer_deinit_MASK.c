
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dbg_mode; int dbg_section; int dbg_types; int dbg_vars; int dbg_funcs; int dbg_weaks; int dbg_pubtypes; int dbg_globals; } ;
typedef TYPE_1__* Dwarf_Debug ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(Dwarf_Debug VAR_1)
{

 FUNC_7(VAR_1 != ((void*)0) && VAR_1->dbg_mode == VAR_0);

 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1);
 FUNC_4(&VAR_1->dbg_globals);
 FUNC_4(&VAR_1->dbg_pubtypes);
 FUNC_4(&VAR_1->dbg_weaks);
 FUNC_4(&VAR_1->dbg_funcs);
 FUNC_4(&VAR_1->dbg_vars);
 FUNC_4(&VAR_1->dbg_types);

 FUNC_8(VAR_1->dbg_section);
}
