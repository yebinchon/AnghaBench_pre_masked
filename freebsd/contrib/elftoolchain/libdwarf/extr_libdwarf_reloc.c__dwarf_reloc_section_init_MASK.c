
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _Dwarf_Rel_Section {int dummy; } ;
typedef int name ;
struct TYPE_14__ {int dbgp_flags; int dbgp_drscnt; int dbgp_drslist; } ;
struct TYPE_13__ {int ds_name; } ;
struct TYPE_12__ {int drs_addend; int drs_dre; int drs_ds; TYPE_2__* drs_ref; } ;
typedef TYPE_1__* Dwarf_Rel_Section ;
typedef TYPE_2__* Dwarf_P_Section ;
typedef TYPE_3__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,char*,int,int *) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int,int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,char*,int ) ;

int
FUNC_8(Dwarf_P_Debug VAR_5, Dwarf_Rel_Section *VAR_6,
    Dwarf_P_Section VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_Rel_Section VAR_9;
 char VAR_10[128];
 int VAR_11;

 FUNC_4(VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && VAR_7 != ((void*)0));

 if ((VAR_9 = FUNC_5(1, sizeof(struct _Dwarf_Rel_Section))) == ((void*)0)) {
  FUNC_0(VAR_5, VAR_8, VAR_2);
  return (VAR_2);
 }

 VAR_9->drs_ref = VAR_7;





 if (VAR_5->dbgp_flags & VAR_0)
  VAR_9->drs_addend = 1;
 else
  VAR_9->drs_addend = 0;

 if (VAR_5->dbgp_flags & VAR_1)
  VAR_11 = 1;
 else
  VAR_11 = 0;

 FUNC_7(VAR_10, sizeof(VAR_10), "%s%s",
     VAR_9->drs_addend ? ".rela" : ".rel", VAR_7->ds_name);
 if (FUNC_3(VAR_5, &VAR_9->drs_ds, VAR_10, VAR_11, VAR_8) !=
     VAR_3) {
  FUNC_6(VAR_9);
  FUNC_0(VAR_5, VAR_8, VAR_2);
  return (VAR_2);
 }

 FUNC_1(&VAR_9->drs_dre);
 FUNC_2(&VAR_5->dbgp_drslist, VAR_9, VAR_4);
 VAR_5->dbgp_drscnt++;
 *VAR_6 = VAR_9;

 return (VAR_3);
}
