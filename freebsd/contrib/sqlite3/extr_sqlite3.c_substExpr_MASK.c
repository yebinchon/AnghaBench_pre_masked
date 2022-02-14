
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_14__ ;


typedef int sqlite3 ;
typedef int ifNullRow ;
struct TYPE_35__ {int pOrderBy; int pPartition; TYPE_7__* pFilter; } ;
typedef TYPE_5__ Window ;
struct TYPE_38__ {char* zName; } ;
struct TYPE_34__ {TYPE_5__* pWin; } ;
struct TYPE_33__ {int pList; int pSelect; } ;
struct TYPE_37__ {scalar_t__ iRightJoinTable; scalar_t__ op; scalar_t__ iTable; size_t iColumn; TYPE_4__ y; TYPE_3__ x; struct TYPE_37__* pRight; struct TYPE_37__* pLeft; } ;
struct TYPE_36__ {scalar_t__ iTable; scalar_t__ iNewTable; TYPE_14__* pParse; scalar_t__ isLeftJoin; TYPE_2__* pEList; } ;
struct TYPE_32__ {size_t nExpr; TYPE_1__* a; } ;
struct TYPE_31__ {TYPE_7__* pExpr; } ;
struct TYPE_30__ {int * db; } ;
typedef TYPE_6__ SubstContext ;
typedef TYPE_7__ Expr ;
typedef TYPE_8__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;
 TYPE_7__* FUNC_5 (TYPE_14__*,TYPE_7__*,char*) ;
 TYPE_8__* FUNC_6 (TYPE_14__*,TYPE_7__*) ;
 int FUNC_7 (int *,TYPE_7__*) ;
 TYPE_7__* FUNC_8 (int *,TYPE_7__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_14__*,TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,int ) ;
 int FUNC_12 (TYPE_6__*,int ,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static Expr *FUNC_14(
  SubstContext *VAR_10,
  Expr *VAR_11
){
  if( VAR_11==0 ) return 0;
  if( FUNC_1(VAR_11, VAR_2)
   && VAR_11->iRightJoinTable==VAR_10->iTable
  ){
    VAR_11->iRightJoinTable = VAR_10->iNewTable;
  }
  if( VAR_11->op==VAR_7 && VAR_11->iTable==VAR_10->iTable ){
    if( VAR_11->iColumn<0 ){
      VAR_11->op = VAR_9;
    }else{
      Expr *VAR_12;
      Expr *VAR_13 = VAR_10->pEList->a[VAR_11->iColumn].pExpr;
      Expr VAR_14;
      FUNC_3( VAR_10->pEList!=0 && VAR_11->iColumn<VAR_10->pEList->nExpr );
      FUNC_3( VAR_11->pRight==0 );
      if( FUNC_9(VAR_13) ){
        FUNC_10(VAR_10->pParse, VAR_13);
      }else{
        sqlite3 *VAR_15 = VAR_10->pParse->db;
        if( VAR_10->isLeftJoin && VAR_13->op!=VAR_7 ){
          FUNC_4(&VAR_14, 0, sizeof(VAR_14));
          VAR_14.op = VAR_8;
          VAR_14.pLeft = VAR_13;
          VAR_14.iTable = VAR_10->iNewTable;
          VAR_13 = &VAR_14;
        }
        FUNC_13( FUNC_1(VAR_13, VAR_3) );
        VAR_12 = FUNC_8(VAR_15, VAR_13, 0);
        if( VAR_12 && VAR_10->isLeftJoin ){
          FUNC_2(VAR_12, VAR_0);
        }
        if( VAR_12 && FUNC_1(VAR_11,VAR_2) ){
          VAR_12->iRightJoinTable = VAR_11->iRightJoinTable;
          FUNC_2(VAR_12, VAR_2);
        }
        FUNC_7(VAR_15, VAR_11);
        VAR_11 = VAR_12;



        if( VAR_11 ){
          if( VAR_11->op!=VAR_7 && VAR_11->op!=VAR_6 ){
            CollSeq *VAR_16 = FUNC_6(VAR_10->pParse, VAR_11);
            VAR_11 = FUNC_5(VAR_10->pParse, VAR_11,
                (VAR_16 ? VAR_16->zName : "BINARY")
            );
          }
          FUNC_0(VAR_11, VAR_1);
        }
      }
    }
  }else{
    if( VAR_11->op==VAR_8 && VAR_11->iTable==VAR_10->iTable ){
      VAR_11->iTable = VAR_10->iNewTable;
    }
    VAR_11->pLeft = FUNC_14(VAR_10, VAR_11->pLeft);
    VAR_11->pRight = FUNC_14(VAR_10, VAR_11->pRight);
    if( FUNC_1(VAR_11, VAR_5) ){
      FUNC_12(VAR_10, VAR_11->x.pSelect, 1);
    }else{
      FUNC_11(VAR_10, VAR_11->x.pList);
    }

    if( FUNC_1(VAR_11, VAR_4) ){
      Window *VAR_17 = VAR_11->y.pWin;
      VAR_17->pFilter = FUNC_14(VAR_10, VAR_17->pFilter);
      FUNC_11(VAR_10, VAR_17->pPartition);
      FUNC_11(VAR_10, VAR_17->pOrderBy);
    }

  }
  return VAR_11;
}
