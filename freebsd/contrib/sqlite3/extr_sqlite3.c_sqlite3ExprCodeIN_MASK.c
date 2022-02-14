
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_27__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_34__ {TYPE_4__* pList; } ;
struct TYPE_39__ {struct TYPE_39__* pLeft; TYPE_1__ x; } ;
struct TYPE_38__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_37__ {TYPE_27__* db; scalar_t__ nErr; int * pVdbe; } ;
struct TYPE_36__ {TYPE_5__* pExpr; } ;
struct TYPE_35__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;
typedef int CollSeq ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 char VAR_25 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int*) ;
 char* FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_27__*,...) ;
 scalar_t__ FUNC_9 (TYPE_27__*,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*,int*) ;
 int * FUNC_15 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_3__*,TYPE_5__*,int,int*,int*,int*) ;
 int FUNC_18 (TYPE_3__*,int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ,int,int) ;
 int FUNC_23 (int *,int ,int,int,int) ;
 int FUNC_24 (int *,int ,int,int,int,void*,int) ;
 int FUNC_25 (int *,int ,int,int,int,int) ;
 int FUNC_26 (int *,char) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (int *,int) ;
 TYPE_5__* FUNC_31 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_32(
  Parse *VAR_26,
  Expr *VAR_27,
  int VAR_28,
  int VAR_29
){
  int VAR_30 = 0;
  int VAR_31;
  int VAR_32;
  int VAR_33;
  Vdbe *VAR_34;
  int *VAR_35 = 0;
  char *VAR_36 = 0;
  int VAR_37;
  int VAR_38;
  Expr *VAR_39;
  int VAR_40;
  int VAR_41;
  int VAR_42 = 0;
  int VAR_43;
  int VAR_44;
  int VAR_45;
  int VAR_46 = 0;

  VAR_39 = VAR_27->pLeft;
  if( FUNC_12(VAR_26, VAR_27) ) return;
  VAR_36 = FUNC_7(VAR_26, VAR_27);
  VAR_37 = FUNC_16(VAR_27->pLeft);
  VAR_35 = (int*)FUNC_9(
      VAR_26->db, VAR_37*(sizeof(int) + sizeof(char)) + 1
  );
  if( VAR_26->db->mallocFailed ) goto sqlite3ExprCodeIN_oom_error;





  VAR_34 = VAR_26->pVdbe;
  FUNC_5( VAR_34!=0 );
  FUNC_4((VAR_34, "begin IN expr"));
  VAR_31 = FUNC_17(VAR_26, VAR_27,
                             VAR_4 | VAR_6,
                             VAR_28==VAR_29 ? 0 : &VAR_30,
                             VAR_35, &VAR_46);

  FUNC_5( VAR_26->nErr || VAR_37==1 || VAR_31==VAR_1
       || VAR_31==VAR_2 || VAR_31==VAR_3
  );
  VAR_33 = FUNC_6(VAR_26, VAR_39, &VAR_38);
  for(VAR_40=0; VAR_40<VAR_37 && VAR_35[VAR_40]==VAR_40; VAR_40++){}
  if( VAR_40==VAR_37 ){

    VAR_32 = VAR_33;
  }else{

    VAR_32 = FUNC_18(VAR_26, VAR_37);
    for(VAR_40=0; VAR_40<VAR_37; VAR_40++){
      FUNC_23(VAR_34, VAR_11, VAR_33+VAR_40, VAR_32+VAR_35[VAR_40], 0);
    }
  }







  if( VAR_31==VAR_5 ){
    ExprList *VAR_47 = VAR_27->x.pList;
    CollSeq *VAR_48 = FUNC_15(VAR_26, VAR_27->pLeft);
    int VAR_49 = FUNC_29(VAR_26);
    int VAR_50, VAR_51;
    int VAR_52 = 0;
    int VAR_53;
    int VAR_54;
    FUNC_5( !FUNC_0(VAR_27, VAR_0) );
    if( VAR_29!=VAR_28 ){
      VAR_52 = FUNC_19(VAR_26);
      FUNC_23(VAR_34, VAR_9, VAR_32, VAR_32, VAR_52);
    }
    VAR_54 = FUNC_10(VAR_27->pLeft)==VAR_24;
    for(VAR_53=0; VAR_53<VAR_47->nExpr; VAR_53++){
      if( VAR_54 ){
        VAR_50 = VAR_51 = FUNC_19(VAR_26);
        FUNC_13(VAR_26, VAR_47->a[VAR_53].pExpr, VAR_50);
        FUNC_24(VAR_34, VAR_8, VAR_50, 1, 0, "E", VAR_23);
      }else{
        VAR_50 = FUNC_14(VAR_26, VAR_47->a[VAR_53].pExpr, &VAR_51);
      }
      if( VAR_52 && FUNC_11(VAR_47->a[VAR_53].pExpr) ){
        FUNC_23(VAR_34, VAR_9, VAR_52, VAR_50, VAR_52);
      }
      if( VAR_53<VAR_47->nExpr-1 || VAR_29!=VAR_28 ){
        FUNC_24(VAR_34, VAR_12, VAR_32, VAR_49, VAR_50,
                          (void*)VAR_48, VAR_22);
        FUNC_3(VAR_34, VAR_53<VAR_47->nExpr-1);
        FUNC_3(VAR_34, VAR_53==VAR_47->nExpr-1);
        FUNC_26(VAR_34, VAR_36[0]);
      }else{
        FUNC_5( VAR_29==VAR_28 );
        FUNC_24(VAR_34, VAR_16, VAR_32, VAR_28, VAR_50,
                          (void*)VAR_48, VAR_22); FUNC_2(VAR_34);
        FUNC_26(VAR_34, VAR_36[0] | VAR_25);
      }
      FUNC_20(VAR_26, VAR_51);
    }
    if( VAR_52 ){
      FUNC_22(VAR_34, VAR_15, VAR_52, VAR_29); FUNC_2(VAR_34);
      FUNC_27(VAR_34, VAR_28);
    }
    FUNC_30(VAR_34, VAR_49);
    FUNC_20(VAR_26, VAR_52);
    goto sqlite3ExprCodeIN_finished;
  }





  if( VAR_29==VAR_28 ){
    VAR_41 = VAR_28;
  }else{
    VAR_41 = VAR_42 = FUNC_29(VAR_26);
  }
  for(VAR_40=0; VAR_40<VAR_37; VAR_40++){
    Expr *VAR_55 = FUNC_31(VAR_27->pLeft, VAR_40);
    if( FUNC_11(VAR_55) ){
      FUNC_22(VAR_34, VAR_15, VAR_32+VAR_40, VAR_41);
      FUNC_2(VAR_34);
    }
  }





  if( VAR_31==VAR_7 ){



    FUNC_23(VAR_34, VAR_21, VAR_46, VAR_28, VAR_32);
    FUNC_2(VAR_34);
    VAR_43 = FUNC_21(VAR_34, VAR_14);
  }else{
    FUNC_24(VAR_34, VAR_8, VAR_32, VAR_37, 0, VAR_36, VAR_37);
    if( VAR_28==VAR_29 ){

      FUNC_25(VAR_34, VAR_18, VAR_46, VAR_28,
                           VAR_32, VAR_37); FUNC_2(VAR_34);
      goto sqlite3ExprCodeIN_finished;
    }

    VAR_43 = FUNC_25(VAR_34, VAR_13, VAR_46, 0,
                                      VAR_32, VAR_37); FUNC_2(VAR_34);
  }




  if( VAR_30 && VAR_37==1 ){
    FUNC_22(VAR_34, VAR_19, VAR_30, VAR_28);
    FUNC_2(VAR_34);
  }




  if( VAR_28==VAR_29 ) FUNC_27(VAR_34, VAR_28);
  if( VAR_42 ) FUNC_30(VAR_34, VAR_42);
  VAR_45 = FUNC_22(VAR_34, VAR_20, VAR_46, VAR_28);
  FUNC_2(VAR_34);
  if( VAR_37>1 ){
    VAR_44 = FUNC_29(VAR_26);
  }else{


    VAR_44 = VAR_28;
  }
  for(VAR_40=0; VAR_40<VAR_37; VAR_40++){
    Expr *VAR_56;
    CollSeq *VAR_57;
    int VAR_58 = FUNC_19(VAR_26);
    VAR_56 = FUNC_31(VAR_39, VAR_40);
    VAR_57 = FUNC_15(VAR_26, VAR_56);
    FUNC_23(VAR_34, VAR_10, VAR_46, VAR_40, VAR_58);
    FUNC_24(VAR_34, VAR_16, VAR_32+VAR_40, VAR_44, VAR_58,
                      (void*)VAR_57, VAR_22);
    FUNC_2(VAR_34);
    FUNC_20(VAR_26, VAR_58);
  }
  FUNC_22(VAR_34, VAR_14, 0, VAR_29);
  if( VAR_37>1 ){
    FUNC_30(VAR_34, VAR_44);
    FUNC_22(VAR_34, VAR_17, VAR_46, VAR_45+1);
    FUNC_2(VAR_34);



    FUNC_22(VAR_34, VAR_14, 0, VAR_28);
  }


  FUNC_28(VAR_34, VAR_43);

sqlite3ExprCodeIN_finished:
  if( VAR_32!=VAR_33 ) FUNC_20(VAR_26, VAR_32);
  FUNC_1((VAR_34, "end IN expr"));
sqlite3ExprCodeIN_oom_error:
  FUNC_8(VAR_26->db, VAR_35);
  FUNC_8(VAR_26->db, VAR_36);
}
