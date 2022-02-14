
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dbg_frame; int * dbg_internal_reg_table; } ;
struct TYPE_7__ {int fs_fdelen; int * fs_fdearray; int fs_cielen; int * fs_ciearray; } ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;
typedef int Dwarf_Cie ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;

int
FUNC_3(Dwarf_Debug VAR_6, Dwarf_Cie **VAR_7,
    Dwarf_Signed *VAR_8, Dwarf_Fde **VAR_9, Dwarf_Signed *VAR_10,
    Dwarf_Error *VAR_11)
{

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ||
     VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_11, VAR_0);
  return (VAR_3);
 }

 if (VAR_6->dbg_internal_reg_table == ((void*)0)) {
  if (FUNC_1(VAR_6, VAR_11) != VAR_1)
   return (VAR_3);
 }

 if (VAR_6->dbg_frame == ((void*)0)) {
  if (FUNC_2(VAR_6, VAR_11) != VAR_1)
   return (VAR_3);
  if (VAR_6->dbg_frame == ((void*)0)) {
   FUNC_0(VAR_6, VAR_11, VAR_2);
   return (VAR_4);
  }
 }

 if (VAR_6->dbg_frame->fs_ciearray == ((void*)0) ||
     VAR_6->dbg_frame->fs_fdearray == ((void*)0)) {
  FUNC_0(VAR_6, VAR_11, VAR_2);
  return (VAR_4);
 }

 *VAR_7 = VAR_6->dbg_frame->fs_ciearray;
 *VAR_8 = VAR_6->dbg_frame->fs_cielen;
 *VAR_9 = VAR_6->dbg_frame->fs_fdearray;
 *VAR_10 = VAR_6->dbg_frame->fs_fdelen;

 return (VAR_5);
}
