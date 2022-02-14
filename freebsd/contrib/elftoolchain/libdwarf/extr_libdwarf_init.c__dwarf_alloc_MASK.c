
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _Dwarf_Debug {int dummy; } ;
struct TYPE_5__ {int dbg_mode; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int,int) ;

int
FUNC_2(Dwarf_Debug *VAR_2, int VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_Debug VAR_5;

 if ((VAR_5 = FUNC_1(sizeof(struct _Dwarf_Debug), 1)) == ((void*)0)) {
  FUNC_0(VAR_5, VAR_4, VAR_0);
  return (VAR_0);
 }

 VAR_5->dbg_mode = VAR_3;

 *VAR_2 = VAR_5;

 return (VAR_1);
}
