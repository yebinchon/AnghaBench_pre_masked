
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fde_initloc; scalar_t__ fde_adrange; TYPE_1__* fde_fs; int * fde_dbg; } ;
struct TYPE_5__ {scalar_t__ fs_fdelen; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_FrameSec ;
typedef TYPE_2__* Dwarf_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

int
FUNC_2(Dwarf_Fde *VAR_5, Dwarf_Addr VAR_6, Dwarf_Fde *VAR_7,
    Dwarf_Addr *VAR_8, Dwarf_Addr *VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_FrameSec VAR_11;
 Dwarf_Debug VAR_12;
 Dwarf_Fde VAR_13;
 int VAR_14;

 VAR_12 = VAR_5 != ((void*)0) ? (*VAR_5)->fde_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ||
     VAR_9 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_0);
  return (VAR_2);
 }

 VAR_11 = VAR_5[0]->fde_fs;
 FUNC_1(VAR_11 != ((void*)0));

 for (VAR_14 = 0; (Dwarf_Unsigned)VAR_14 < VAR_11->fs_fdelen; VAR_14++) {
  VAR_13 = VAR_5[VAR_14];
  if (VAR_6 >= VAR_13->fde_initloc && VAR_6 < VAR_13->fde_initloc +
      VAR_13->fde_adrange) {
   *VAR_7 = VAR_13;
   *VAR_8 = VAR_13->fde_initloc;
   *VAR_9 = VAR_13->fde_initloc + VAR_13->fde_adrange - 1;
   return (VAR_4);
  }
 }

 FUNC_0(VAR_12, VAR_10, VAR_1);
 return (VAR_3);
}
