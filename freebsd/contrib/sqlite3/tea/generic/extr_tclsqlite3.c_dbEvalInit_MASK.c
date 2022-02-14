
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Tcl_Obj ;
struct TYPE_4__ {int evalFlags; int * pArray; int * pSql; int zSql; int * pDb; } ;
typedef int SqliteDb ;
typedef TYPE_1__ DbEvalContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(
  DbEvalContext *VAR_0,
  SqliteDb *VAR_1,
  Tcl_Obj *VAR_2,
  Tcl_Obj *VAR_3,
  int VAR_4
){
  FUNC_2(VAR_0, 0, sizeof(DbEvalContext));
  VAR_0->pDb = VAR_1;
  VAR_0->zSql = FUNC_0(VAR_2);
  VAR_0->pSql = VAR_2;
  FUNC_1(VAR_2);
  if( VAR_3 ){
    VAR_0->pArray = VAR_3;
    FUNC_1(VAR_3);
  }
  VAR_0->evalFlags = VAR_4;
}
