
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;


typedef int u8 ;
struct ExprList_item {int pExpr; } ;
struct AggInfo_func {scalar_t__ iDistinct; TYPE_11__* pFunc; int iMem; TYPE_20__* pExpr; } ;
struct AggInfo_col {int iMem; int pExpr; } ;
typedef int Vdbe ;
struct TYPE_30__ {int directMode; int nFunc; int nAccumulator; struct AggInfo_col* aCol; struct AggInfo_func* aFunc; } ;
struct TYPE_29__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_28__ {int nMem; TYPE_4__* db; int * pVdbe; } ;
struct TYPE_27__ {int * pDfltColl; } ;
struct TYPE_26__ {TYPE_2__* pWin; } ;
struct TYPE_25__ {int * pFilter; } ;
struct TYPE_23__ {TYPE_6__* pList; } ;
struct TYPE_24__ {TYPE_3__ y; TYPE_1__ x; } ;
struct TYPE_22__ {int funcFlags; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;
typedef int Expr ;
typedef int CollSeq ;
typedef TYPE_7__ AggInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_20__*,int ) ;
 int FUNC_1 (TYPE_20__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,int,int,int) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*,int,int ,int ) ;
 int * FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int *,int,int ) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_5__*,int,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int ,int,int ) ;
 int FUNC_14 (int *,int ,int,int ,int ,char*,int ) ;
 int FUNC_15 (int *,TYPE_11__*,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(Parse *VAR_11, int VAR_12, AggInfo *VAR_13){
  Vdbe *VAR_14 = VAR_11->pVdbe;
  int VAR_15;
  int VAR_16 = 0;
  int VAR_17 = 0;
  struct AggInfo_func *VAR_18;
  struct AggInfo_col *VAR_19;

  VAR_13->directMode = 1;
  for(VAR_15=0, VAR_18=VAR_13->aFunc; VAR_15<VAR_13->nFunc; VAR_15++, VAR_18++){
    int VAR_20;
    int VAR_21 = 0;
    int VAR_22;
    ExprList *VAR_23 = VAR_18->pExpr->x.pList;
    FUNC_3( !FUNC_0(VAR_18->pExpr, VAR_1) );
    FUNC_3( !FUNC_1(VAR_18->pExpr) );
    if( FUNC_0(VAR_18->pExpr, VAR_0) ){
      Expr *VAR_24 = VAR_18->pExpr->y.pWin->pFilter;
      if( VAR_13->nAccumulator
       && (VAR_18->pFunc->funcFlags & VAR_9)
      ){
        if( VAR_16==0 ) VAR_16 = ++VAR_11->nMem;







        FUNC_12(VAR_14, VAR_4, VAR_12, VAR_16);
      }
      VAR_21 = FUNC_18(VAR_11);
      FUNC_8(VAR_11, VAR_24, VAR_21, VAR_10);
    }
    if( VAR_23 ){
      VAR_20 = VAR_23->nExpr;
      VAR_22 = FUNC_9(VAR_11, VAR_20);
      FUNC_6(VAR_11, VAR_23, VAR_22, 0, VAR_8);
    }else{
      VAR_20 = 0;
      VAR_22 = 0;
    }
    if( VAR_18->iDistinct>=0 ){
      if( VAR_21==0 ){
        VAR_21 = FUNC_18(VAR_11);
      }
      FUNC_20( VAR_20==0 );
      FUNC_20( VAR_20>1 );
      FUNC_4(VAR_11, VAR_18->iDistinct, VAR_21, 1, VAR_22);
    }
    if( VAR_18->pFunc->funcFlags & VAR_9 ){
      CollSeq *VAR_25 = 0;
      struct ExprList_item *VAR_26;
      int VAR_27;
      FUNC_3( VAR_23!=0 );
      for(VAR_27=0, VAR_26=VAR_23->a; !VAR_25 && VAR_27<VAR_20; VAR_27++, VAR_26++){
        VAR_25 = FUNC_7(VAR_11, VAR_26->pExpr);
      }
      if( !VAR_25 ){
        VAR_25 = VAR_11->db->pDfltColl;
      }
      if( VAR_16==0 && VAR_13->nAccumulator ) VAR_16 = ++VAR_11->nMem;
      FUNC_14(VAR_14, VAR_3, VAR_16, 0, 0, (char *)VAR_25, VAR_6);
    }
    FUNC_13(VAR_14, VAR_2, 0, VAR_22, VAR_18->iMem);
    FUNC_15(VAR_14, VAR_18->pFunc, VAR_7);
    FUNC_16(VAR_14, (u8)VAR_20);
    FUNC_10(VAR_11, VAR_22, VAR_20);
    if( VAR_21 ){
      FUNC_19(VAR_14, VAR_21);
    }
  }
  if( VAR_16==0 && VAR_13->nAccumulator ){
    VAR_16 = VAR_12;
  }
  if( VAR_16 ){
    VAR_17 = FUNC_11(VAR_14, VAR_5, VAR_16); FUNC_2(VAR_14);
  }
  for(VAR_15=0, VAR_19=VAR_13->aCol; VAR_15<VAR_13->nAccumulator; VAR_15++, VAR_19++){
    FUNC_5(VAR_11, VAR_19->pExpr, VAR_19->iMem);
  }

  VAR_13->directMode = 0;
  if( VAR_17 ){
    FUNC_17(VAR_14, VAR_17);
  }
}
