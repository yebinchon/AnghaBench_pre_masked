
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dbg_strtab_size; int dbg_strtab; } ;
struct TYPE_11__ {scalar_t__ ds_cap; scalar_t__ ds_size; int * ds_data; } ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__**,char*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int * FUNC_6 (int *,size_t) ;

int
FUNC_7(Dwarf_P_Debug VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_P_Section VAR_5;
 int VAR_6;

 FUNC_4(VAR_3 != ((void*)0));

 if ((VAR_6 = FUNC_3(VAR_3, &VAR_5, ".debug_str", 0, VAR_4)) !=
     VAR_1)
  return (VAR_6);

 if (VAR_3->dbg_strtab_size > VAR_5->ds_cap) {
  VAR_5->ds_data = FUNC_6(VAR_5->ds_data,
      (size_t) VAR_3->dbg_strtab_size);
  if (VAR_5->ds_data == ((void*)0)) {
   FUNC_2(VAR_3, &VAR_5);
   FUNC_0(VAR_3, VAR_4, VAR_0);
   return (VAR_0);
  }
  VAR_5->ds_cap = VAR_3->dbg_strtab_size;
 }

 FUNC_5(VAR_5->ds_data, VAR_3->dbg_strtab, VAR_3->dbg_strtab_size);
 VAR_5->ds_size = VAR_3->dbg_strtab_size;






 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_2, 0, 0, 0, VAR_4);

 return (VAR_6);
}
