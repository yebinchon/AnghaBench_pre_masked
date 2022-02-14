
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbg_mode; int dbg_strtab; } ;
typedef TYPE_1__* Dwarf_Debug ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(Dwarf_Debug VAR_2)
{

 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_2->dbg_mode == VAR_0 || VAR_2->dbg_mode == VAR_1)
  FUNC_1(VAR_2->dbg_strtab);
}
