
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int flags; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_22__ {int iPKey; int nCol; int zName; TYPE_2__* aCol; } ;
typedef TYPE_5__ Table ;
struct TYPE_18__ {TYPE_5__* pTab; } ;
struct TYPE_26__ {scalar_t__ op; int iColumn; TYPE_1__ y; } ;
struct TYPE_25__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_24__ {int colNamesSet; scalar_t__ explain; TYPE_4__* db; int * pVdbe; } ;
struct TYPE_23__ {TYPE_8__* pEList; int * pSrc; struct TYPE_23__* pPrior; } ;
struct TYPE_20__ {char* zName; char* zSpan; TYPE_9__* pExpr; } ;
struct TYPE_19__ {char* zName; } ;
typedef int SrcList ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_7__*,TYPE_6__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int *,TYPE_8__*) ;
 void* FUNC_3 (TYPE_4__*,char const*) ;
 void* FUNC_4 (TYPE_4__*,char*,int,...) ;
 int FUNC_5 (int *,int,int ,char const*,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(
  Parse *VAR_7,
  Select *VAR_8
){
  Vdbe *VAR_9 = VAR_7->pVdbe;
  int VAR_10;
  Table *VAR_11;
  SrcList *VAR_12;
  ExprList *VAR_13;
  sqlite3 *VAR_14 = VAR_7->db;
  int VAR_15;
  int VAR_16;



  if( VAR_7->explain ){
    return;
  }


  if( VAR_7->colNamesSet ) return;

  while( VAR_8->pPrior ) VAR_8 = VAR_8->pPrior;
  FUNC_0(1,VAR_7,VAR_8,("generating column names\n"));
  VAR_12 = VAR_8->pSrc;
  VAR_13 = VAR_8->pEList;
  FUNC_1( VAR_9!=0 );
  FUNC_1( VAR_12!=0 );
  VAR_7->colNamesSet = 1;
  VAR_15 = (VAR_14->flags & VAR_2)!=0;
  VAR_16 = (VAR_14->flags & VAR_3)!=0 || VAR_15;
  FUNC_6(VAR_9, VAR_13->nExpr);
  for(VAR_10=0; VAR_10<VAR_13->nExpr; VAR_10++){
    Expr *VAR_17 = VAR_13->a[VAR_10].pExpr;

    FUNC_1( VAR_17!=0 );
    FUNC_1( VAR_17->op!=VAR_5 );
    FUNC_1( VAR_17->op!=VAR_6 || VAR_17->y.pTab!=0 );
    if( VAR_13->a[VAR_10].zName ){

      char *VAR_18 = VAR_13->a[VAR_10].zName;
      FUNC_5(VAR_9, VAR_10, VAR_0, VAR_18, VAR_4);
    }else if( VAR_16 && VAR_17->op==VAR_6 ){
      char *VAR_19;
      int VAR_20 = VAR_17->iColumn;
      VAR_11 = VAR_17->y.pTab;
      FUNC_1( VAR_11!=0 );
      if( VAR_20<0 ) VAR_20 = VAR_11->iPKey;
      FUNC_1( VAR_20==-1 || (VAR_20>=0 && VAR_20<VAR_11->nCol) );
      if( VAR_20<0 ){
        VAR_19 = "rowid";
      }else{
        VAR_19 = VAR_11->aCol[VAR_20].zName;
      }
      if( VAR_15 ){
        char *VAR_21 = 0;
        VAR_21 = FUNC_4(VAR_14, "%s.%s", VAR_11->zName, VAR_19);
        FUNC_5(VAR_9, VAR_10, VAR_0, VAR_21, VAR_1);
      }else{
        FUNC_5(VAR_9, VAR_10, VAR_0, VAR_19, VAR_4);
      }
    }else{
      const char *VAR_22 = VAR_13->a[VAR_10].zSpan;
      VAR_22 = VAR_22==0 ? FUNC_4(VAR_14, "column%d", VAR_10+1) : FUNC_3(VAR_14, VAR_22);
      FUNC_5(VAR_9, VAR_10, VAR_0, VAR_22, VAR_1);
    }
  }
  FUNC_2(VAR_7, VAR_12, VAR_13);
}
