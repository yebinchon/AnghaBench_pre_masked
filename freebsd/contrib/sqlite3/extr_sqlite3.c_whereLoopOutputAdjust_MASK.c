
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wtFlags; int prereqAll; size_t iParent; scalar_t__ truthProb; int eOperator; TYPE_1__* pExpr; } ;
typedef TYPE_2__ WhereTerm ;
struct TYPE_9__ {int prereq; int maskSelf; int wsFlags; int nLTerm; scalar_t__ nOut; TYPE_2__** aLTerm; } ;
typedef TYPE_3__ WhereLoop ;
struct TYPE_10__ {int nTerm; TYPE_2__* a; } ;
typedef TYPE_4__ WhereClause ;
struct TYPE_7__ {scalar_t__ op; int * pRight; } ;
typedef int LogEst ;
typedef int Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(
  WhereClause *VAR_5,
  WhereLoop *VAR_6,
  LogEst VAR_7
){
  WhereTerm *VAR_8, *VAR_9;
  Bitmask VAR_10 = ~(VAR_6->prereq|VAR_6->maskSelf);
  int VAR_11, VAR_12;
  LogEst VAR_13 = 0;

  FUNC_0( (VAR_6->wsFlags & VAR_2)==0 );
  for(VAR_11=VAR_5->nTerm, VAR_8=VAR_5->a; VAR_11>0; VAR_11--, VAR_8++){
    FUNC_0( VAR_8!=0 );
    if( (VAR_8->wtFlags & VAR_0)!=0 ) break;
    if( (VAR_8->prereqAll & VAR_6->maskSelf)==0 ) continue;
    if( (VAR_8->prereqAll & VAR_10)!=0 ) continue;
    for(VAR_12=VAR_6->nLTerm-1; VAR_12>=0; VAR_12--){
      VAR_9 = VAR_6->aLTerm[VAR_12];
      if( VAR_9==0 ) continue;
      if( VAR_9==VAR_8 ) break;
      if( VAR_9->iParent>=0 && (&VAR_5->a[VAR_9->iParent])==VAR_8 ) break;
    }
    if( VAR_12<0 ){
      if( VAR_8->truthProb<=0 ){


        VAR_6->nOut += VAR_8->truthProb;
      }else{


        VAR_6->nOut--;
        if( VAR_8->eOperator&(VAR_3|VAR_4) ){
          Expr *VAR_14 = VAR_8->pExpr->pRight;
          int VAR_15 = 0;
          FUNC_2( VAR_8->pExpr->op==VAR_1 );
          if( FUNC_1(VAR_14, &VAR_15) && VAR_15>=(-1) && VAR_15<=1 ){
            VAR_15 = 10;
          }else{
            VAR_15 = 20;
          }
          if( VAR_13<VAR_15 ) VAR_13 = VAR_15;
        }
      }
    }
  }
  if( VAR_6->nOut > VAR_7-VAR_13 ) VAR_6->nOut = VAR_7 - VAR_13;
}
