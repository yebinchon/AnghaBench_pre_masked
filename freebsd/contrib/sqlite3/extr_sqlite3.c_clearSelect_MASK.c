
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {scalar_t__ pWin; int pWith; int pWinDefn; int pLimit; int pOrderBy; int pHaving; int pGroupBy; int pWhere; int pSrc; int pEList; struct TYPE_4__* pPrior; } ;
typedef TYPE_1__ Select ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(sqlite3 *VAR_0, Select *VAR_1, int VAR_2){
  while( VAR_1 ){
    Select *VAR_3 = VAR_1->pPrior;
    FUNC_4(VAR_0, VAR_1->pEList);
    FUNC_5(VAR_0, VAR_1->pSrc);
    FUNC_3(VAR_0, VAR_1->pWhere);
    FUNC_4(VAR_0, VAR_1->pGroupBy);
    FUNC_3(VAR_0, VAR_1->pHaving);
    FUNC_4(VAR_0, VAR_1->pOrderBy);
    FUNC_3(VAR_0, VAR_1->pLimit);

    if( FUNC_0(VAR_1->pWinDefn) ){
      FUNC_6(VAR_0, VAR_1->pWinDefn);
    }
    FUNC_1( VAR_1->pWin==0 );

    if( FUNC_0(VAR_1->pWith) ) FUNC_7(VAR_0, VAR_1->pWith);
    if( VAR_2 ) FUNC_2(VAR_0, VAR_1);
    VAR_1 = VAR_3;
    VAR_2 = 1;
  }
}
