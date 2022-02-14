
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ op; int pRight; int pLeft; } ;
struct TYPE_8__ {int db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;
typedef int CollSeq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (TYPE_1__*,int ,int ) ;
 char FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char) ;

__attribute__((used)) static int FUNC_7(Parse *VAR_4, Expr *VAR_5){
  char VAR_6, VAR_7;
  CollSeq *VAR_8;
  if( !FUNC_1(VAR_4->db, VAR_1) ) return 0;
  if( VAR_5->op!=VAR_2 && VAR_5->op!=VAR_3 ) return 0;
  if( FUNC_0(VAR_5, VAR_0) ) return 0;
  VAR_6 = FUNC_3(VAR_5->pLeft);
  VAR_7 = FUNC_3(VAR_5->pRight);
  if( VAR_6!=VAR_7
   && (!FUNC_6(VAR_6) || !FUNC_6(VAR_7))
  ){
    return 0;
  }
  VAR_8 = FUNC_2(VAR_4, VAR_5->pLeft, VAR_5->pRight);
  if( FUNC_5(VAR_8) ) return 1;
  return FUNC_4(VAR_4, VAR_5->pLeft, VAR_5->pRight);
}
