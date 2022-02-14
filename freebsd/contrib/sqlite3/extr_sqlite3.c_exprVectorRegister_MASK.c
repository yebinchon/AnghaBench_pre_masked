
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_18__ {TYPE_5__* pList; TYPE_3__* pSelect; } ;
struct TYPE_19__ {scalar_t__ op; int iTable; TYPE_6__ x; } ;
struct TYPE_17__ {TYPE_4__* a; } ;
struct TYPE_16__ {TYPE_7__* pExpr; } ;
struct TYPE_15__ {TYPE_2__* pEList; } ;
struct TYPE_14__ {TYPE_1__* a; } ;
struct TYPE_13__ {TYPE_7__* pExpr; } ;
typedef int Parse ;
typedef TYPE_7__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_7__*,int*) ;
 TYPE_7__* FUNC_2 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_3(
  Parse *VAR_3,
  Expr *VAR_4,
  int VAR_5,
  int VAR_6,
  Expr **VAR_7,
  int *VAR_8
){
  u8 VAR_9 = VAR_4->op;
  FUNC_0( VAR_9==VAR_2 || VAR_9==VAR_0 || VAR_9==VAR_1 );
  if( VAR_9==VAR_0 ){
    *VAR_7 = FUNC_2(VAR_4, VAR_5);
    return VAR_4->iTable+VAR_5;
  }
  if( VAR_9==VAR_1 ){
    *VAR_7 = VAR_4->x.pSelect->pEList->a[VAR_5].pExpr;
     return VAR_6+VAR_5;
  }
  *VAR_7 = VAR_4->x.pList->a[VAR_5].pExpr;
  return FUNC_1(VAR_3, *VAR_7, VAR_8);
}
