
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dbgp_seccnt; } ;
typedef int Dwarf_Signed ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

Dwarf_Signed
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_Error *VAR_4)
{

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  return (VAR_2);
 }

 if (FUNC_1(VAR_3, VAR_4) != VAR_1)
  return (VAR_2);

 return (VAR_3->dbgp_seccnt);
}
