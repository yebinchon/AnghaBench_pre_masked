
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


typedef int sqlite3 ;
typedef int i16 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_25__ {int nCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_29__ {TYPE_2__* a; } ;
struct TYPE_28__ {int nKeyCol; int* aiColumn; } ;
struct TYPE_27__ {int nMem; int nTab; int * db; int * pVdbe; } ;
struct TYPE_26__ {TYPE_1__* a; } ;
struct TYPE_24__ {int * pExpr; } ;
struct TYPE_23__ {int iCursor; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Index ;
typedef TYPE_7__ ExprList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int VAR_19 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_6__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int ,int ,int,int,char const*,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_16 (TYPE_5__*,TYPE_4__*,int *,int ,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int*) ;

__attribute__((used)) static void FUNC_19(
  Parse *VAR_20,
  SrcList *VAR_21,
  Table *VAR_22,
  ExprList *VAR_23,
  Expr *VAR_24,
  int *VAR_25,
  Expr *VAR_26,
  int VAR_27
){
  Vdbe *VAR_28 = VAR_20->pVdbe;
  int VAR_29;
  int VAR_30;
  sqlite3 *VAR_31 = VAR_20->db;
  const char *VAR_32 = (const char*)FUNC_4(VAR_31, VAR_22);
  WhereInfo *VAR_33;
  int VAR_34 = 2 + VAR_22->nCol;
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38 = VAR_21->a[0].iCursor;
  int VAR_39[2];
  int VAR_40;
  int VAR_41;




  FUNC_2( *VAR_28 );
  VAR_29 = VAR_20->nTab++;
  VAR_41= FUNC_9(VAR_28, VAR_12, VAR_29, VAR_34);
  VAR_35 = VAR_20->nMem + 1;
  VAR_20->nMem += VAR_34;
  VAR_36 = ++VAR_20->nMem;
  VAR_37 = ++VAR_20->nMem;


  VAR_33 = FUNC_16(VAR_20, VAR_21, VAR_26, 0,0,VAR_19,0);
  if( VAR_33==0 ) return;


  for(VAR_30=0; VAR_30<VAR_22->nCol; VAR_30++){
    if( VAR_25[VAR_30]>=0 ){
      FUNC_3(VAR_20, VAR_23->a[VAR_25[VAR_30]].pExpr, VAR_35+2+VAR_30);
    }else{
      FUNC_10(VAR_28, VAR_16, VAR_38, VAR_30, VAR_35+2+VAR_30);
      FUNC_12(VAR_28, VAR_4);
    }
  }
  if( FUNC_0(VAR_22) ){
    FUNC_9(VAR_28, VAR_14, VAR_38, VAR_35);
    if( VAR_24 ){
      FUNC_3(VAR_20, VAR_24, VAR_35+1);
    }else{
      FUNC_9(VAR_28, VAR_14, VAR_38, VAR_35+1);
    }
  }else{
    Index *VAR_42;
    i16 VAR_43;
    VAR_42 = FUNC_7(VAR_22);
    FUNC_2( VAR_42!=0 );
    FUNC_2( VAR_42->nKeyCol==1 );
    VAR_43 = VAR_42->aiColumn[0];
    FUNC_10(VAR_28, VAR_16, VAR_38, VAR_43, VAR_35);
    FUNC_9(VAR_28, VAR_15, VAR_35+2+VAR_43, VAR_35+1);
  }

  VAR_40 = FUNC_18(VAR_33, VAR_39);


  FUNC_2( VAR_40==VAR_2 || VAR_40==VAR_3 );

  if( VAR_40 ){


    FUNC_13(VAR_28, VAR_41);
    FUNC_8(VAR_28, VAR_6, VAR_38);
  }else{


    FUNC_6(VAR_20);
    FUNC_10(VAR_28, VAR_9, VAR_35, VAR_34, VAR_36);





    FUNC_9(VAR_28, VAR_10, VAR_29, VAR_37);
    FUNC_10(VAR_28, VAR_8, VAR_29, VAR_36, VAR_37);
  }


  if( VAR_40==VAR_2 ){

    FUNC_17(VAR_33);


    VAR_41 = FUNC_8(VAR_28, VAR_13, VAR_29); FUNC_1(VAR_28);



    for(VAR_30=0; VAR_30<VAR_34; VAR_30++){
      FUNC_10(VAR_28, VAR_7, VAR_29, VAR_30, VAR_35+VAR_30);
    }
  }
  FUNC_15(VAR_20, VAR_22);
  FUNC_11(VAR_28, VAR_17, 0, VAR_34, VAR_35, VAR_32, VAR_18);
  FUNC_12(VAR_28, VAR_27==VAR_1 ? VAR_0 : VAR_27);
  FUNC_5(VAR_20);



  if( VAR_40==VAR_2 ){
    FUNC_9(VAR_28, VAR_11, VAR_29, VAR_41+1); FUNC_1(VAR_28);
    FUNC_14(VAR_28, VAR_41);
    FUNC_9(VAR_28, VAR_6, VAR_29, 0);
  }else{
    FUNC_17(VAR_33);
  }
}
