
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_35__ {scalar_t__ mallocFailed; } ;
typedef TYPE_6__ sqlite3 ;
struct TYPE_32__ {TYPE_2__* pList; } ;
struct TYPE_34__ {int flags; TYPE_3__ x; struct TYPE_34__* pRight; struct TYPE_34__* pLeft; int op; } ;
struct TYPE_33__ {TYPE_6__* db; } ;
struct TYPE_31__ {TYPE_1__* a; } ;
struct TYPE_30__ {TYPE_5__* pExpr; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_7 (TYPE_6__*,TYPE_5__*,int ) ;
 void FUNC_8 (TYPE_4__*,TYPE_5__*,int,int) ;
 void FUNC_9 (TYPE_4__*,TYPE_5__*,int,int) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(
  Parse *VAR_5,
  Expr *VAR_6,
  int VAR_7,
  void (*VAR_8)(Parse*,Expr*,int,int),
  int VAR_9
){
  Expr VAR_10;
  Expr VAR_11;
  Expr VAR_12;
  int VAR_13 = 0;
  Expr *VAR_14 = 0;
  sqlite3 *VAR_15 = VAR_5->db;

  FUNC_4(&VAR_11, 0, sizeof(Expr));
  FUNC_4(&VAR_12, 0, sizeof(Expr));
  FUNC_4(&VAR_10, 0, sizeof(Expr));

  FUNC_1( !FUNC_0(VAR_6, VAR_1) );
  VAR_14 = FUNC_7(VAR_15, VAR_6->pLeft, 0);
  if( VAR_15->mallocFailed==0 ){
    VAR_10.op = VAR_2;
    VAR_10.pLeft = &VAR_11;
    VAR_10.pRight = &VAR_12;
    VAR_11.op = VAR_3;
    VAR_11.pLeft = VAR_14;
    VAR_11.pRight = VAR_6->x.pList->a[0].pExpr;
    VAR_12.op = VAR_4;
    VAR_12.pLeft = VAR_14;
    VAR_12.pRight = VAR_6->x.pList->a[1].pExpr;
    FUNC_3(VAR_14, FUNC_2(VAR_5, VAR_14, &VAR_13));
    if( VAR_8 ){
      VAR_8(VAR_5, &VAR_10, VAR_7, VAR_9);
    }else{





      VAR_14->flags |= VAR_0;
      FUNC_5(VAR_5, &VAR_10, VAR_7);
    }
    FUNC_10(VAR_5, VAR_13);
  }
  FUNC_6(VAR_15, VAR_14);


  FUNC_11( VAR_8==FUNC_9 && VAR_9==0 && VAR_13==0 );
  FUNC_11( VAR_8==FUNC_9 && VAR_9==0 && VAR_13!=0 );
  FUNC_11( VAR_8==FUNC_9 && VAR_9!=0 && VAR_13==0 );
  FUNC_11( VAR_8==FUNC_9 && VAR_9!=0 && VAR_13!=0 );
  FUNC_11( VAR_8==FUNC_8 && VAR_9==0 && VAR_13==0 );
  FUNC_11( VAR_8==FUNC_8 && VAR_9==0 && VAR_13!=0 );
  FUNC_11( VAR_8==FUNC_8 && VAR_9!=0 && VAR_13==0 );
  FUNC_11( VAR_8==FUNC_8 && VAR_9!=0 && VAR_13!=0 );
  FUNC_11( VAR_8==0 );
}
