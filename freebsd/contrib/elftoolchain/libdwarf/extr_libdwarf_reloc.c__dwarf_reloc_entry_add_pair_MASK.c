
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct _Dwarf_Rel_Entry {int dummy; } ;
struct TYPE_14__ {int dbgp_flags; int (* write_alloc ) (int *,int *,void**,void*,unsigned char,int *) ;} ;
struct TYPE_13__ {void* ds_size; int ds_cap; int ds_data; } ;
struct TYPE_12__ {unsigned char dre_length; int * dre_secname; scalar_t__ dre_addend; void* dre_symndx; void* dre_offset; int dre_type; } ;
struct TYPE_11__ {int drs_drecnt; int drs_dre; } ;
typedef void* Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_Rel_Section ;
typedef TYPE_2__* Dwarf_Rel_Entry ;
typedef TYPE_3__* Dwarf_P_Section ;
typedef TYPE_4__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,void**,void*,unsigned char,int *) ;

int
FUNC_5(Dwarf_P_Debug VAR_6, Dwarf_Rel_Section VAR_7,
    Dwarf_P_Section VAR_8, unsigned char VAR_9, Dwarf_Unsigned VAR_10,
    Dwarf_Unsigned VAR_11, Dwarf_Unsigned VAR_12, Dwarf_Unsigned VAR_13,
    Dwarf_Unsigned VAR_14, Dwarf_Error *VAR_15)
{
 Dwarf_Rel_Entry VAR_16;
 Dwarf_Unsigned VAR_17;
 int VAR_18;

 FUNC_2(VAR_7 != ((void*)0));
 FUNC_2(VAR_10 <= VAR_8->ds_size);
 FUNC_2(VAR_6->dbgp_flags & VAR_0);
 VAR_17 = VAR_10;


 VAR_18 = VAR_6->write_alloc(&VAR_8->ds_data, &VAR_8->ds_cap, &VAR_10,
     VAR_14 - VAR_13, VAR_9, VAR_15);
 if (VAR_18 != VAR_2)
  return (VAR_18);
 if (VAR_10 > VAR_8->ds_size)
  VAR_8->ds_size = VAR_10;

 if ((VAR_16 = FUNC_3(2, sizeof(struct _Dwarf_Rel_Entry))) == ((void*)0)) {
  FUNC_0(VAR_6, VAR_15, VAR_1);
  return (VAR_1);
 }
 FUNC_1(&VAR_7->drs_dre, &VAR_16[0], VAR_3);
 FUNC_1(&VAR_7->drs_dre, &VAR_16[1], VAR_3);
 VAR_16[0].dre_type = VAR_4;
 VAR_16[0].dre_length = VAR_9;
 VAR_16[0].dre_offset = VAR_17;
 VAR_16[0].dre_symndx = VAR_11;
 VAR_16[0].dre_addend = 0;
 VAR_16[0].dre_secname = ((void*)0);
 VAR_16[1].dre_type = VAR_5;
 VAR_16[1].dre_length = VAR_9;
 VAR_16[1].dre_offset = VAR_17;
 VAR_16[1].dre_symndx = VAR_12;
 VAR_16[1].dre_addend = 0;
 VAR_16[1].dre_secname = ((void*)0);
 VAR_7->drs_drecnt += 2;

 return (VAR_2);
}
