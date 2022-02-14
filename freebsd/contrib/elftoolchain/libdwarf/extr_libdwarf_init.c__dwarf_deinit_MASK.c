
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dbg_mode; } ;
typedef TYPE_1__* Dwarf_Debug ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(Dwarf_Debug VAR_2)
{

 FUNC_2(VAR_2 != ((void*)0));

 if (VAR_2->dbg_mode == VAR_0)
  FUNC_0(VAR_2);
 else if (VAR_2->dbg_mode == VAR_1)
  FUNC_1(VAR_2);
}
