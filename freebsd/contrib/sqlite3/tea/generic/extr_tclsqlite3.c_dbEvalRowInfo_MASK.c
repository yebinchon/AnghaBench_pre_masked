
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_7__ {int nCol; int ** apColName; scalar_t__ pArray; TYPE_2__* pDb; TYPE_1__* pPreStmt; } ;
struct TYPE_6__ {int * interp; } ;
struct TYPE_5__ {int * pStmt; } ;
typedef TYPE_3__ DbEvalContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (char*,int) ;
 int FUNC_6 (int *,scalar_t__,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(
  DbEvalContext *VAR_0,
  int *VAR_1,
  Tcl_Obj ***VAR_2
){

  if( 0==VAR_0->apColName ){
    sqlite3_stmt *VAR_3 = VAR_0->pPreStmt->pStmt;
    int VAR_4;
    int VAR_5;
    Tcl_Obj **VAR_6 = 0;

    VAR_0->nCol = VAR_5 = FUNC_7(VAR_3);
    if( VAR_5>0 && (VAR_2 || VAR_0->pArray) ){
      VAR_6 = (Tcl_Obj**)FUNC_0( sizeof(Tcl_Obj*)*VAR_5 );
      for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
        VAR_6[VAR_4] = FUNC_5(FUNC_8(VAR_3,VAR_4), -1);
        FUNC_2(VAR_6[VAR_4]);
      }
      VAR_0->apColName = VAR_6;
    }




    if( VAR_0->pArray ){
      Tcl_Interp *VAR_7 = VAR_0->pDb->interp;
      Tcl_Obj *VAR_8 = FUNC_4();
      Tcl_Obj *VAR_9 = FUNC_5("*", -1);

      for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
        FUNC_3(VAR_7, VAR_8, VAR_6[VAR_4]);
      }
      FUNC_2(VAR_9);
      FUNC_6(VAR_7, VAR_0->pArray, VAR_9, VAR_8, 0);
      FUNC_1(VAR_9);
    }
  }

  if( VAR_2 ){
    *VAR_2 = VAR_0->apColName;
  }
  if( VAR_1 ){
    *VAR_1 = VAR_0->nCol;
  }
}
