
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ op; int flags; } ;
struct TYPE_16__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {int sortFlags; int pExpr; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (int ,int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static ExprList *FUNC_2(
  Parse *VAR_5,
  ExprList *VAR_6,
  ExprList *VAR_7,
  int VAR_8
){
  if( VAR_7 ){
    int VAR_9;
    int VAR_10 = VAR_6 ? VAR_6->nExpr : 0;
    for(VAR_9=0; VAR_9<VAR_7->nExpr; VAR_9++){
      Expr *VAR_11 = FUNC_0(VAR_5->db, VAR_7->a[VAR_9].pExpr, 0);
      if( VAR_8 && VAR_11 && VAR_11->op==VAR_3 ){
        VAR_11->op = VAR_4;
        VAR_11->flags &= ~(VAR_0|VAR_2|VAR_1);
      }
      VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_11);
      if( VAR_6 ) VAR_6->a[VAR_10+VAR_9].sortFlags = VAR_7->a[VAR_9].sortFlags;
    }
  }
  return VAR_6;
}
