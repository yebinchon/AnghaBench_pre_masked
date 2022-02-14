
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fde_fs; int * fde_dbg; } ;
struct TYPE_5__ {scalar_t__ fs_fdelen; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_FrameSec ;
typedef TYPE_2__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

int
FUNC_2(Dwarf_Fde *VAR_5, Dwarf_Unsigned VAR_6,
    Dwarf_Fde *VAR_7, Dwarf_Error *VAR_8)
{
 Dwarf_FrameSec VAR_9;
 Dwarf_Debug VAR_10;

 VAR_10 = VAR_5 != ((void*)0) ? (*VAR_5)->fde_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_8, VAR_0);
  return (VAR_2);
 }

 VAR_9 = VAR_5[0]->fde_fs;
 FUNC_1(VAR_9 != ((void*)0));

 if (VAR_6 >= VAR_9->fs_fdelen) {
  FUNC_0(VAR_10, VAR_8, VAR_1);
  return (VAR_3);
 }

 *VAR_7 = VAR_5[VAR_6];

 return (VAR_4);
}
