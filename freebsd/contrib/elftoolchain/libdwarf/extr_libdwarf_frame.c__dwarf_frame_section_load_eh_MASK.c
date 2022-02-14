
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dbg_eh_frame; } ;
typedef int Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int,int *) ;

int
FUNC_2(Dwarf_Debug VAR_1, Dwarf_Error *VAR_2)
{
 Dwarf_Section *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, ".eh_frame")) != ((void*)0)) {
  return (FUNC_1(VAR_1, &VAR_1->dbg_eh_frame,
      VAR_3, 1, VAR_2));
 }

 return (VAR_0);
}
