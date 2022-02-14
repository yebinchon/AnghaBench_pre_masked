
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * dbg_types_sec; int * dbg_tu_current; scalar_t__ dbg_types_off; scalar_t__ dbg_types_loaded; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(Dwarf_Debug VAR_3, Dwarf_Error *VAR_4)
{


 FUNC_2(VAR_3);
 VAR_3->dbg_types_loaded = 0;
 VAR_3->dbg_types_off = 0;


 VAR_3->dbg_tu_current = ((void*)0);


 VAR_3->dbg_types_sec = FUNC_1(VAR_3,
     VAR_3->dbg_types_sec);

 if (VAR_3->dbg_types_sec == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  return (VAR_1);
 }

 return (VAR_2);
}
