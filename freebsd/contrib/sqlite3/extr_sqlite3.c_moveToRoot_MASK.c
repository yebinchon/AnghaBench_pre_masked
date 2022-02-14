
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ nSize; } ;
struct TYPE_15__ {scalar_t__ eState; int iPage; scalar_t__ pgnoRoot; int skipNext; int curIntKey; scalar_t__ pKeyInfo; int curFlags; TYPE_3__* pPage; TYPE_2__ info; scalar_t__ ix; int curPagerFlags; TYPE_1__* pBtree; TYPE_3__** apPage; } ;
struct TYPE_14__ {int intKey; int pgno; scalar_t__ isInit; scalar_t__ nCell; int hdrOffset; int * aData; int leaf; } ;
struct TYPE_12__ {int pBt; } ;
typedef int Pgno ;
typedef TYPE_3__ MemPage ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,TYPE_3__**,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(BtCursor *VAR_10){
  MemPage *VAR_11;
  int VAR_12 = VAR_9;

  FUNC_1( FUNC_2(VAR_10) );
  FUNC_1( VAR_4 < VAR_5 );
  FUNC_1( VAR_6 < VAR_5 );
  FUNC_1( VAR_3 > VAR_5 );
  FUNC_1( VAR_10->eState < VAR_5 || VAR_10->iPage<0 );
  FUNC_1( VAR_10->pgnoRoot>0 || VAR_10->iPage<0 );

  if( VAR_10->iPage>=0 ){
    if( VAR_10->iPage ){
      FUNC_6(VAR_10->pPage);
      while( --VAR_10->iPage ){
        FUNC_6(VAR_10->apPage[VAR_10->iPage]);
      }
      VAR_10->pPage = VAR_10->apPage[0];
      goto skip_init;
    }
  }else if( VAR_10->pgnoRoot==0 ){
    VAR_10->eState = VAR_4;
    return VAR_8;
  }else{
    FUNC_1( VAR_10->iPage==(-1) );
    if( VAR_10->eState>=VAR_5 ){
      if( VAR_10->eState==VAR_3 ){
        FUNC_1( VAR_10->skipNext!=VAR_9 );
        return VAR_10->skipNext;
      }
      FUNC_7(VAR_10);
    }
    VAR_12 = FUNC_4(VAR_10->pBtree->pBt, VAR_10->pgnoRoot, &VAR_10->pPage,
                        0, VAR_10->curPagerFlags);
    if( VAR_12!=VAR_9 ){
      VAR_10->eState = VAR_4;
      return VAR_12;
    }
    VAR_10->iPage = 0;
    VAR_10->curIntKey = VAR_10->pPage->intKey;
  }
  VAR_11 = VAR_10->pPage;
  FUNC_1( VAR_11->pgno==VAR_10->pgnoRoot );
  FUNC_1( VAR_11->intKey==1 || VAR_11->intKey==0 );
  if( VAR_11->isInit==0 || (VAR_10->pKeyInfo==0)!=VAR_11->intKey ){
    return FUNC_0(VAR_10->pPage);
  }

skip_init:
  VAR_10->ix = 0;
  VAR_10->info.nSize = 0;
  VAR_10->curFlags &= ~(VAR_0|VAR_1|VAR_2);

  VAR_11 = VAR_10->pPage;
  if( VAR_11->nCell>0 ){
    VAR_10->eState = VAR_6;
  }else if( !VAR_11->leaf ){
    Pgno VAR_13;
    if( VAR_11->pgno!=1 ) return VAR_7;
    VAR_13 = FUNC_3(&VAR_11->aData[VAR_11->hdrOffset+8]);
    VAR_10->eState = VAR_6;
    VAR_12 = FUNC_5(VAR_10, VAR_13);
  }else{
    VAR_10->eState = VAR_4;
    VAR_12 = VAR_8;
  }
  return VAR_12;
}
