
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dbg_tu_current; TYPE_2__* dbg_cu_current; } ;
struct TYPE_7__ {int cu_length_size; int cu_version; } ;
struct TYPE_6__ {int cu_length_size; int cu_version; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Locdesc ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (TYPE_3__*,int ,int ,int,int,int,int **,int *,int *) ;

int
FUNC_1(Dwarf_Debug VAR_0, Dwarf_Ptr VAR_1,
    Dwarf_Unsigned VAR_2, Dwarf_Half VAR_3, Dwarf_Locdesc **VAR_4,
    Dwarf_Signed *VAR_5, Dwarf_Error *VAR_6)
{
 Dwarf_Half VAR_7;
 Dwarf_Small VAR_8;
 if (VAR_0->dbg_cu_current) {
  VAR_7 = VAR_0->dbg_cu_current->cu_length_size == 4 ? 4 : 8;
  VAR_8 = VAR_0->dbg_cu_current->cu_version;
 } else if (VAR_0->dbg_tu_current) {
  VAR_7 = VAR_0->dbg_tu_current->cu_length_size == 4 ? 4 : 8;
  VAR_8 = VAR_0->dbg_tu_current->cu_version;
 } else {

  VAR_7 = 4;
  VAR_8 = 2;
 }

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_7, VAR_8, VAR_4, VAR_5, VAR_6));
}
