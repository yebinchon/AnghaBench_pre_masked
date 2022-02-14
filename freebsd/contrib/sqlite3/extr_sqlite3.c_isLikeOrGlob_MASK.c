
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3_value ;
struct TYPE_29__ {int flags; } ;
typedef TYPE_5__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_28__ {char* zToken; } ;
struct TYPE_27__ {int pTab; } ;
struct TYPE_25__ {TYPE_7__* pList; } ;
struct TYPE_32__ {int op; int iColumn; TYPE_4__ u; TYPE_3__ y; TYPE_1__ x; } ;
struct TYPE_31__ {TYPE_2__* a; } ;
struct TYPE_30__ {int * pVdbe; int * pReprepare; TYPE_5__* db; } ;
struct TYPE_26__ {TYPE_8__* pExpr; } ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ ExprList ;
typedef TYPE_8__ Expr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,double*,int,int ) ;
 TYPE_8__* FUNC_3 (TYPE_5__*,int,char*) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_8__*,int) ;
 int FUNC_6 (TYPE_5__*,TYPE_8__*) ;
 TYPE_8__* FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_8__*,int*,char*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int * FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int) ;
 scalar_t__* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(
  Parse *VAR_9,
  Expr *VAR_10,
  Expr **VAR_11,
  int *VAR_12,
  int *VAR_13
){
  const u8 *VAR_14 = 0;
  Expr *VAR_15, *VAR_16;
  ExprList *VAR_17;
  u8 VAR_18;
  int VAR_19;
  u8 VAR_20[4];
  sqlite3 *VAR_21 = VAR_9->db;
  sqlite3_value *VAR_22 = 0;
  int VAR_23;
  int VAR_24;

  if( !FUNC_9(VAR_21, VAR_10, VAR_13, (char*)VAR_20) ){
    return 0;
  }



  VAR_17 = VAR_10->x.pList;
  VAR_16 = VAR_17->a[1].pExpr;

  VAR_15 = FUNC_7(VAR_17->a[0].pExpr);
  VAR_23 = VAR_15->op;
  if( VAR_23==VAR_8 && (VAR_21->flags & VAR_2)==0 ){
    Vdbe *VAR_25 = VAR_9->pReprepare;
    int VAR_26 = VAR_15->iColumn;
    VAR_22 = FUNC_14(VAR_25, VAR_26, VAR_0);
    if( VAR_22 && FUNC_17(VAR_22)==VAR_3 ){
      VAR_14 = FUNC_16(VAR_22);
    }
    FUNC_15(VAR_9->pVdbe, VAR_26);
    FUNC_1( VAR_15->op==VAR_8 || VAR_15->op==VAR_6 );
  }else if( VAR_23==VAR_7 ){
    VAR_14 = (u8*)VAR_15->u.zToken;
  }
  if( VAR_14 ){


    VAR_19 = 0;
    while( (VAR_18=VAR_14[VAR_19])!=0 && VAR_18!=VAR_20[0] && VAR_18!=VAR_20[1] && VAR_18!=VAR_20[2] ){
      VAR_19++;
      if( VAR_18==VAR_20[3] && VAR_14[VAR_19]!=0 ) VAR_19++;
    }
    if( VAR_19!=0 && 255!=(u8)VAR_14[VAR_19-1] && (VAR_19>1 || VAR_14[0]!=VAR_20[3]) ){
      Expr *VAR_27;


      *VAR_12 = VAR_18==VAR_20[0] && VAR_14[VAR_19+1]==0;


      VAR_27 = FUNC_3(VAR_21, VAR_7, (char*)VAR_14);
      if( VAR_27 ){
        int VAR_28, VAR_29;
        char *VAR_30 = VAR_27->u.zToken;
        VAR_30[VAR_19] = 0;
        for(VAR_28=VAR_29=0; VAR_28<VAR_19; VAR_28++){
          if( VAR_30[VAR_28]==VAR_20[3] ) VAR_28++;
          VAR_30[VAR_29++] = VAR_30[VAR_28];
        }
        VAR_30[VAR_29] = 0;
        FUNC_1( VAR_29>0 );
        if( VAR_16->op!=VAR_5
         || FUNC_4(VAR_16)!=VAR_1
         || FUNC_0(VAR_16->y.pTab)
        ){
          int VAR_31;
          double VAR_32;
          VAR_31 = FUNC_2(VAR_30, &VAR_32, VAR_29, VAR_4);
          if( VAR_31<=0 ){
            if( VAR_29==1 && VAR_30[0]=='-' ){
              VAR_31 = +1;
            }else{
              VAR_30[VAR_29-1]++;
              VAR_31 = FUNC_2(VAR_30, &VAR_32, VAR_29, VAR_4);
              VAR_30[VAR_29-1]--;
            }
          }
          if( VAR_31>0 ){
            FUNC_6(VAR_21, VAR_27);
            FUNC_11(VAR_22);
            return 0;
          }
        }
      }
      *VAR_11 = VAR_27;



      if( VAR_23==VAR_8 ){
        Vdbe *VAR_33 = VAR_9->pVdbe;
        FUNC_15(VAR_33, VAR_15->iColumn);
        if( *VAR_12 && VAR_15->u.zToken[1] ){






          int VAR_34 = FUNC_8(VAR_9);
          FUNC_5(VAR_9, VAR_15, VAR_34);
          FUNC_12(VAR_33, FUNC_13(VAR_33)-1, 0);
          FUNC_10(VAR_9, VAR_34);
        }
      }
    }else{
      VAR_14 = 0;
    }
  }

  VAR_24 = (VAR_14!=0);
  FUNC_11(VAR_22);
  return VAR_24;
}
