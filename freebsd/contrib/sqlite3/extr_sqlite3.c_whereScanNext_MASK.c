
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ i16 ;
struct TYPE_19__ {scalar_t__ leftColumn; } ;
struct TYPE_22__ {int leftCursor; int eOperator; TYPE_8__* pExpr; TYPE_1__ u; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_23__ {int k; int iEquiv; int nEquiv; scalar_t__* aiColumn; int* aiCur; int opMask; TYPE_6__* pOrigWC; TYPE_6__* pWC; scalar_t__ zCollName; int idxaff; int pIdxExpr; } ;
typedef TYPE_5__ WhereScan ;
struct TYPE_24__ {int nTerm; struct TYPE_24__* pOuter; TYPE_2__* pWInfo; TYPE_4__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_27__ {int zName; } ;
struct TYPE_26__ {int pLeft; scalar_t__ op; int iTable; scalar_t__ iColumn; struct TYPE_26__* pRight; } ;
struct TYPE_25__ {TYPE_3__* db; } ;
struct TYPE_21__ {TYPE_9__* pDfltColl; } ;
struct TYPE_20__ {TYPE_7__* pParse; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Expr ;
typedef TYPE_9__ CollSeq ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_8__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_9__* FUNC_3 (TYPE_7__*,int,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 TYPE_8__* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static WhereTerm *FUNC_9(WhereScan *VAR_7){
  int VAR_8;
  i16 VAR_9;
  Expr *VAR_10;
  WhereClause *VAR_11;
  WhereTerm *VAR_12;
  int VAR_13 = VAR_7->k;

  FUNC_2( VAR_7->iEquiv<=VAR_7->nEquiv );
  VAR_11 = VAR_7->pWC;
  while(1){
    VAR_9 = VAR_7->aiColumn[VAR_7->iEquiv-1];
    VAR_8 = VAR_7->aiCur[VAR_7->iEquiv-1];
    FUNC_2( VAR_11!=0 );
    do{
      for(VAR_12=VAR_11->a+VAR_13; VAR_13<VAR_11->nTerm; VAR_13++, VAR_12++){
        if( VAR_12->leftCursor==VAR_8
         && VAR_12->u.leftColumn==VAR_9
         && (VAR_9!=VAR_6
             || FUNC_4(VAR_12->pExpr->pLeft,
                                       VAR_7->pIdxExpr,VAR_8)==0)
         && (VAR_7->iEquiv<=1 || !FUNC_1(VAR_12->pExpr, VAR_0))
        ){
          if( (VAR_12->eOperator & VAR_3)!=0
           && VAR_7->nEquiv<FUNC_0(VAR_7->aiCur)
           && (VAR_10 = FUNC_5(VAR_12->pExpr->pRight))->op
               ==VAR_1
          ){
            int VAR_14;
            for(VAR_14=0; VAR_14<VAR_7->nEquiv; VAR_14++){
              if( VAR_7->aiCur[VAR_14]==VAR_10->iTable
               && VAR_7->aiColumn[VAR_14]==VAR_10->iColumn ){
                  break;
              }
            }
            if( VAR_14==VAR_7->nEquiv ){
              VAR_7->aiCur[VAR_14] = VAR_10->iTable;
              VAR_7->aiColumn[VAR_14] = VAR_10->iColumn;
              VAR_7->nEquiv++;
            }
          }
          if( (VAR_12->eOperator & VAR_7->opMask)!=0 ){

            if( VAR_7->zCollName && (VAR_12->eOperator & VAR_5)==0 ){
              CollSeq *VAR_15;
              Parse *VAR_16 = VAR_11->pWInfo->pParse;
              VAR_10 = VAR_12->pExpr;
              if( !FUNC_6(VAR_10, VAR_7->idxaff) ){
                continue;
              }
              FUNC_2(VAR_10->pLeft);
              VAR_15 = FUNC_3(VAR_16,
                                                  VAR_10->pLeft, VAR_10->pRight);
              if( VAR_15==0 ) VAR_15 = VAR_16->db->pDfltColl;
              if( FUNC_7(VAR_15->zName, VAR_7->zCollName) ){
                continue;
              }
            }
            if( (VAR_12->eOperator & (VAR_2|VAR_4))!=0
             && (VAR_10 = VAR_12->pExpr->pRight)->op==VAR_1
             && VAR_10->iTable==VAR_7->aiCur[0]
             && VAR_10->iColumn==VAR_7->aiColumn[0]
            ){
              FUNC_8( VAR_12->eOperator & VAR_4 );
              continue;
            }
            VAR_7->pWC = VAR_11;
            VAR_7->k = VAR_13+1;
            return VAR_12;
          }
        }
      }
      VAR_11 = VAR_11->pOuter;
      VAR_13 = 0;
    }while( VAR_11!=0 );
    if( VAR_7->iEquiv>=VAR_7->nEquiv ) break;
    VAR_11 = VAR_7->pOrigWC;
    VAR_13 = 0;
    VAR_7->iEquiv++;
  }
  return 0;
}
