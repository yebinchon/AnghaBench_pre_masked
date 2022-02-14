
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_16__ {char* zToken; } ;
struct TYPE_15__ {TYPE_5__* pList; } ;
struct TYPE_20__ {scalar_t__ op; TYPE_2__ u; TYPE_1__ x; } ;
struct TYPE_19__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_17__ {int sortFlags; } ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static u8 FUNC_5(sqlite3 *VAR_7, Expr *VAR_8, ExprList **VAR_9){
  int VAR_10 = VAR_6;
  ExprList *VAR_11 = VAR_8->x.pList;
  const char *VAR_12;
  ExprList *VAR_13;
  u8 VAR_14;

  FUNC_2( *VAR_9==0 );
  FUNC_2( VAR_8->op==VAR_3 );
  FUNC_2( !FUNC_1(VAR_8) );
  if( VAR_11==0 || VAR_11->nExpr!=1 || FUNC_0(VAR_8, VAR_0) ){
    return VAR_10;
  }
  VAR_12 = VAR_8->u.zToken;
  if( FUNC_4(VAR_12, "min")==0 ){
    VAR_10 = VAR_5;
    VAR_14 = VAR_1;
  }else if( FUNC_4(VAR_12, "max")==0 ){
    VAR_10 = VAR_4;
    VAR_14 = VAR_2;
  }else{
    return VAR_10;
  }
  *VAR_9 = VAR_13 = FUNC_3(VAR_7, VAR_11, 0);
  FUNC_2( VAR_13!=0 || VAR_7->mallocFailed );
  if( VAR_13 ) VAR_13->a[0].sortFlags = VAR_14;
  return VAR_10;
}
