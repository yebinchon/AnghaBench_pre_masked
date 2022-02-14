
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbgp_drslist; void* dbgp_drspos; int dbgp_seclist; void* dbgp_secpos; } ;
typedef TYPE_1__* Dwarf_P_Debug ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(Dwarf_P_Debug VAR_0)
{

 FUNC_1(VAR_0 != ((void*)0));

 VAR_0->dbgp_secpos = FUNC_0(&VAR_0->dbgp_seclist);
 VAR_0->dbgp_drspos = FUNC_0(&VAR_0->dbgp_drslist);
}
