
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint64_t ;
struct _Dwarf_Fde {int dummy; } ;
struct TYPE_24__ {int cie_addrsize; char* cie_augment; int cie_fde_encode; } ;
struct TYPE_23__ {int (* read ) (int,int*,int) ;} ;
struct TYPE_22__ {int fde_addr; int fde_offset; int fde_length; int fde_cieoff; int fde_initloc; int fde_adrange; int fde_auglen; int fde_augdata; int fde_inst; int fde_instlen; TYPE_5__* fde_cie; TYPE_2__* fde_fs; TYPE_4__* fde_dbg; } ;
struct TYPE_21__ {int fs_fdelen; int fs_fdelist; } ;
struct TYPE_20__ {int ds_data; int ds_size; int ds_addr; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Section ;
typedef TYPE_2__* Dwarf_FrameSec ;
typedef TYPE_3__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_4__* Dwarf_Debug ;
typedef TYPE_5__* Dwarf_Cie ;


 int FUNC_0 (TYPE_4__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,TYPE_1__*,int*,TYPE_5__**,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,TYPE_5__**) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int*,int,int*,int ,int,int *) ;
 int FUNC_5 (int,int*) ;
 TYPE_3__* FUNC_6 (int,int) ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int,int*,int) ;
 int FUNC_10 (int,int*,int) ;
 int FUNC_11 (int,int*,int) ;
 int FUNC_12 (int,int*,int) ;
 int FUNC_13 (int,int*,int) ;
 int FUNC_14 (int,int*,int) ;

__attribute__((used)) static int
FUNC_15(Dwarf_Debug VAR_6, Dwarf_FrameSec VAR_7, Dwarf_Section *VAR_8,
    Dwarf_Unsigned *VAR_9, int VAR_10, Dwarf_Error *VAR_11)
{
 Dwarf_Cie VAR_12;
 Dwarf_Fde VAR_13;
 Dwarf_Unsigned VAR_14;
 uint64_t VAR_15, VAR_16;
 int VAR_17, VAR_18;

 if ((VAR_13 = FUNC_6(1, sizeof(struct _Dwarf_Fde))) == ((void*)0)) {
  FUNC_0(VAR_6, VAR_11, VAR_1);
  return (VAR_1);
 }
 FUNC_1(&VAR_7->fs_fdelist, VAR_13, VAR_5);

 VAR_13->fde_dbg = VAR_6;
 VAR_13->fde_fs = VAR_7;
 VAR_13->fde_addr = VAR_8->ds_data + *VAR_9;
 VAR_13->fde_offset = *VAR_9;

 VAR_15 = VAR_6->read(VAR_8->ds_data, VAR_9, 4);
 if (VAR_15 == 0xffffffff) {
  VAR_17 = 8;
  VAR_15 = VAR_6->read(VAR_8->ds_data, VAR_9, 8);
 } else
  VAR_17 = 4;

 if (VAR_15 > VAR_8->ds_size - *VAR_9) {
  FUNC_0(VAR_6, VAR_11, VAR_0);
  return (VAR_0);
 }

 VAR_13->fde_length = VAR_15;

 if (VAR_10) {
  VAR_13->fde_cieoff = VAR_6->read(VAR_8->ds_data, VAR_9, 4);
  VAR_14 = *VAR_9 - (4 + VAR_13->fde_cieoff);

  if (VAR_14 == VAR_13->fde_offset) {
   FUNC_0(VAR_6, VAR_11, VAR_3);
   return (VAR_3);
  }
 } else {
  VAR_13->fde_cieoff = VAR_6->read(VAR_8->ds_data, VAR_9, VAR_17);
  VAR_14 = VAR_13->fde_cieoff;
 }

 if (FUNC_3(VAR_7, VAR_14, &VAR_12) ==
     VAR_4) {
  VAR_18 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_14, &VAR_12,
      VAR_11);
  if (VAR_18 != VAR_2)
   return (VAR_18);
 }
 VAR_13->fde_cie = VAR_12;
 if (VAR_10) {




  VAR_18 = FUNC_4(VAR_6, VAR_12, &VAR_16,
      VAR_8->ds_data, VAR_9, VAR_12->cie_fde_encode, VAR_8->ds_addr + *VAR_9,
      VAR_11);
  if (VAR_18 != VAR_2)
   return (VAR_18);
  VAR_13->fde_initloc = VAR_16;




  VAR_18 = FUNC_4(VAR_6, VAR_12, &VAR_16,
      VAR_8->ds_data, VAR_9, VAR_12->cie_fde_encode, 0, VAR_11);
  if (VAR_18 != VAR_2)
   return (VAR_18);
  VAR_13->fde_adrange = VAR_16;
 } else {
  VAR_13->fde_initloc = VAR_6->read(VAR_8->ds_data, VAR_9,
      VAR_12->cie_addrsize);
  VAR_13->fde_adrange = VAR_6->read(VAR_8->ds_data, VAR_9,
      VAR_12->cie_addrsize);
 }


 if (VAR_10 && *VAR_12->cie_augment == 'z') {
  VAR_13->fde_auglen = FUNC_5(VAR_8->ds_data, VAR_9);
  VAR_13->fde_augdata = VAR_8->ds_data + *VAR_9;
  *VAR_9 += VAR_13->fde_auglen;
 }

 VAR_13->fde_inst = VAR_8->ds_data + *VAR_9;
 if (VAR_17 == 4)
  VAR_13->fde_instlen = VAR_13->fde_offset + 4 + VAR_15 - *VAR_9;
 else
  VAR_13->fde_instlen = VAR_13->fde_offset + 12 + VAR_15 - *VAR_9;

 *VAR_9 += VAR_13->fde_instlen;
 VAR_7->fs_fdelen++;

 return (VAR_2);
}
