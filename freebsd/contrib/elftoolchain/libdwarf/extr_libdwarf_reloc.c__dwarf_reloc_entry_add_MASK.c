
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
struct TYPE_12__ {unsigned char dre_type; unsigned char dre_length; char const* dre_secname; void* dre_addend; void* dre_symndx; void* dre_offset; } ;
struct TYPE_11__ {scalar_t__ drs_addend; int drs_drecnt; int drs_dre; } ;
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
 int FUNC_4 (int *,int *,void**,void*,unsigned char,int *) ;
 int FUNC_5 (int *,int *,void**,void*,unsigned char,int *) ;

int
FUNC_6(Dwarf_P_Debug VAR_4, Dwarf_Rel_Section VAR_5,
    Dwarf_P_Section VAR_6, unsigned char VAR_7, unsigned char VAR_8,
    Dwarf_Unsigned VAR_9, Dwarf_Unsigned VAR_10, Dwarf_Unsigned VAR_11,
    const char *VAR_12, Dwarf_Error *VAR_13)
{
 Dwarf_Rel_Entry VAR_14;
 Dwarf_Unsigned VAR_15;
 int VAR_16;

 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(VAR_9 <= VAR_6->ds_size);
 VAR_15 = VAR_9;
 if ((VAR_4->dbgp_flags & VAR_0) ||
     VAR_5->drs_addend == 0)
  VAR_16 = VAR_4->write_alloc(&VAR_6->ds_data, &VAR_6->ds_cap, &VAR_9,
      VAR_11, VAR_8, VAR_13);
 else
  VAR_16 = VAR_4->write_alloc(&VAR_6->ds_data, &VAR_6->ds_cap, &VAR_9,
      0, VAR_8, VAR_13);
 if (VAR_16 != VAR_2)
  return (VAR_16);
 if (VAR_9 > VAR_6->ds_size)
  VAR_6->ds_size = VAR_9;

 if ((VAR_14 = FUNC_3(1, sizeof(struct _Dwarf_Rel_Entry))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_13, VAR_1);
  return (VAR_1);
 }
 FUNC_1(&VAR_5->drs_dre, VAR_14, VAR_3);
 VAR_14->dre_type = VAR_7;
 VAR_14->dre_length = VAR_8;
 VAR_14->dre_offset = VAR_15;
 VAR_14->dre_symndx = VAR_10;
 VAR_14->dre_addend = VAR_11;
 VAR_14->dre_secname = VAR_12;
 VAR_5->drs_drecnt++;

 return (VAR_2);
}
