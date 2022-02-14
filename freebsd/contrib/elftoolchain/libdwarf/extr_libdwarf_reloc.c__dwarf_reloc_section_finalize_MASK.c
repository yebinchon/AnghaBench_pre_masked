
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int dbgp_flags; } ;
struct TYPE_13__ {scalar_t__ ds_size; int ds_cap; int ds_ndx; int ds_symndx; int ds_name; int * ds_data; } ;
struct TYPE_12__ {int drs_drecnt; TYPE_1__* drs_ref; scalar_t__ drs_addend; TYPE_3__* drs_ds; } ;
struct TYPE_11__ {int ds_ndx; } ;
typedef int Elf64_Rela ;
typedef int Elf64_Rel ;
typedef int Elf32_Rela ;
typedef int Elf32_Rel ;
typedef int Dwarf_Unsigned ;
typedef TYPE_2__* Dwarf_Rel_Section ;
typedef TYPE_3__* Dwarf_P_Section ;
typedef TYPE_4__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,int,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__**) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,size_t) ;

int
FUNC_5(Dwarf_P_Debug VAR_7, Dwarf_Rel_Section VAR_8,
    Dwarf_Error *VAR_9)
{
 Dwarf_P_Section VAR_10;
 Dwarf_Unsigned VAR_11;
 int VAR_12, VAR_13;

 FUNC_3(VAR_7 != ((void*)0) && VAR_8 != ((void*)0) && VAR_8->drs_ds != ((void*)0) &&
     VAR_8->drs_ref != ((void*)0));

 VAR_10 = VAR_8->drs_ds;




 if (VAR_7->dbgp_flags & VAR_0)
  VAR_11 = VAR_8->drs_addend ? sizeof(Elf64_Rela) : sizeof(Elf64_Rel);
 else
  VAR_11 = VAR_8->drs_addend ? sizeof(Elf32_Rela) : sizeof(Elf32_Rel);
 FUNC_3(VAR_10->ds_size == 0);
 VAR_13 = VAR_8->drs_drecnt * VAR_11;




 if (VAR_13 == 0) {
  FUNC_2(VAR_7, &VAR_8);
  return (VAR_4);
 }





 if ((VAR_7->dbgp_flags & VAR_1) == 0) {
  VAR_10->ds_cap = VAR_13;
  if ((VAR_10->ds_data = FUNC_4(VAR_10->ds_data, (size_t) VAR_10->ds_cap)) ==
      ((void*)0)) {
   FUNC_0(VAR_7, VAR_9, VAR_3);
   return (VAR_3);
  }
 }







 VAR_12 = FUNC_1(VAR_7, VAR_10->ds_name, VAR_13,
     VAR_8->drs_addend ? VAR_6 : VAR_5, 0, 0, VAR_8->drs_ref->ds_ndx,
     &VAR_10->ds_symndx, ((void*)0));
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, VAR_9, VAR_2);
  return (VAR_2);
 }
 VAR_10->ds_ndx = VAR_12;

 return (VAR_4);
}
