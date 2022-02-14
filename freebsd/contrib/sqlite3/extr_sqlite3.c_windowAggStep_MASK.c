
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int u8 ;
struct TYPE_20__ {int * pParse; } ;
typedef TYPE_4__ WindowCodeArg ;
struct TYPE_21__ {scalar_t__ eStart; int iArgCol; int iEphCsr; scalar_t__ regStartRowid; int regApp; int csrApp; int regAccum; scalar_t__ bExprArgs; TYPE_3__* pOwner; scalar_t__ pFilter; TYPE_7__* pFunc; struct TYPE_21__* pNextWin; } ;
typedef TYPE_5__ Window ;
struct TYPE_22__ {scalar_t__ opcode; int p1; } ;
typedef TYPE_6__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_23__ {scalar_t__ zName; int funcFlags; scalar_t__ xSFunc; } ;
struct TYPE_18__ {TYPE_15__* pList; } ;
struct TYPE_19__ {TYPE_2__ x; } ;
struct TYPE_17__ {int pExpr; } ;
struct TYPE_16__ {int nExpr; TYPE_1__* a; } ;
typedef int Parse ;
typedef TYPE_7__ FuncDef ;
typedef int CollSeq ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int *,TYPE_15__*,int,int ,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *,scalar_t__,int,int,int) ;
 int FUNC_13 (int *,int ,int ,int ,int ,char const*,int ) ;
 int FUNC_14 (int *,int ,int,int ,int,int) ;
 int FUNC_15 (int *,TYPE_7__*,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 TYPE_6__* FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 scalar_t__ FUNC_20 (int *,TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_21 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_22(
  WindowCodeArg *VAR_20,
  Window *VAR_21,
  int VAR_22,
  int VAR_23,
  int VAR_24
){
  Parse *VAR_25 = VAR_20->pParse;
  Vdbe *VAR_26 = FUNC_7(VAR_25);
  Window *VAR_27;
  for(VAR_27=VAR_21; VAR_27; VAR_27=VAR_27->pNextWin){
    FuncDef *VAR_28 = VAR_27->pFunc;
    int VAR_29;
    int VAR_30 = VAR_27->bExprArgs ? 0 : FUNC_21(VAR_27);
    int VAR_31;

    FUNC_2( VAR_23==0 || VAR_27->eStart!=VAR_16 );



    FUNC_2( VAR_27==VAR_21 || FUNC_20(VAR_25,VAR_27,VAR_21,0)==0 );

    for(VAR_31=0; VAR_31<VAR_30; VAR_31++){
      if( VAR_31!=1 || VAR_28->zName!=VAR_19 ){
        FUNC_12(VAR_26, VAR_4, VAR_22, VAR_27->iArgCol+VAR_31, VAR_24+VAR_31);
      }else{
        FUNC_12(VAR_26, VAR_4, VAR_21->iEphCsr, VAR_27->iArgCol+VAR_31, VAR_24+VAR_31);
      }
    }
    VAR_29 = VAR_24;

    if( VAR_21->regStartRowid==0
     && (VAR_28->funcFlags & VAR_14)
     && (VAR_27->eStart!=VAR_16)
    ){
      int VAR_32 = FUNC_10(VAR_26, VAR_8, VAR_29);
      FUNC_0(VAR_26);
      if( VAR_23==0 ){
        FUNC_11(VAR_26, VAR_0, VAR_27->regApp+1, 1);
        FUNC_11(VAR_26, VAR_10, VAR_29, VAR_27->regApp);
        FUNC_12(VAR_26, VAR_9, VAR_27->regApp, 2, VAR_27->regApp+2);
        FUNC_11(VAR_26, VAR_6, VAR_27->csrApp, VAR_27->regApp+2);
      }else{
        FUNC_14(VAR_26, VAR_11, VAR_27->csrApp, 0, VAR_29, 1);
        FUNC_1(VAR_26);
        FUNC_10(VAR_26, VAR_5, VAR_27->csrApp);
        FUNC_19(VAR_26, FUNC_17(VAR_26)-2);
      }
      FUNC_19(VAR_26, VAR_32);
    }else if( VAR_27->regApp ){
      FUNC_2( VAR_28->zName==VAR_19
           || VAR_28->zName==VAR_17
      );
      FUNC_2( VAR_23==0 || VAR_23==1 );
      FUNC_11(VAR_26, VAR_0, VAR_27->regApp+1-VAR_23, 1);
    }else if( VAR_28->xSFunc!=VAR_18 ){
      int VAR_33 = 0;
      if( VAR_27->pFilter ){
        int VAR_34;
        FUNC_2( VAR_27->bExprArgs || !VAR_30 ||VAR_30==VAR_27->pOwner->x.pList->nExpr );
        FUNC_2( VAR_27->bExprArgs || VAR_30 ||VAR_27->pOwner->x.pList==0 );
        VAR_34 = FUNC_6(VAR_25);
        FUNC_12(VAR_26, VAR_4, VAR_22, VAR_27->iArgCol+VAR_30,VAR_34);
        VAR_33 = FUNC_12(VAR_26, VAR_7, VAR_34, 0, 1);
        FUNC_0(VAR_26);
        FUNC_9(VAR_25, VAR_34);
      }

      if( VAR_27->bExprArgs ){
        int VAR_35 = FUNC_17(VAR_26);
        VdbeOp *VAR_36, *VAR_37;

        VAR_30 = VAR_27->pOwner->x.pList->nExpr;
        VAR_29 = FUNC_5(VAR_25, VAR_30);
        FUNC_3(VAR_25, VAR_27->pOwner->x.pList, VAR_29, 0, 0);

        VAR_37 = FUNC_18(VAR_26, -1);
        for(VAR_36=FUNC_18(VAR_26, VAR_35); VAR_36<=VAR_37; VAR_36++){
          if( VAR_36->opcode==VAR_4 && VAR_36->p1==VAR_27->iEphCsr ){
            VAR_36->p1 = VAR_22;
          }
        }
      }
      if( VAR_28->funcFlags & VAR_15 ){
        CollSeq *VAR_38;
        FUNC_2( VAR_30>0 );
        VAR_38 = FUNC_4(VAR_25, VAR_27->pOwner->x.pList->a[0].pExpr);
        FUNC_13(VAR_26, VAR_3, 0,0,0, (const char*)VAR_38, VAR_12);
      }
      FUNC_12(VAR_26, VAR_23? VAR_1 : VAR_2,
                        VAR_23, VAR_29, VAR_27->regAccum);
      FUNC_15(VAR_26, VAR_28, VAR_13);
      FUNC_16(VAR_26, (u8)VAR_30);
      if( VAR_27->bExprArgs ){
        FUNC_8(VAR_25, VAR_29, VAR_30);
      }
      if( VAR_33 ) FUNC_19(VAR_26, VAR_33);
    }
  }
}
