
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nParm; struct TYPE_7__* pNext; struct TYPE_7__* pPrev; int * apParm; } ;
struct TYPE_6__ {scalar_t__ maxStmt; scalar_t__ nStmt; TYPE_2__* stmtLast; TYPE_2__* stmtList; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ SqlPreparedStmt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(
  SqliteDb *VAR_0,
  SqlPreparedStmt *VAR_1,
  int VAR_2
){
  int VAR_3;


  for(VAR_3=0; VAR_3<VAR_1->nParm; VAR_3++){
    FUNC_0(VAR_1->apParm[VAR_3]);
  }
  VAR_1->nParm = 0;

  if( VAR_0->maxStmt<=0 || VAR_2 ){

    FUNC_2(VAR_1);
  }else{

    VAR_1->pNext = VAR_0->stmtList;
    VAR_1->pPrev = 0;
    if( VAR_0->stmtList ){
     VAR_0->stmtList->pPrev = VAR_1;
    }
    VAR_0->stmtList = VAR_1;
    if( VAR_0->stmtLast==0 ){
      FUNC_1( VAR_0->nStmt==0 );
      VAR_0->stmtLast = VAR_1;
    }else{
      FUNC_1( VAR_0->nStmt>0 );
    }
    VAR_0->nStmt++;



    while( VAR_0->nStmt>VAR_0->maxStmt ){
      SqlPreparedStmt *VAR_4 = VAR_0->stmtLast;
      VAR_0->stmtLast = VAR_4->pPrev;
      VAR_0->stmtLast->pNext = 0;
      VAR_0->nStmt--;
      FUNC_2(VAR_4);
    }
  }
}
