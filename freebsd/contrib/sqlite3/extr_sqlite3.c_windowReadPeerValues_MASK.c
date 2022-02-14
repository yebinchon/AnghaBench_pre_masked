
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pParse; TYPE_2__* pMWin; } ;
typedef TYPE_1__ WindowCodeArg ;
struct TYPE_6__ {int nBufferCol; TYPE_3__* pPartition; TYPE_3__* pOrderBy; } ;
typedef TYPE_2__ Window ;
typedef int Vdbe ;
struct TYPE_7__ {int nExpr; } ;
typedef TYPE_3__ ExprList ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(
  WindowCodeArg *VAR_1,
  int VAR_2,
  int VAR_3
){
  Window *VAR_4 = VAR_1->pMWin;
  ExprList *VAR_5 = VAR_4->pOrderBy;
  if( VAR_5 ){
    Vdbe *VAR_6 = FUNC_0(VAR_1->pParse);
    ExprList *VAR_7 = VAR_4->pPartition;
    int VAR_8 = VAR_4->nBufferCol + (VAR_7 ? VAR_7->nExpr : 0);
    int VAR_9;
    for(VAR_9=0; VAR_9<VAR_5->nExpr; VAR_9++){
      FUNC_1(VAR_6, VAR_0, VAR_2, VAR_8+VAR_9, VAR_3+VAR_9);
    }
  }
}
