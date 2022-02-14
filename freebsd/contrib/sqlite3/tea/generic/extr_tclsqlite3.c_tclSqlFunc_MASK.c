
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int sqlite_int64 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Tcl_WideInt ;
struct TYPE_28__ {scalar_t__ bytes; TYPE_2__* typePtr; } ;
typedef TYPE_3__ Tcl_Obj ;
struct TYPE_29__ {int eType; int interp; int useEvalObjv; TYPE_1__* pDb; TYPE_3__* pScript; } ;
struct TYPE_27__ {char* name; } ;
struct TYPE_26__ {char* zNull; } ;
typedef TYPE_4__ SqlFunc ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 unsigned char* FUNC_2 (TYPE_3__*,int*) ;
 int FUNC_3 (int ,TYPE_3__*,double*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_3__*,int*,TYPE_3__***) ;
 TYPE_3__* FUNC_12 (int ,int) ;
 TYPE_3__* FUNC_13 (double) ;
 TYPE_3__* FUNC_14 (int) ;
 TYPE_3__* FUNC_15 (int,TYPE_3__**) ;
 TYPE_3__* FUNC_16 (char*,int) ;
 TYPE_3__* FUNC_17 (int) ;
 int FUNC_18 (int *,unsigned char*,int,int ) ;
 int FUNC_19 (int *,double) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,char*,int,int ) ;
 TYPE_4__* FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 double FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (char const*,char*) ;

__attribute__((used)) static void FUNC_31(sqlite3_context *VAR_5, int VAR_6, sqlite3_value**VAR_7){
  SqlFunc *VAR_8 = FUNC_23(VAR_5);
  Tcl_Obj *VAR_9;
  int VAR_10;
  int VAR_11;

  if( VAR_6==0 ){




    VAR_9 = VAR_8->pScript;
    FUNC_9(VAR_9);
    VAR_11 = FUNC_1(VAR_8->interp, VAR_9, 0);
    FUNC_0(VAR_9);
  }else{
    Tcl_Obj **VAR_12;
    int VAR_13;
    if( FUNC_11(VAR_8->interp, VAR_8->pScript, &VAR_13, &VAR_12) ){
      FUNC_20(VAR_5, FUNC_7(VAR_8->interp), -1);
      return;
    }
    VAR_9 = FUNC_15(VAR_13, VAR_12);
    FUNC_9(VAR_9);
    for(VAR_10=0; VAR_10<VAR_6; VAR_10++){
      sqlite3_value *VAR_14 = VAR_7[VAR_10];
      Tcl_Obj *VAR_15;


      switch( FUNC_29(VAR_14) ){
        case 131: {
          int VAR_16 = FUNC_25(VAR_14);
          VAR_15 = FUNC_12(FUNC_24(VAR_14), VAR_16);
          break;
        }
        case 129: {
          sqlite_int64 VAR_17 = FUNC_27(VAR_14);
          if( VAR_17>=-2147483647 && VAR_17<=2147483647 ){
            VAR_15 = FUNC_14((int)VAR_17);
          }else{
            VAR_15 = FUNC_17(VAR_17);
          }
          break;
        }
        case 130: {
          double VAR_18 = FUNC_26(VAR_14);
          VAR_15 = FUNC_13(VAR_18);
          break;
        }
        case 128: {
          VAR_15 = FUNC_16(VAR_8->pDb->zNull, -1);
          break;
        }
        default: {
          int VAR_19 = FUNC_25(VAR_14);
          VAR_15 = FUNC_16((char *)FUNC_28(VAR_14), VAR_19);
          break;
        }
      }
      VAR_11 = FUNC_10(VAR_8->interp, VAR_9, VAR_15);
      if( VAR_11 ){
        FUNC_0(VAR_9);
        FUNC_20(VAR_5, FUNC_7(VAR_8->interp), -1);
        return;
      }
    }
    if( !VAR_8->useEvalObjv ){



      FUNC_5(VAR_9);
    }
    VAR_11 = FUNC_1(VAR_8->interp, VAR_9, VAR_2);
    FUNC_0(VAR_9);
  }

  if( VAR_11 && VAR_11!=VAR_4 ){
    FUNC_20(VAR_5, FUNC_7(VAR_8->interp), -1);
  }else{
    Tcl_Obj *VAR_20 = FUNC_4(VAR_8->interp);
    int VAR_21;
    u8 *VAR_22;
    const char *VAR_23 = (VAR_20->typePtr ? VAR_20->typePtr->name : "");
    char VAR_24 = VAR_23[0];
    int VAR_25 = VAR_8->eType;

    if( VAR_25==128 ){
      if( VAR_24=='b' && FUNC_30(VAR_23,"bytearray")==0 && VAR_20->bytes==0 ){


        VAR_25 = 131;
      }else if( (VAR_24=='b' && FUNC_30(VAR_23,"boolean")==0)
             || (VAR_24=='w' && FUNC_30(VAR_23,"wideInt")==0)
             || (VAR_24=='i' && FUNC_30(VAR_23,"int")==0)
      ){
        VAR_25 = 129;
      }else if( VAR_24=='d' && FUNC_30(VAR_23,"double")==0 ){
        VAR_25 = 130;
      }else{
        VAR_25 = VAR_0;
      }
    }

    switch( VAR_25 ){
      case 131: {
        VAR_22 = FUNC_2(VAR_20, &VAR_21);
        FUNC_18(VAR_5, VAR_22, VAR_21, VAR_1);
        break;
      }
      case 129: {
        Tcl_WideInt VAR_26;
        if( VAR_3==FUNC_8(0, VAR_20, &VAR_26) ){
          FUNC_21(VAR_5, VAR_26);
          break;
        }

      }
      case 130: {
        double VAR_27;
        if( VAR_3==FUNC_3(0, VAR_20, &VAR_27) ){
          FUNC_19(VAR_5, VAR_27);
          break;
        }

      }
      default: {
        VAR_22 = (unsigned char *)FUNC_6(VAR_20, &VAR_21);
        FUNC_22(VAR_5, (char *)VAR_22, VAR_21, VAR_1);
        break;
      }
    }

  }
}
