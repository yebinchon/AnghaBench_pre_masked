
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int dmd_type; int dmd_fileindex; int dmd_lineno; int * dmd_macro; int dmd_offset; } ;
struct TYPE_12__ {scalar_t__ dbgp_mdcnt; TYPE_3__* dbgp_mdlist; } ;
struct TYPE_11__ {int ds_size; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef TYPE_3__ Dwarf_Macro_Details ;
typedef int Dwarf_Error ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__**,char*,int ,int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(Dwarf_P_Debug VAR_2, Dwarf_Error *VAR_3)
{
 Dwarf_P_Section VAR_4;
 Dwarf_Macro_Details *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->dbgp_mdcnt == 0)
  return (VAR_0);


 FUNC_0(FUNC_6(VAR_2, &VAR_4, ".debug_macinfo", 0, VAR_3));


 for (VAR_6 = 0; (Dwarf_Unsigned) VAR_6 < VAR_2->dbgp_mdcnt; VAR_6++) {
  VAR_5 = &VAR_2->dbgp_mdlist[VAR_6];
  VAR_5->dmd_offset = VAR_4->ds_size;
  FUNC_0(FUNC_3(VAR_5->dmd_type, 1));
  switch (VAR_5->dmd_type) {
  case 132:
  case 129:
  case 128:
   FUNC_0(FUNC_2(VAR_5->dmd_lineno));
   FUNC_7(VAR_5->dmd_macro != ((void*)0));
   FUNC_0(FUNC_1(VAR_5->dmd_macro));
   break;
  case 130:
   FUNC_0(FUNC_2(VAR_5->dmd_lineno));
   FUNC_0(FUNC_2(VAR_5->dmd_fileindex));
   break;
  case 131:
   break;
  default:
   FUNC_7(0);
   break;
  }
 }
 FUNC_0(FUNC_3(0, 1));


 FUNC_0(FUNC_4(VAR_2, VAR_4, VAR_1, 0, 0, 0, VAR_3));

 return (VAR_0);

gen_fail:
 FUNC_5(VAR_2, &VAR_4);

 return (VAR_7);
}
