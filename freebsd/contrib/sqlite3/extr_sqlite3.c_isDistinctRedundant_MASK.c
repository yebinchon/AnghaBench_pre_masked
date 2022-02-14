
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int WhereClause ;
struct TYPE_18__ {TYPE_5__* pIndex; } ;
typedef TYPE_3__ Table ;
struct TYPE_22__ {scalar_t__ op; int iTable; scalar_t__ iColumn; } ;
struct TYPE_21__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_20__ {int nKeyCol; struct TYPE_20__* pNext; } ;
struct TYPE_19__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_17__ {int pExpr; } ;
struct TYPE_16__ {int iCursor; TYPE_3__* pTab; } ;
typedef TYPE_4__ SrcList ;
typedef int Parse ;
typedef TYPE_5__ Index ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ Expr ;
typedef int Bitmask ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_6__*,int,TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 TYPE_7__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int ,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(
  Parse *VAR_2,
  SrcList *VAR_3,
  WhereClause *VAR_4,
  ExprList *VAR_5
){
  Table *VAR_6;
  Index *VAR_7;
  int VAR_8;
  int VAR_9;




  if( VAR_3->nSrc!=1 ) return 0;
  VAR_9 = VAR_3->a[0].iCursor;
  VAR_6 = VAR_3->a[0].pTab;





  for(VAR_8=0; VAR_8<VAR_5->nExpr; VAR_8++){
    Expr *VAR_10 = FUNC_3(VAR_5->a[VAR_8].pExpr);
    if( VAR_10->op==VAR_0 && VAR_10->iTable==VAR_9 && VAR_10->iColumn<0 ) return 1;
  }
  for(VAR_7=VAR_6->pIndex; VAR_7; VAR_7=VAR_7->pNext){
    if( !FUNC_0(VAR_7) ) continue;
    for(VAR_8=0; VAR_8<VAR_7->nKeyCol; VAR_8++){
      if( 0==FUNC_4(VAR_4, VAR_9, VAR_8, ~(Bitmask)0, VAR_1, VAR_7) ){
        if( FUNC_1(VAR_2, VAR_5, VAR_9, VAR_7, VAR_8)<0 ) break;
        if( FUNC_2(VAR_7, VAR_8)==0 ) break;
      }
    }
    if( VAR_8==VAR_7->nKeyCol ){

      return 1;
    }
  }

  return 0;
}
