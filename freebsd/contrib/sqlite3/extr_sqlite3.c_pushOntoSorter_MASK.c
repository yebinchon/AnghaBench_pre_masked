
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;


struct TYPE_24__ {TYPE_7__* pKeyInfo; } ;
struct TYPE_25__ {int p2; TYPE_2__ p4; } ;
typedef TYPE_3__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_29__ {scalar_t__ nKeyField; scalar_t__ nAllField; int aSortFlags; } ;
struct TYPE_28__ {int nMem; TYPE_1__* db; int * pVdbe; } ;
struct TYPE_27__ {scalar_t__ iOffset; int iLimit; } ;
struct TYPE_26__ {int sortFlags; int nOBSat; int labelDone; int iECursor; int labelBkOut; int regReturn; int labelOBLopt; TYPE_12__* pOrderBy; int addrSortIndex; } ;
struct TYPE_23__ {scalar_t__ mallocFailed; } ;
struct TYPE_22__ {int nExpr; } ;
typedef TYPE_4__ SortCtx ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ KeyInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,TYPE_5__*,int,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_6__*,TYPE_12__*,int,int,int) ;
 int FUNC_5 (TYPE_6__*,int,int,int) ;
 TYPE_7__* FUNC_6 (TYPE_6__*,TYPE_12__*,int,scalar_t__) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int,int,int,int,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int,char*,int ) ;
 int FUNC_13 (int *) ;
 TYPE_3__* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 void* FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(
  Parse *VAR_17,
  SortCtx *VAR_18,
  Select *VAR_19,
  int VAR_20,
  int VAR_21,
  int VAR_22,
  int VAR_23
){
  Vdbe *VAR_24 = VAR_17->pVdbe;
  int VAR_25 = ((VAR_18->sortFlags & VAR_14)==0);
  int VAR_26 = VAR_18->pOrderBy->nExpr;
  int VAR_27 = VAR_26 + VAR_25 + VAR_22;
  int VAR_28;
  int VAR_29 = 0;
  int VAR_30 = VAR_18->nOBSat;
  int VAR_31;
  int VAR_32;
  int VAR_33 = 0;

  FUNC_1( VAR_25==0 || VAR_25==1 );
  FUNC_1( VAR_22==1 || VAR_20==VAR_21 || VAR_21==0 );

  if( VAR_23 ){
    FUNC_1( VAR_23==VAR_26+VAR_25 );
    VAR_28 = VAR_20 - VAR_23;
  }else{
    VAR_28 = VAR_17->nMem + 1;
    VAR_17->nMem += VAR_27;
  }
  FUNC_1( VAR_19->iOffset==0 || VAR_19->iLimit!=0 );
  VAR_32 = VAR_19->iOffset ? VAR_19->iOffset+1 : VAR_19->iLimit;
  VAR_18->labelDone = FUNC_16(VAR_17);
  FUNC_4(VAR_17, VAR_18->pOrderBy, VAR_28, VAR_21,
                          VAR_15 | (VAR_21? VAR_16 : 0));
  if( VAR_25 ){
    FUNC_8(VAR_24, VAR_10, VAR_18->iECursor, VAR_28+VAR_26);
  }
  if( VAR_23==0 && VAR_22>0 ){
    FUNC_5(VAR_17, VAR_20, VAR_28+VAR_26+VAR_25, VAR_22);
  }
  if( VAR_30>0 ){
    int VAR_34;
    int VAR_35;
    int VAR_36;
    VdbeOp *VAR_37;
    int VAR_38;
    KeyInfo *VAR_39;

    VAR_29 = FUNC_2(VAR_17, VAR_18, VAR_19, VAR_28, VAR_27);
    VAR_34 = VAR_17->nMem+1;
    VAR_17->nMem += VAR_18->nOBSat;
    VAR_38 = VAR_26 - VAR_18->nOBSat + VAR_25;
    if( VAR_25 ){
      VAR_35 = FUNC_7(VAR_24, VAR_5, VAR_28+VAR_26);
    }else{
      VAR_35 = FUNC_7(VAR_24, VAR_11, VAR_18->iECursor);
    }
    FUNC_0(VAR_24);
    FUNC_9(VAR_24, VAR_0, VAR_34, VAR_28, VAR_18->nOBSat);
    VAR_37 = FUNC_14(VAR_24, VAR_18->addrSortIndex);
    if( VAR_17->db->mallocFailed ) return;
    VAR_37->p2 = VAR_38 + VAR_22;
    VAR_39 = VAR_37->p4.pKeyInfo;
    FUNC_3(VAR_39->aSortFlags, 0, VAR_39->nKeyField);
    FUNC_12(VAR_24, -1, (char*)VAR_39, VAR_13);
    FUNC_17( VAR_39->nAllField > VAR_39->nKeyField+2 );
    VAR_37->p4.pKeyInfo = FUNC_6(VAR_17,VAR_18->pOrderBy,VAR_30,
                                           VAR_39->nAllField-VAR_39->nKeyField-1);
    VAR_36 = FUNC_13(VAR_24);
    FUNC_9(VAR_24, VAR_7, VAR_36+1, 0, VAR_36+1); FUNC_0(VAR_24);
    VAR_18->labelBkOut = FUNC_16(VAR_17);
    VAR_18->regReturn = ++VAR_17->nMem;
    FUNC_8(VAR_24, VAR_2, VAR_18->regReturn, VAR_18->labelBkOut);
    FUNC_7(VAR_24, VAR_9, VAR_18->iECursor);
    if( VAR_32 ){
      FUNC_8(VAR_24, VAR_5, VAR_32, VAR_18->labelDone);
      FUNC_0(VAR_24);
    }
    FUNC_15(VAR_24, VAR_35);
    FUNC_5(VAR_17, VAR_28, VAR_34, VAR_18->nOBSat);
    FUNC_15(VAR_24, VAR_36);
  }
  if( VAR_32 ){
    int VAR_40 = VAR_18->iECursor;
    FUNC_8(VAR_24, VAR_6, VAR_32, FUNC_13(VAR_24)+4);
    FUNC_0(VAR_24);
    FUNC_8(VAR_24, VAR_8, VAR_40, 0);
    VAR_33 = FUNC_10(VAR_24, VAR_4,
                                 VAR_40, 0, VAR_28+VAR_30, VAR_26-VAR_30);
    FUNC_0(VAR_24);
    FUNC_7(VAR_24, VAR_1, VAR_40);
  }
  if( VAR_29==0 ){
    VAR_29 = FUNC_2(VAR_17, VAR_18, VAR_19, VAR_28, VAR_27);
  }
  if( VAR_18->sortFlags & VAR_14 ){
    VAR_31 = VAR_12;
  }else{
    VAR_31 = VAR_3;
  }
  FUNC_10(VAR_24, VAR_31, VAR_18->iECursor, VAR_29,
                       VAR_28+VAR_30, VAR_27-VAR_30);
  if( VAR_33 ){
    FUNC_11(VAR_24, VAR_33,
         VAR_18->labelOBLopt ? VAR_18->labelOBLopt : FUNC_13(VAR_24));
  }
}
