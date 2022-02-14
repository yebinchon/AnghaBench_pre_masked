
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct _Dwarf_CU {int dummy; } ;
struct TYPE_26__ {int cu_version; int cu_pointer_size; int cu_length; int cu_abbrev_offset; TYPE_2__* cu_dbg; } ;
struct TYPE_25__ {int dbg_pointer_size; int dbg_cu; TYPE_1__* dbgp_info; int (* write ) (int ,scalar_t__*,int,int) ;int * dbgp_root_die; int * write_alloc; } ;
struct TYPE_24__ {int ds_size; int ds_data; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Rel_Section ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_CU ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int ,TYPE_1__*,int ,int,int,int ,int ,char*,int *) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *,TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__**,char*,int ,int *) ;
 int FUNC_13 (int) ;
 TYPE_3__* FUNC_14 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,scalar_t__*,int,int) ;

int
FUNC_17(Dwarf_P_Debug VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_P_Section VAR_8;
 Dwarf_Rel_Section VAR_9;
 Dwarf_Unsigned VAR_10;
 Dwarf_CU VAR_11;
 int VAR_12;

 FUNC_13(VAR_6 != ((void*)0) && VAR_6->write_alloc != ((void*)0));

 if (VAR_6->dbgp_root_die == ((void*)0))
  return (VAR_1);


 if ((VAR_11 = FUNC_14(1, sizeof(struct _Dwarf_CU))) == ((void*)0)) {
  FUNC_0(VAR_6, VAR_7, VAR_0);
  return (VAR_0);
 }
 VAR_11->cu_dbg = VAR_6;
 VAR_11->cu_version = 2;
 VAR_11->cu_pointer_size = VAR_6->dbg_pointer_size;
 FUNC_2(&VAR_6->dbg_cu, VAR_11, VAR_4);


 if ((VAR_12 = FUNC_12(VAR_6, &VAR_6->dbgp_info, ".debug_info", 0,
     VAR_7)) != VAR_1)
  goto gen_fail1;
 VAR_8 = VAR_6->dbgp_info;


 if ((VAR_12 = FUNC_9(VAR_6, &VAR_9, VAR_8, VAR_7)) !=
     VAR_1)
  goto gen_fail0;


 FUNC_1(FUNC_4(VAR_11->cu_length, 4));


 FUNC_1(FUNC_4(VAR_11->cu_version, 2));





 FUNC_1(FUNC_6(VAR_6, VAR_9, VAR_8, VAR_5, 4,
     VAR_8->ds_size, 0, VAR_11->cu_abbrev_offset, ".debug_abbrev", VAR_7));


 FUNC_1(FUNC_4(VAR_11->cu_pointer_size, 1));


 FUNC_1(FUNC_5(VAR_6, VAR_11, VAR_9, VAR_7));


 VAR_11->cu_length = VAR_8->ds_size - 4;
 VAR_10 = 0;
 VAR_6->write(VAR_8->ds_data, &VAR_10, VAR_11->cu_length, 4);


 FUNC_1(FUNC_10(VAR_6, VAR_8, VAR_2, 0, 0, 0, VAR_7));





 FUNC_1(FUNC_7(VAR_6, VAR_9, VAR_7));

 return (VAR_1);

gen_fail:
 FUNC_8(VAR_6, &VAR_9);

gen_fail0:
 FUNC_11(VAR_6, &VAR_6->dbgp_info);

gen_fail1:
 FUNC_3(&VAR_6->dbg_cu, VAR_11, VAR_3, VAR_4);
 FUNC_15(VAR_11);

 return (VAR_12);
}
