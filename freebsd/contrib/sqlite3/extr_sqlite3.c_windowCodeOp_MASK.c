
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int csr; int reg; } ;
struct TYPE_15__ {int csr; int reg; } ;
struct TYPE_14__ {int csr; int reg; } ;
struct TYPE_17__ {int eDelete; int regArg; TYPE_3__ end; TYPE_2__ start; TYPE_1__ current; int * pVdbe; TYPE_5__* pMWin; int * pParse; } ;
typedef TYPE_4__ WindowCodeArg ;
struct TYPE_18__ {scalar_t__ eFrmType; scalar_t__ eStart; scalar_t__ regStartRowid; scalar_t__ eEnd; int regEndRowid; TYPE_8__* pOrderBy; } ;
typedef TYPE_5__ Window ;
typedef int Vdbe ;
struct TYPE_19__ {int nExpr; } ;
typedef int Parse ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;

 int VAR_15 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*,int,int,int ) ;
 int FUNC_16 (TYPE_4__*,int ,int,int,int,int) ;
 int FUNC_17 (int *,TYPE_8__*,int,int,int) ;
 int FUNC_18 (TYPE_4__*,int,int) ;
 int FUNC_19 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_20(
 WindowCodeArg *VAR_16,
 int VAR_17,
 int VAR_18,
 int VAR_19
){
  int VAR_20, VAR_21;
  Parse *VAR_22 = VAR_16->pParse;
  Window *VAR_23 = VAR_16->pMWin;
  int VAR_24 = 0;
  Vdbe *VAR_25 = VAR_16->pVdbe;
  int VAR_26 = 0;
  int VAR_27 = (VAR_23->eFrmType!=VAR_13);

  int VAR_28 = FUNC_12(VAR_22);
  int VAR_29 = 0;



  if( VAR_17==129 && VAR_23->eStart==VAR_14 ){
    FUNC_1( VAR_18==0 && VAR_19==0 );
    return 0;
  }

  if( VAR_18>0 ){
    if( VAR_23->eFrmType==VAR_12 ){
      VAR_29 = FUNC_11(VAR_25);
      FUNC_1( VAR_17==129 || VAR_17==VAR_15 );
      if( VAR_17==129 ){
        if( VAR_23->eStart==VAR_10 ){
          FUNC_16(
              VAR_16, VAR_7, VAR_16->current.csr, VAR_18, VAR_16->start.csr, VAR_28
          );
        }else{
          FUNC_16(
              VAR_16, VAR_3, VAR_16->start.csr, VAR_18, VAR_16->current.csr, VAR_28
          );
        }
      }else{
        FUNC_16(
            VAR_16, VAR_5, VAR_16->end.csr, VAR_18, VAR_16->current.csr, VAR_28
        );
      }
    }else{
      FUNC_9(VAR_25, VAR_6, VAR_18, VAR_28, 1);
      FUNC_0(VAR_25);
    }
  }

  if( VAR_17==128 && VAR_23->regStartRowid==0 ){
    FUNC_14(VAR_16, 0);
  }
  VAR_26 = FUNC_11(VAR_25);





  if( VAR_23->eStart==VAR_23->eEnd && VAR_18
   && VAR_23->eFrmType==VAR_12 && VAR_17==129
  ){
    int VAR_30 = FUNC_3(VAR_22);
    int VAR_31 = FUNC_3(VAR_22);
    FUNC_8(VAR_25, VAR_9, VAR_16->start.csr, VAR_30);
    FUNC_8(VAR_25, VAR_9, VAR_16->end.csr, VAR_31);
    FUNC_9(VAR_25, VAR_3, VAR_31, VAR_28, VAR_30);
    FUNC_0(VAR_25);
    FUNC_5(VAR_22, VAR_30);
    FUNC_5(VAR_22, VAR_31);
    FUNC_1( VAR_23->eStart==VAR_11 || VAR_23->eStart==VAR_10 );
  }

  switch( VAR_17 ){
    case 128:
      VAR_20 = VAR_16->current.csr;
      VAR_21 = VAR_16->current.reg;
      FUNC_19(VAR_16);
      break;

    case 129:
      VAR_20 = VAR_16->start.csr;
      VAR_21 = VAR_16->start.reg;
      if( VAR_23->regStartRowid ){
        FUNC_1( VAR_23->regEndRowid );
        FUNC_8(VAR_25, VAR_1, VAR_23->regStartRowid, 1);
      }else{
        FUNC_15(VAR_16, VAR_23, VAR_20, 1, VAR_16->regArg);
      }
      break;

    default:
      FUNC_1( VAR_17==VAR_15 );
      VAR_20 = VAR_16->end.csr;
      VAR_21 = VAR_16->end.reg;
      if( VAR_23->regStartRowid ){
        FUNC_1( VAR_23->regEndRowid );
        FUNC_8(VAR_25, VAR_1, VAR_23->regEndRowid, 1);
      }else{
        FUNC_15(VAR_16, VAR_23, VAR_20, 0, VAR_16->regArg);
      }
      break;
  }

  if( VAR_17==VAR_16->eDelete ){
    FUNC_7(VAR_25, VAR_2, VAR_20);
    FUNC_10(VAR_25, VAR_0);
  }

  if( VAR_19 ){
    FUNC_8(VAR_25, VAR_8, VAR_20, FUNC_11(VAR_25)+2);
    FUNC_0(VAR_25);
    VAR_24 = FUNC_6(VAR_25, VAR_4);
  }else{
    FUNC_8(VAR_25, VAR_8, VAR_20, FUNC_11(VAR_25)+1+VAR_27);
    FUNC_0(VAR_25);
    if( VAR_27 ){
      FUNC_8(VAR_25, VAR_4, 0, VAR_28);
    }
  }

  if( VAR_27 ){
    int VAR_32 = (VAR_23->pOrderBy ? VAR_23->pOrderBy->nExpr : 0);
    int VAR_33 = (VAR_32 ? FUNC_2(VAR_22, VAR_32) : 0);
    FUNC_18(VAR_16, VAR_20, VAR_33);
    FUNC_17(VAR_22, VAR_23->pOrderBy, VAR_33, VAR_21, VAR_26);
    FUNC_4(VAR_22, VAR_33, VAR_32);
  }

  if( VAR_29 ){
    FUNC_8(VAR_25, VAR_4, 0, VAR_29);
  }
  FUNC_13(VAR_25, VAR_28);
  return VAR_24;
}
