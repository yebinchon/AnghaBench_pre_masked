
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int dbg_pointer_size; int (* write ) (int ,scalar_t__*,int ,int) ;} ;
struct TYPE_14__ {scalar_t__ fde_esymndx; int fde_length; scalar_t__ fde_offset; int fde_instlen; int fde_inst; int fde_adrange; int fde_eoff; int fde_initloc; int fde_symndx; int fde_cieoff; TYPE_1__* fde_cie; } ;
struct TYPE_13__ {int ds_data; scalar_t__ ds_size; } ;
struct TYPE_12__ {int cie_offset; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int * Dwarf_Rel_Section ;
typedef TYPE_2__* Dwarf_P_Section ;
typedef TYPE_3__* Dwarf_P_Fde ;
typedef TYPE_4__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*,int *,TYPE_2__*,int ,int,scalar_t__,int ,int ,char*,int *) ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_2__*,int,scalar_t__,int ,scalar_t__,int ,int ,int *) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__*,int ,int) ;

__attribute__((used)) static int
FUNC_8(Dwarf_P_Debug VAR_3, Dwarf_P_Section VAR_4,
    Dwarf_Rel_Section VAR_5, Dwarf_P_Fde VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_Unsigned VAR_8;
 uint64_t VAR_9;
 int VAR_10;

 FUNC_5(VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_5 != ((void*)0));
 FUNC_5(VAR_6 != ((void*)0) && VAR_6->fde_cie != ((void*)0));

 VAR_6->fde_offset = VAR_9 = VAR_4->ds_size;
 VAR_6->fde_length = 0;
 VAR_6->fde_cieoff = VAR_6->fde_cie->cie_offset;


 FUNC_0(FUNC_2(VAR_6->fde_length, 4));


 FUNC_0(FUNC_3(VAR_3, VAR_5, VAR_4, VAR_2, 4,
     VAR_4->ds_size, 0, VAR_6->fde_cieoff, ".debug_frame", VAR_7));


 FUNC_0(FUNC_3(VAR_3, VAR_5, VAR_4, VAR_2,
     VAR_3->dbg_pointer_size, VAR_4->ds_size, VAR_6->fde_symndx,
     VAR_6->fde_initloc, ((void*)0), VAR_7));






 if (VAR_6->fde_esymndx > 0)
  FUNC_0(FUNC_4(VAR_3, VAR_5, VAR_4,
      VAR_3->dbg_pointer_size, VAR_4->ds_size, VAR_6->fde_symndx,
      VAR_6->fde_esymndx, VAR_6->fde_initloc, VAR_6->fde_eoff, VAR_7));
 else
  FUNC_0(FUNC_2(VAR_6->fde_adrange, VAR_3->dbg_pointer_size));


 FUNC_0(FUNC_1(VAR_6->fde_inst, VAR_6->fde_instlen));


 VAR_8 = VAR_4->ds_size - VAR_6->fde_offset - 4;
 VAR_6->fde_length = FUNC_6(VAR_8, VAR_3->dbg_pointer_size);
 while (VAR_8++ < VAR_6->fde_length)
  FUNC_0(FUNC_2(VAR_0, 1));


 VAR_3->write(VAR_4->ds_data, &VAR_9, VAR_6->fde_length, 4);

 return (VAR_1);

gen_fail:
 return (VAR_10);
}
