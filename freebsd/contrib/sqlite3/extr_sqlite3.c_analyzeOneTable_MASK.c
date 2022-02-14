
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_36__ {scalar_t__ xPreUpdateCallback; TYPE_1__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_37__ {char* zName; int nCol; int iPKey; TYPE_2__* aCol; TYPE_6__* pIndex; int tnum; int pSchema; } ;
typedef TYPE_4__ Table ;
struct TYPE_39__ {scalar_t__ pPartIdxWhere; int nKeyCol; int nColumn; char* zName; int tnum; size_t* aiColumn; int pTable; int * azColl; int pSchema; scalar_t__ uniqNotNull; struct TYPE_39__* pNext; } ;
struct TYPE_38__ {void* nMem; void* nTab; int * pVdbe; TYPE_3__* db; } ;
struct TYPE_35__ {int zName; } ;
struct TYPE_34__ {int zDbSName; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Index ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 void* FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
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
 int VAR_24 ;
 int VAR_25 ;
 char VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int,int ,int) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ,char*,int ,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_6__*,size_t) ;
 int FUNC_13 (TYPE_3__*,int*) ;
 int* FUNC_14 (TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_5__*,TYPE_6__*,int,int,int) ;
 int FUNC_17 (TYPE_5__*,int) ;
 int * FUNC_18 (TYPE_5__*) ;
 scalar_t__ FUNC_19 (TYPE_5__*,int ) ;
 int FUNC_20 (TYPE_5__*,int,int,TYPE_4__*,int ) ;
 TYPE_6__* FUNC_21 (int ) ;
 int FUNC_22 (TYPE_5__*,int,int) ;
 int FUNC_23 (TYPE_3__*,int,int ) ;
 int FUNC_24 (TYPE_3__*,int ) ;
 int FUNC_25 (TYPE_5__*,int,int ,int ,char*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int ,int) ;
 int FUNC_28 (int *,int ,int,int) ;
 int FUNC_29 (int *,int ,int,int,int) ;
 int FUNC_30 (int *,int ,int,int,int,char*,int ) ;
 int FUNC_31 (int *,int,int,int,int,int ) ;
 int FUNC_32 (int *,int,char*,int ) ;
 int FUNC_33 (int *,scalar_t__) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,int) ;
 int FUNC_36 (int *,int) ;
 int FUNC_37 (int *,int,char const*) ;
 int FUNC_38 (TYPE_5__*) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_41 (char*,char*,char) ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static void FUNC_42(
  Parse *VAR_36,
  Table *VAR_37,
  Index *VAR_38,
  int VAR_39,
  int VAR_40,
  int VAR_41
){
  sqlite3 *VAR_42 = VAR_36->db;
  Index *VAR_43;
  int VAR_44;
  int VAR_45;
  Vdbe *VAR_46;
  int VAR_47;
  int VAR_48 = -1;
  int VAR_49;
  u8 VAR_50 = 1;
  int VAR_51 = VAR_40++;
  int VAR_52 = VAR_40++;
  int VAR_53 = VAR_40++;



  int VAR_54 = VAR_40++;
  int VAR_55 = VAR_40++;
  int VAR_56 = VAR_40++;
  int VAR_57 = VAR_40++;
  int VAR_58 = VAR_40;




  VAR_36->nMem = FUNC_3(VAR_36->nMem, VAR_40);
  VAR_46 = FUNC_18(VAR_36);
  if( VAR_46==0 || FUNC_4(VAR_37==0) ){
    return;
  }
  if( VAR_37->tnum==0 ){

    return;
  }
  if( FUNC_41("sqlite\\_%", VAR_37->zName, '\\')==0 ){

    return;
  }
  FUNC_7( FUNC_11(VAR_42) );
  VAR_49 = FUNC_24(VAR_42, VAR_37->pSchema);
  FUNC_7( VAR_49>=0 );
  FUNC_7( FUNC_23(VAR_42, VAR_49, 0) );

  if( FUNC_10(VAR_36, VAR_27, VAR_37->zName, 0,
      VAR_42->aDb[VAR_49].zDbSName ) ){
    return;
  }
  FUNC_25(VAR_36, VAR_49, VAR_37->tnum, 0, VAR_37->zName);
  VAR_45 = VAR_41++;
  VAR_44 = VAR_41++;
  VAR_36->nTab = FUNC_3(VAR_36->nTab, VAR_41);
  FUNC_20(VAR_36, VAR_45, VAR_49, VAR_37, VAR_20);
  FUNC_37(VAR_46, VAR_55, VAR_37->zName);

  for(VAR_43=VAR_37->pIndex; VAR_43; VAR_43=VAR_43->pNext){
    int VAR_59;
    int VAR_60;
    int VAR_61;
    const char *VAR_62;
    int VAR_63;

    if( VAR_38 && VAR_38!=VAR_43 ) continue;
    if( VAR_43->pPartIdxWhere==0 ) VAR_50 = 0;
    if( !FUNC_0(VAR_37) && FUNC_1(VAR_43) ){
      VAR_59 = VAR_43->nKeyCol;
      VAR_62 = VAR_37->zName;
      VAR_63 = VAR_59 - 1;
    }else{
      VAR_59 = VAR_43->nColumn;
      VAR_62 = VAR_43->zName;
      VAR_63 = VAR_43->uniqNotNull ? VAR_43->nKeyCol-1 : VAR_59-1;
    }


    FUNC_37(VAR_46, VAR_56, VAR_62);
    FUNC_5((VAR_46, "Analysis for %s.%s", VAR_37->zName, VAR_62));
    VAR_36->nMem = FUNC_3(VAR_36->nMem, VAR_58+VAR_63);


    FUNC_7( VAR_49==FUNC_24(VAR_42, VAR_43->pSchema) );
    FUNC_29(VAR_46, VAR_20, VAR_44, VAR_43->tnum, VAR_49);
    FUNC_40(VAR_36, VAR_43);
    FUNC_5((VAR_46, "%s", VAR_43->zName));
    FUNC_28(VAR_46, VAR_9, VAR_59, VAR_52+1);
    FUNC_28(VAR_46, VAR_9, VAR_43->nKeyCol, VAR_52+2);
    FUNC_30(VAR_46, VAR_4, 0, VAR_52+1, VAR_52,
                     (char*)&VAR_34, VAR_24);
    FUNC_33(VAR_46, 2+VAR_0);
    VAR_60 = FUNC_27(VAR_46, VAR_21, VAR_44);
    FUNC_6(VAR_46);
    FUNC_28(VAR_46, VAR_9, 0, VAR_53);
    VAR_61 = FUNC_34(VAR_46);

    if( VAR_63>0 ){
      int VAR_64 = FUNC_38(VAR_36);
      int *VAR_65;
      VAR_65 = FUNC_14(VAR_42, sizeof(int)*VAR_63);
      if( VAR_65==0 ) continue;
      FUNC_26(VAR_46, VAR_5);
      VAR_61 = FUNC_34(VAR_46);
      if( VAR_63==1 && VAR_43->nKeyCol==1 && FUNC_2(VAR_43) ){



        FUNC_28(VAR_46, VAR_18, VAR_58, VAR_64);
        FUNC_6(VAR_46);
      }
      for(VAR_47=0; VAR_47<VAR_63; VAR_47++){
        char *VAR_66 = (char*)FUNC_19(VAR_36, VAR_43->azColl[VAR_47]);
        FUNC_28(VAR_46, VAR_9, VAR_47, VAR_53);
        FUNC_29(VAR_46, VAR_2, VAR_44, VAR_47, VAR_54);
        VAR_65[VAR_47] =
        FUNC_30(VAR_46, VAR_12, VAR_54, 0, VAR_58+VAR_47, VAR_66, VAR_22);
        FUNC_33(VAR_46, VAR_28);
        FUNC_6(VAR_46);
      }
      FUNC_28(VAR_46, VAR_9, VAR_63, VAR_53);
      FUNC_35(VAR_46, VAR_64);
      FUNC_36(VAR_46, VAR_61-1);
      for(VAR_47=0; VAR_47<VAR_63; VAR_47++){
        FUNC_36(VAR_46, VAR_65[VAR_47]);
        FUNC_29(VAR_46, VAR_2, VAR_44, VAR_47, VAR_58+VAR_47);
      }
      FUNC_39(VAR_46, VAR_64);
      FUNC_13(VAR_42, VAR_65);
    }
    FUNC_7( VAR_53==(VAR_52+1) );
    FUNC_30(VAR_46, VAR_4, 1, VAR_52, VAR_54,
                     (char*)&VAR_35, VAR_24);
    FUNC_33(VAR_46, 2+VAR_0);
    FUNC_28(VAR_46, VAR_14, VAR_44, VAR_61); FUNC_6(VAR_46);


    FUNC_8(VAR_46, VAR_52, VAR_33, VAR_57);
    FUNC_7( "BBB"[0]==VAR_26 );
    FUNC_30(VAR_46, VAR_11, VAR_55, 3, VAR_54, "BBB", 0);
    FUNC_28(VAR_46, VAR_13, VAR_39, VAR_51);
    FUNC_29(VAR_46, VAR_8, VAR_39, VAR_54, VAR_51);



    FUNC_33(VAR_46, VAR_1);
    FUNC_36(VAR_46, VAR_60);
  }





  if( VAR_38==0 && VAR_50 ){
    FUNC_5((VAR_46, "%s", VAR_37->zName));
    FUNC_28(VAR_46, VAR_3, VAR_45, VAR_57);
    VAR_48 = FUNC_27(VAR_46, VAR_7, VAR_57); FUNC_6(VAR_46);
    FUNC_28(VAR_46, VAR_19, 0, VAR_56);
    FUNC_7( "BBB"[0]==VAR_26 );
    FUNC_30(VAR_46, VAR_11, VAR_55, 3, VAR_54, "BBB", 0);
    FUNC_28(VAR_46, VAR_13, VAR_39, VAR_51);
    FUNC_29(VAR_46, VAR_8, VAR_39, VAR_54, VAR_51);
    FUNC_33(VAR_46, VAR_1);



    FUNC_36(VAR_46, VAR_48);
  }
}
