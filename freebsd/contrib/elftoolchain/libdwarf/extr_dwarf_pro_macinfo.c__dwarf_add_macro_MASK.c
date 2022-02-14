
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dmd_type; int * dmd_macro; int dmd_fileindex; int dmd_lineno; scalar_t__ dmd_offset; } ;
struct TYPE_7__ {size_t dbgp_mdcnt; TYPE_2__* dbgp_mdlist; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__ Dwarf_Macro_Details ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (int *,int,char*,char*,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(Dwarf_P_Debug VAR_3, int VAR_4, Dwarf_Unsigned VAR_5,
    Dwarf_Signed VAR_6, char *VAR_7, char *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Macro_Details *VAR_10;
 int VAR_11;

 VAR_3->dbgp_mdlist = FUNC_2(VAR_3->dbgp_mdlist,
     (size_t) VAR_3->dbgp_mdcnt + 1);
 if (VAR_3->dbgp_mdlist == ((void*)0)) {
  FUNC_0(VAR_3, VAR_9, VAR_0);
  return (VAR_1);
 }

 VAR_10 = &VAR_3->dbgp_mdlist[VAR_3->dbgp_mdcnt];
 VAR_3->dbgp_mdcnt++;

 VAR_10->dmd_offset = 0;
 VAR_10->dmd_type = VAR_4;
 VAR_10->dmd_lineno = VAR_5;
 VAR_10->dmd_fileindex = VAR_6;
 VAR_10->dmd_macro = ((void*)0);

 if (VAR_7 == ((void*)0))
  return (VAR_2);
 else if (VAR_8 == ((void*)0)) {
  if ((VAR_10->dmd_macro = FUNC_4(VAR_7)) == ((void*)0)) {
   VAR_3->dbgp_mdcnt--;
   FUNC_0(VAR_3, VAR_9, VAR_0);
   return (VAR_1);
  }
  return (VAR_2);
 } else {
  VAR_11 = FUNC_5(VAR_7) + FUNC_5(VAR_8) + 2;
  if ((VAR_10->dmd_macro = FUNC_1(VAR_11)) == ((void*)0)) {
   VAR_3->dbgp_mdcnt--;
   FUNC_0(VAR_3, VAR_9, VAR_0);
   return (VAR_1);
  }
  FUNC_3(VAR_10->dmd_macro, VAR_11, "%s %s", VAR_7, VAR_8);
  return (VAR_2);
 }
}
