
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct Dwarf_Relocation_Data_s {int dummy; } ;
struct TYPE_17__ {int dbgp_flags; scalar_t__ dbgp_drscnt; TYPE_4__* dbgp_drspos; } ;
struct TYPE_16__ {scalar_t__ drs_drecnt; TYPE_3__* drs_drd; int dre_symndx; int dre_offset; int dre_length; int dre_type; int drs_dre; TYPE_2__* drs_ref; TYPE_1__* drs_ds; } ;
struct TYPE_15__ {int drd_symbol_index; int drd_offset; int drd_length; int drd_type; } ;
struct TYPE_14__ {int ds_ndx; } ;
struct TYPE_13__ {int ds_ndx; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_3__* Dwarf_Relocation_Data ;
typedef TYPE_4__* Dwarf_Rel_Section ;
typedef TYPE_4__* Dwarf_Rel_Entry ;
typedef TYPE_6__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_6__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_1 (int *) ;
 void* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_5(Dwarf_P_Debug VAR_9, Dwarf_Signed *VAR_10,
    Dwarf_Signed *VAR_11, Dwarf_Unsigned *VAR_12,
    Dwarf_Relocation_Data *VAR_13, Dwarf_Error *VAR_14)
{
 Dwarf_Rel_Section VAR_15;
 Dwarf_Rel_Entry VAR_16;
 int VAR_17;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
     VAR_11 == ((void*)0) || VAR_12 == ((void*)0) ||
     VAR_13 == ((void*)0)) {
  FUNC_0(VAR_9, VAR_14, VAR_1);
  return (VAR_4);
 }

 if ((VAR_9->dbgp_flags & VAR_0) == 0) {
  FUNC_0(VAR_9, VAR_14, VAR_3);
  return (VAR_5);
 }

 if (VAR_9->dbgp_drscnt == 0) {
  FUNC_0(VAR_9, VAR_14, VAR_3);
  return (VAR_5);
 }

 if (VAR_9->dbgp_drspos == ((void*)0)) {
  FUNC_0(VAR_9, VAR_14, VAR_3);
  return (VAR_5);
 }

 VAR_15 = VAR_9->dbgp_drspos;
 FUNC_3(VAR_15->drs_ds != ((void*)0) && VAR_15->drs_ref != ((void*)0));
 FUNC_3(VAR_15->drs_drecnt > 0);

 *VAR_10 = VAR_15->drs_ds->ds_ndx;
 *VAR_11 = VAR_15->drs_ref->ds_ndx;
 *VAR_12 = VAR_15->drs_drecnt;

 if (VAR_15->drs_drd == ((void*)0)) {
  VAR_15->drs_drd = FUNC_4(*VAR_12,
      sizeof(struct Dwarf_Relocation_Data_s));
  if (VAR_15->drs_drd == ((void*)0)) {
   FUNC_0(VAR_9, VAR_14, VAR_2);
   return (VAR_4);
  }
  for (VAR_17 = 0, VAR_16 = FUNC_1(&VAR_15->drs_dre);
      (Dwarf_Unsigned) VAR_17 < *VAR_12 && VAR_16 != ((void*)0);
      VAR_17++, VAR_16 = FUNC_2(VAR_16, VAR_7)) {
   VAR_15->drs_drd[VAR_17].drd_type = VAR_16->dre_type;
   VAR_15->drs_drd[VAR_17].drd_length = VAR_16->dre_length;
   VAR_15->drs_drd[VAR_17].drd_offset = VAR_16->dre_offset;
   VAR_15->drs_drd[VAR_17].drd_symbol_index = VAR_16->dre_symndx;
  }
  FUNC_3((Dwarf_Unsigned) VAR_17 == *VAR_12 && VAR_16 == ((void*)0));
 }

 *VAR_13 = VAR_15->drs_drd;

 VAR_9->dbgp_drspos = FUNC_2(VAR_9->dbgp_drspos, VAR_8);

 return (VAR_6);
}
