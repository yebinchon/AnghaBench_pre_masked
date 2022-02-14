
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* pMWin; TYPE_4__* pParse; } ;
typedef TYPE_3__ WindowCodeArg ;
typedef int Vdbe ;
struct TYPE_15__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_14__ {int nMem; } ;
struct TYPE_12__ {int sortFlags; } ;
struct TYPE_11__ {TYPE_5__* pOrderBy; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int,int,int,int) ;
 int FUNC_10 (int *,int ,int ,int,int ,char*,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_17(
  WindowCodeArg *VAR_11,
  int VAR_12,
  int VAR_13,
  int VAR_14,
  int VAR_15,
  int VAR_16
){
  Parse *VAR_17 = VAR_11->pParse;
  Vdbe *VAR_18 = FUNC_5(VAR_17);
  ExprList *VAR_19 = VAR_11->pMWin->pOrderBy;
  int VAR_20 = FUNC_4(VAR_17);
  int VAR_21 = FUNC_4(VAR_17);
  int VAR_22 = ++VAR_17->nMem;
  int VAR_23 = VAR_2;
  int VAR_24;

  FUNC_3( VAR_12==130 || VAR_12==129 || VAR_12==128 );
  FUNC_3( VAR_19 && VAR_19->nExpr==1 );
  if( VAR_19->a[0].sortFlags & VAR_1 ){
    switch( VAR_12 ){
      case 130: VAR_12 = 128; break;
      case 129: VAR_12 = VAR_5; break;
      default: FUNC_3( VAR_12==128 ); VAR_12 = 130; break;
    }
    VAR_23 = VAR_8;
  }


  FUNC_16(VAR_11, VAR_13, VAR_20);
  FUNC_16(VAR_11, VAR_15, VAR_21);

  FUNC_2((VAR_18, "CodeRangeTest: if( R%d %s R%d %s R%d ) goto lbl",
      VAR_20, (VAR_23==VAR_2 ? "+" : "-"), VAR_14,
      ((VAR_12==130) ? ">=" : (VAR_12==128) ? "<=" : (VAR_12==129) ? ">" : "<"), VAR_21
  ));
  FUNC_10(VAR_18, VAR_7, 0, VAR_22, 0, "", VAR_9);
  VAR_24 = FUNC_9(VAR_18, 130, VAR_22, 0, VAR_20);
  FUNC_0(VAR_18);
  FUNC_9(VAR_18, VAR_23, VAR_14, VAR_20, VAR_20);
  FUNC_14(VAR_18, VAR_24);
  if( VAR_19->a[0].sortFlags & VAR_0 ){

    int VAR_25 = FUNC_7(VAR_18, VAR_6, VAR_20); FUNC_0(VAR_18);
    switch( VAR_12 ){
      case 130:
        FUNC_8(VAR_18, VAR_3, 0, VAR_16);
        break;
      case 129:
        FUNC_8(VAR_18, VAR_6, VAR_21, VAR_16);
        FUNC_0(VAR_18);
        break;
      case 128:
        FUNC_8(VAR_18, VAR_4, VAR_21, VAR_16);
        FUNC_0(VAR_18);
        break;
      default: FUNC_3( VAR_12==VAR_5 ); break;
    }
    FUNC_8(VAR_18, VAR_3, 0, FUNC_13(VAR_18)+3);


    FUNC_14(VAR_18, VAR_25);
    FUNC_8(VAR_18, VAR_4, VAR_21, VAR_16); FUNC_0(VAR_18);
    if( VAR_12==129 || VAR_12==130 ){
      FUNC_11(VAR_18, -1, FUNC_13(VAR_18)+1);
    }
  }




  FUNC_9(VAR_18, VAR_12, VAR_21, VAR_16, VAR_20); FUNC_0(VAR_18);
  FUNC_12(VAR_18, VAR_10);

  FUNC_3( VAR_12==130 || VAR_12==129 || VAR_12==VAR_5 || VAR_12==128 );
  FUNC_15(VAR_12==130); FUNC_1(VAR_18, VAR_12==130);
  FUNC_15(VAR_12==VAR_5); FUNC_1(VAR_18, VAR_12==VAR_5);
  FUNC_15(VAR_12==128); FUNC_1(VAR_18, VAR_12==128);
  FUNC_15(VAR_12==129); FUNC_1(VAR_18, VAR_12==129);
  FUNC_6(VAR_17, VAR_20);
  FUNC_6(VAR_17, VAR_21);

  FUNC_2((VAR_18, "CodeRangeTest: end"));
}
