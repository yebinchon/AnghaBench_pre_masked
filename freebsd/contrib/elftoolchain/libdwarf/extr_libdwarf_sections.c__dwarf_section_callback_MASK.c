
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_ndx; int ds_symndx; scalar_t__ ds_size; int ds_name; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Section ;
typedef int Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ,int *,int *) ;

int
FUNC_2(Dwarf_P_Debug VAR_2, Dwarf_P_Section VAR_3,
    Dwarf_Unsigned VAR_4, Dwarf_Unsigned VAR_5, Dwarf_Unsigned VAR_6,
    Dwarf_Unsigned VAR_7, Dwarf_Error *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_3->ds_name, (int) VAR_3->ds_size,
     VAR_4, VAR_5, VAR_6, VAR_7, &VAR_3->ds_symndx, ((void*)0));
 if (VAR_10 < 0) {
  VAR_9 = VAR_0;
  FUNC_0(VAR_2, VAR_8, VAR_9);
  return (VAR_9);
 }
 VAR_3->ds_ndx = VAR_10;

 return (VAR_1);
}
