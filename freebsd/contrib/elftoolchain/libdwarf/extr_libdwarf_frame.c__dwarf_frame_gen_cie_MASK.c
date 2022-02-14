
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {unsigned int cie_length; int cie_version; unsigned int cie_ra; scalar_t__ cie_offset; scalar_t__ cie_instlen; int * cie_initinst; int cie_daf; int cie_caf; int * cie_augment; } ;
struct TYPE_8__ {int (* write ) (int ,scalar_t__*,unsigned int,int) ;int dbg_pointer_size; } ;
struct TYPE_7__ {int ds_data; scalar_t__ ds_size; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef TYPE_3__* Dwarf_P_Cie ;
typedef int Dwarf_Error ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,scalar_t__*,unsigned int,int) ;

__attribute__((used)) static int
FUNC_9(Dwarf_P_Debug VAR_2, Dwarf_P_Section VAR_3, Dwarf_P_Cie VAR_4,
    Dwarf_Error *VAR_5)
{
 Dwarf_Unsigned VAR_6;
 uint64_t VAR_7;
 int VAR_8;

 FUNC_5(VAR_2 != ((void*)0) && VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

 VAR_4->cie_offset = VAR_7 = VAR_3->ds_size;
 VAR_4->cie_length = 0;
 VAR_4->cie_version = 1;


 FUNC_0(FUNC_4(VAR_4->cie_length, 4));


 FUNC_0(FUNC_4(~0U, 4));


 FUNC_0(FUNC_4(VAR_4->cie_version, 1));


 if (VAR_4->cie_augment != ((void*)0))
  FUNC_0(FUNC_1(VAR_4->cie_augment,
      FUNC_7((char *) VAR_4->cie_augment) + 1));
 else
  FUNC_0(FUNC_4(0, 1));


 FUNC_0(FUNC_3(VAR_4->cie_caf));
 FUNC_0(FUNC_2(VAR_4->cie_daf));
 FUNC_0(FUNC_4(VAR_4->cie_ra, 1));


 if (VAR_4->cie_initinst != ((void*)0))
  FUNC_0(FUNC_1(VAR_4->cie_initinst, VAR_4->cie_instlen));


 VAR_6 = VAR_3->ds_size - VAR_4->cie_offset - 4;
 VAR_4->cie_length = FUNC_6(VAR_6, VAR_2->dbg_pointer_size);
 while (VAR_6++ < VAR_4->cie_length)
  FUNC_0(FUNC_4(VAR_0, 1));


 VAR_2->write(VAR_3->ds_data, &VAR_7, VAR_4->cie_length, 4);

 return (VAR_1);

gen_fail:
 return (VAR_8);
}
