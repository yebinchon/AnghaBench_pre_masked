
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Tcl_Obj ;
struct TYPE_2__ {int interp; int pCollateNeeded; } ;
typedef TYPE_1__ SqliteDb ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char const*,int) ;

__attribute__((used)) static void FUNC_6(
  void *VAR_0,
  sqlite3 *VAR_1,
  int VAR_2,
  const char *VAR_3
){
  SqliteDb *VAR_4 = (SqliteDb *)VAR_0;
  Tcl_Obj *VAR_5 = FUNC_1(VAR_4->pCollateNeeded);
  FUNC_3(VAR_5);
  FUNC_4(0, VAR_5, FUNC_5(VAR_3, -1));
  FUNC_2(VAR_4->interp, VAR_5, 0);
  FUNC_0(VAR_5);
}
