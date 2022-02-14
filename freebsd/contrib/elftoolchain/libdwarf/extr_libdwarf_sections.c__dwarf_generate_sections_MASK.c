
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int dbgp_drslist; void* dbgp_drspos; int dbgp_seclist; void* dbgp_secpos; int dbgp_vars; int dbgp_types; int dbgp_funcs; int dbgp_weaks; int dbgp_pubs; } ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,char*,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int
FUNC_10(Dwarf_P_Debug VAR_1, Dwarf_Error *VAR_2)
{
 int VAR_3;


 if ((VAR_3 = FUNC_4(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_5(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_3(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_6(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_7(VAR_1, ".debug_pubnames", VAR_1->dbgp_pubs,
     VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_7(VAR_1, ".debug_weaknames", VAR_1->dbgp_weaks,
     VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_7(VAR_1, ".debug_funcnames", VAR_1->dbgp_funcs,
     VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_7(VAR_1, ".debug_typenames", VAR_1->dbgp_types,
     VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_7(VAR_1, ".debug_varnames", VAR_1->dbgp_vars,
     VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_9(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 if ((VAR_3 = FUNC_8(VAR_1, VAR_2)) != VAR_0)
  return (VAR_3);


 VAR_1->dbgp_secpos = FUNC_0(&VAR_1->dbgp_seclist);
 VAR_1->dbgp_drspos = FUNC_0(&VAR_1->dbgp_drslist);

 return (VAR_0);
}
