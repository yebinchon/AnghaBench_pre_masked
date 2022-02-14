
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pList; int pSelect; } ;
struct TYPE_6__ {int flags; int nHeight; TYPE_1__ x; int pRight; int pLeft; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Expr *VAR_2){
  int VAR_3 = 0;
  FUNC_1(VAR_2->pLeft, &VAR_3);
  FUNC_1(VAR_2->pRight, &VAR_3);
  if( FUNC_0(VAR_2, VAR_1) ){
    FUNC_3(VAR_2->x.pSelect, &VAR_3);
  }else if( VAR_2->x.pList ){
    FUNC_2(VAR_2->x.pList, &VAR_3);
    VAR_2->flags |= VAR_0 & FUNC_4(VAR_2->x.pList);
  }
  VAR_2->nHeight = VAR_3 + 1;
}
