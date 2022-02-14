
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_32__ {int mallocFailed; } ;
typedef TYPE_5__ sqlite3 ;
struct TYPE_31__ {TYPE_3__* pWin; } ;
struct TYPE_29__ {int zToken; } ;
struct TYPE_35__ {scalar_t__ op; int flags; TYPE_4__ y; TYPE_2__ u; } ;
struct TYPE_34__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_33__ {TYPE_5__* db; } ;
struct TYPE_30__ {TYPE_8__* pOwner; } ;
struct TYPE_28__ {TYPE_8__* pExpr; } ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ ExprList ;
typedef TYPE_8__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 TYPE_8__* FUNC_7 (TYPE_6__*,TYPE_8__*,int ) ;
 int FUNC_8 (TYPE_5__*,TYPE_8__*) ;
 TYPE_8__* FUNC_9 (TYPE_5__*,TYPE_8__*,int ) ;

__attribute__((used)) static void FUNC_10(
  Parse *VAR_8,
  ExprList *VAR_9,
  int VAR_10,
  Expr *VAR_11,
  const char *VAR_12,
  int VAR_13
){
  Expr *VAR_14;
  Expr *VAR_15;
  sqlite3 *VAR_16;

  FUNC_2( VAR_10>=0 && VAR_10<VAR_9->nExpr );
  VAR_14 = VAR_9->a[VAR_10].pExpr;
  FUNC_2( VAR_14!=0 );
  VAR_16 = VAR_8->db;
  VAR_15 = FUNC_9(VAR_16, VAR_14, 0);
  if( VAR_15!=0 ){
    if( VAR_12[0]!='G' ) FUNC_3(VAR_15, VAR_13);
    if( VAR_11->op==VAR_7 ){
      VAR_15 = FUNC_7(VAR_8, VAR_15, VAR_11->u.zToken);
    }
    FUNC_1(VAR_11, VAR_4);
    FUNC_8(VAR_16, VAR_11);
    FUNC_4(VAR_11, VAR_15, sizeof(*VAR_11));
    if( !FUNC_0(VAR_11, VAR_1) && VAR_11->u.zToken!=0 ){
      FUNC_2( (VAR_11->flags & (VAR_3|VAR_5))==0 );
      VAR_11->u.zToken = FUNC_6(VAR_16, VAR_11->u.zToken);
      VAR_11->flags |= VAR_2;
    }
    if( FUNC_0(VAR_11, VAR_6) ){
      if( VAR_11->y.pWin!=0 ){
        VAR_11->y.pWin->pOwner = VAR_11;
      }else{
        FUNC_2( VAR_16->mallocFailed );
      }
    }
    FUNC_5(VAR_16, VAR_15);
  }
  FUNC_1(VAR_11, VAR_0);
}
