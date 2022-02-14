
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pList; } ;
struct TYPE_11__ {int iRightJoinTable; scalar_t__ op; struct TYPE_11__* pRight; struct TYPE_11__* pLeft; TYPE_3__ x; } ;
struct TYPE_9__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_8__ {TYPE_4__* pExpr; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(Expr *VAR_2, int VAR_3){
  while( VAR_2 ){
    if( FUNC_1(VAR_2, VAR_0)
     && (VAR_3<0 || VAR_2->iRightJoinTable==VAR_3) ){
      FUNC_0(VAR_2, VAR_0);
    }
    if( VAR_2->op==VAR_1 && VAR_2->x.pList ){
      int VAR_4;
      for(VAR_4=0; VAR_4<VAR_2->x.pList->nExpr; VAR_4++){
        FUNC_2(VAR_2->x.pList->a[VAR_4].pExpr, VAR_3);
      }
    }
    FUNC_2(VAR_2->pLeft, VAR_3);
    VAR_2 = VAR_2->pRight;
  }
}
