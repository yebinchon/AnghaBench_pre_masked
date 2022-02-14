
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pStmt; } ;
struct TYPE_5__ {scalar_t__ pSql; scalar_t__ pArray; TYPE_2__* pPreStmt; int pDb; } ;
typedef TYPE_1__ DbEvalContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(DbEvalContext *VAR_0){
  if( VAR_0->pPreStmt ){
    FUNC_3(VAR_0->pPreStmt->pStmt);
    FUNC_2(VAR_0->pDb, VAR_0->pPreStmt, 0);
    VAR_0->pPreStmt = 0;
  }
  if( VAR_0->pArray ){
    FUNC_0(VAR_0->pArray);
    VAR_0->pArray = 0;
  }
  FUNC_0(VAR_0->pSql);
  FUNC_1(VAR_0);
}
