
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dbg_pointer_size; } ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Debug VAR_3, Dwarf_Half *VAR_4,
    Dwarf_Error *VAR_5)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->dbg_pointer_size;

 return (VAR_2);
}
