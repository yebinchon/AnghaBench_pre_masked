
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ u16 ;
typedef int sqlite3 ;
struct TYPE_25__ {scalar_t__ iPlanLimit; int pWC; TYPE_8__* pOrSet; TYPE_6__* pWInfo; } ;
typedef TYPE_4__ WhereLoopBuilder ;
struct TYPE_23__ {TYPE_7__* pIndex; } ;
struct TYPE_24__ {TYPE_2__ btree; } ;
struct TYPE_26__ {int wsFlags; TYPE_3__ u; struct TYPE_26__* pNextLoop; int nOut; int rRun; int prereq; scalar_t__ nLTerm; } ;
typedef TYPE_5__ WhereLoop ;
struct TYPE_27__ {TYPE_5__* pLoops; TYPE_1__* pParse; } ;
typedef TYPE_6__ WhereInfo ;
struct TYPE_29__ {scalar_t__ n; } ;
struct TYPE_28__ {scalar_t__ idxType; } ;
struct TYPE_22__ {int * db; } ;
typedef TYPE_7__ Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 TYPE_5__* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 TYPE_5__** FUNC_5 (TYPE_5__**,TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (int *,TYPE_5__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_8__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(WhereLoopBuilder *VAR_6, WhereLoop *VAR_7){
  WhereLoop **VAR_8, *VAR_9;
  WhereInfo *VAR_10 = VAR_6->pWInfo;
  sqlite3 *VAR_11 = VAR_10->pParse->db;
  int VAR_12;


  if( VAR_6->iPlanLimit==0 ){
    FUNC_0(0xffffffff,("=== query planner search limit reached ===\n"));
    if( VAR_6->pOrSet ) VAR_6->pOrSet->n = 0;
    return VAR_0;
  }
  VAR_6->iPlanLimit--;




  if( VAR_6->pOrSet!=0 ){
    if( VAR_7->nLTerm ){




      FUNC_9(VAR_6->pOrSet, VAR_7->prereq, VAR_7->rRun,
                                    VAR_7->nOut);






    }
    return VAR_3;
  }



  FUNC_3(VAR_10->pLoops, VAR_7);
  VAR_8 = FUNC_5(&VAR_10->pLoops, VAR_7);

  if( VAR_8==0 ){
    return VAR_3;
  }else{
    VAR_9 = *VAR_8;
  }
  if( VAR_9==0 ){

    *VAR_8 = VAR_9 = FUNC_1(VAR_11, sizeof(WhereLoop));
    if( VAR_9==0 ) return VAR_2;
    FUNC_6(VAR_9);
    VAR_9->pNextLoop = 0;
  }else{



    WhereLoop **VAR_13 = &VAR_9->pNextLoop;
    WhereLoop *VAR_14;
    while( *VAR_13 ){
      VAR_13 = FUNC_5(VAR_13, VAR_7);
      if( VAR_13==0 ) break;
      VAR_14 = *VAR_13;
      if( VAR_14==0 ) break;
      *VAR_13 = VAR_14->pNextLoop;






      FUNC_4(VAR_11, VAR_14);
    }
  }
  VAR_12 = FUNC_8(VAR_11, VAR_9, VAR_7);
  if( (VAR_9->wsFlags & VAR_4)==0 ){
    Index *VAR_15 = VAR_9->u.btree.pIndex;
    if( VAR_15 && VAR_15->idxType==VAR_1 ){
      VAR_9->u.btree.pIndex = 0;
    }
  }
  return VAR_12;
}
