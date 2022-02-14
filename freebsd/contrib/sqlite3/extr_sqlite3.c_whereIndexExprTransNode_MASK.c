
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* pIdxTrans; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_10__ {scalar_t__ pTab; } ;
struct TYPE_14__ {TYPE_1__ y; int iColumn; int iTable; int op; int affExpr; } ;
struct TYPE_13__ {int iIdxCol; int iIdxCur; int iTabCur; int pIdxExpr; } ;
typedef TYPE_4__ IdxExprTrans ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_3, Expr *VAR_4){
  IdxExprTrans *VAR_5 = VAR_3->u.pIdxTrans;
  if( FUNC_1(0, VAR_4, VAR_5->pIdxExpr, VAR_5->iTabCur)==0 ){
    VAR_4->affExpr = FUNC_0(VAR_4);
    VAR_4->op = VAR_0;
    VAR_4->iTable = VAR_5->iIdxCur;
    VAR_4->iColumn = VAR_5->iIdxCol;
    VAR_4->y.pTab = 0;
    return VAR_2;
  }else{
    return VAR_1;
  }
}
