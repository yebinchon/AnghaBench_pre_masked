
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dbg_mode; int dbg_mslist; int dbg_aslist; int dbg_rllist; int dbg_tu; int dbg_cu; int dbg_errarg; int dbg_errhand; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Handler ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

int
FUNC_5(Dwarf_Debug VAR_4, Dwarf_Unsigned VAR_5, Dwarf_Handler VAR_6,
    Dwarf_Ptr VAR_7, Dwarf_Error *VAR_8)
{
 int VAR_9;

 VAR_9 = VAR_3;





 VAR_4->dbg_errhand = VAR_6;
 VAR_4->dbg_errarg = VAR_7;

 FUNC_0(&VAR_4->dbg_cu);
 FUNC_0(&VAR_4->dbg_tu);
 FUNC_0(&VAR_4->dbg_rllist);
 FUNC_0(&VAR_4->dbg_aslist);
 FUNC_0(&VAR_4->dbg_mslist);

 if (VAR_4->dbg_mode == VAR_1 || VAR_4->dbg_mode == VAR_0) {
  VAR_9 = FUNC_1(VAR_4, VAR_8);
  if (VAR_9 != VAR_3) {
   FUNC_2(VAR_4);
   return (VAR_9);
  }
 }

 if (VAR_4->dbg_mode == VAR_2) {
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8);
  if (VAR_9 != VAR_3) {
   FUNC_2(VAR_4);
   return (VAR_9);
  }
 }




 if ((VAR_9 = FUNC_4(VAR_4, VAR_8)) != VAR_3)
  return (VAR_9);

 return (VAR_3);
}
