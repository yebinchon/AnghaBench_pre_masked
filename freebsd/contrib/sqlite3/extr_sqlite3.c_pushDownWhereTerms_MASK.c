
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ op; int iRightJoinTable; struct TYPE_21__* pLeft; struct TYPE_21__* pRight; } ;
struct TYPE_20__ {int db; } ;
struct TYPE_19__ {int selFlags; scalar_t__ pLimit; struct TYPE_19__* pPrior; void* pWhere; void* pHaving; int pEList; scalar_t__ pWin; } ;
struct TYPE_18__ {int iTable; int iNewTable; int pEList; scalar_t__ isLeftJoin; TYPE_3__* pParse; } ;
typedef TYPE_1__ SubstContext ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (TYPE_3__*,void*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_5 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(
  Parse *VAR_4,
  Select *VAR_5,
  Expr *VAR_6,
  int VAR_7,
  int VAR_8
){
  Expr *VAR_9;
  int VAR_10 = 0;
  if( VAR_6==0 ) return 0;
  if( VAR_5->selFlags & VAR_2 ) return 0;


  if( VAR_5->pWin ) return 0;
  if( VAR_5->pLimit!=0 ){
    return 0;
  }
  while( VAR_6->op==VAR_3 ){
    VAR_10 += FUNC_7(VAR_4, VAR_5, VAR_6->pRight,
                                VAR_7, VAR_8);
    VAR_6 = VAR_6->pLeft;
  }
  if( VAR_8
   && (FUNC_0(VAR_6,VAR_0)==0
         || VAR_6->iRightJoinTable!=VAR_7)
  ){
    return 0;
  }
  if( FUNC_0(VAR_6,VAR_0) && VAR_6->iRightJoinTable!=VAR_7 ){
    return 0;
  }
  if( FUNC_4(VAR_6, VAR_7) ){
    VAR_10++;
    while( VAR_5 ){
      SubstContext VAR_11;
      VAR_9 = FUNC_3(VAR_4->db, VAR_6, 0);
      FUNC_6(VAR_9, -1);
      VAR_11.pParse = VAR_4;
      VAR_11.iTable = VAR_7;
      VAR_11.iNewTable = VAR_7;
      VAR_11.isLeftJoin = 0;
      VAR_11.pEList = VAR_5->pEList;
      VAR_9 = FUNC_5(&VAR_11, VAR_9);
      if( VAR_5->selFlags & VAR_1 ){
        VAR_5->pHaving = FUNC_2(VAR_4, VAR_5->pHaving, VAR_9);
      }else{
        VAR_5->pWhere = FUNC_2(VAR_4, VAR_5->pWhere, VAR_9);
      }
      VAR_5 = VAR_5->pPrior;
    }
  }
  return VAR_10;
}
