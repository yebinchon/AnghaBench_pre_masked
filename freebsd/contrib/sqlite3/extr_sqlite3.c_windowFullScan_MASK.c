
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int regArg; int * pVdbe; TYPE_2__* pMWin; int * pParse; } ;
typedef TYPE_1__ WindowCodeArg ;
struct TYPE_10__ {int csrApp; int iEphCsr; int regAccum; int regStartRowid; int regEndRowid; scalar_t__ eExclude; TYPE_8__* pOrderBy; struct TYPE_10__* pNextWin; } ;
typedef TYPE_2__ Window ;
typedef int Vdbe ;
struct TYPE_11__ {int nExpr; } ;
typedef int Parse ;
typedef int KeyInfo ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,TYPE_8__*,int ,int ) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int,int) ;
 int FUNC_11 (int *,int ,int,int,int) ;
 int FUNC_12 (int *,void*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*,int,int ,int ) ;
 int FUNC_19 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_20(WindowCodeArg *VAR_13){
  Window *VAR_14;
  Parse *VAR_15 = VAR_13->pParse;
  Window *VAR_16 = VAR_13->pMWin;
  Vdbe *VAR_17 = VAR_13->pVdbe;

  int VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 0;

  int VAR_22;
  int VAR_23;
  int VAR_24;
  int VAR_25;
  int VAR_26;

  FUNC_3((VAR_17, "windowFullScan begin"));

  FUNC_4( VAR_16!=0 );
  VAR_26 = VAR_16->csrApp;
  VAR_22 = (VAR_16->pOrderBy ? VAR_16->pOrderBy->nExpr : 0);

  VAR_23 = FUNC_15(VAR_15);
  VAR_24 = FUNC_15(VAR_15);

  VAR_18 = FUNC_6(VAR_15);
  VAR_20 = FUNC_6(VAR_15);
  if( VAR_22 ){
    VAR_19 = FUNC_5(VAR_15, VAR_22);
    VAR_21 = FUNC_5(VAR_15, VAR_22);
  }

  FUNC_10(VAR_17, VAR_7, VAR_16->iEphCsr, VAR_18);
  FUNC_19(VAR_13, VAR_16->iEphCsr, VAR_19);

  for(VAR_14=VAR_16; VAR_14; VAR_14=VAR_14->pNextWin){
    FUNC_10(VAR_17, VAR_6, 0, VAR_14->regAccum);
  }

  FUNC_11(VAR_17, VAR_8, VAR_26, VAR_24, VAR_16->regStartRowid);
  FUNC_0(VAR_17);
  VAR_25 = FUNC_13(VAR_17);
  FUNC_10(VAR_17, VAR_7, VAR_26, VAR_20);
  FUNC_11(VAR_17, VAR_3, VAR_16->regEndRowid, VAR_24, VAR_20);
  FUNC_2(VAR_17);

  if( VAR_16->eExclude==VAR_10 ){
    FUNC_11(VAR_17, VAR_1, VAR_18, VAR_23, VAR_20);
    FUNC_2(VAR_17);
  }else if( VAR_16->eExclude!=VAR_11 ){
    int VAR_27;
    int VAR_28 = 0;
    KeyInfo *VAR_29 = 0;

    if( VAR_16->pOrderBy ){
      VAR_29 = FUNC_7(VAR_15, VAR_16->pOrderBy, 0, 0);
    }
    if( VAR_16->eExclude==VAR_12 ){
      VAR_28 = FUNC_11(VAR_17, VAR_1, VAR_18, 0, VAR_20);
      FUNC_2(VAR_17);
    }
    if( VAR_29 ){
      FUNC_19(VAR_13, VAR_26, VAR_21);
      FUNC_11(VAR_17, VAR_0, VAR_21, VAR_19, VAR_22);
      FUNC_12(VAR_17, (void*)VAR_29, VAR_9);
      VAR_27 = FUNC_13(VAR_17)+1;
      FUNC_11(VAR_17, VAR_4, VAR_27, VAR_23, VAR_27);
      FUNC_1(VAR_17);
    }else{
      FUNC_10(VAR_17, VAR_2, 0, VAR_23);
    }
    if( VAR_28 ) FUNC_14(VAR_17, VAR_28);
  }

  FUNC_18(VAR_13, VAR_16, VAR_26, 0, VAR_13->regArg);

  FUNC_16(VAR_17, VAR_23);
  FUNC_10(VAR_17, VAR_5, VAR_26, VAR_25);
  FUNC_0(VAR_17);
  FUNC_14(VAR_17, VAR_25-1);
  FUNC_14(VAR_17, VAR_25+1);
  FUNC_9(VAR_15, VAR_20);
  FUNC_9(VAR_15, VAR_18);
  if( VAR_22 ){
    FUNC_8(VAR_15, VAR_21, VAR_22);
    FUNC_8(VAR_15, VAR_19, VAR_22);
  }

  FUNC_17(VAR_13, 1);
  FUNC_3((VAR_17, "windowFullScan end"));
}
