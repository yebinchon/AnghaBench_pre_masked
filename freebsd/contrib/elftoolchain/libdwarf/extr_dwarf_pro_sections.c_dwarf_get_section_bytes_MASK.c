
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ds_data; int ds_size; int ds_ndx; } ;
struct TYPE_6__ {TYPE_3__* dbgp_secpos; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int * Dwarf_Ptr ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;

Dwarf_Ptr
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_Signed VAR_4,
    Dwarf_Signed *VAR_5, Dwarf_Unsigned *VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_Ptr VAR_8;

 (void) VAR_4;

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_7, VAR_0);
  return (((void*)0));
 }

 if (VAR_3->dbgp_secpos == ((void*)0)) {
  FUNC_0(VAR_3, VAR_7, VAR_1);
  return (((void*)0));
 }

 *VAR_5 = VAR_3->dbgp_secpos->ds_ndx;
 *VAR_6 = VAR_3->dbgp_secpos->ds_size;
 VAR_8 = VAR_3->dbgp_secpos->ds_data;

 VAR_3->dbgp_secpos = FUNC_1(VAR_3->dbgp_secpos, VAR_2);

 return (VAR_8);
}
