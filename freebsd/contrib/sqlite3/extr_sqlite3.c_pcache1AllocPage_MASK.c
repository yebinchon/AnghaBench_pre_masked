
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u8 ;
struct TYPE_16__ {int mutex; } ;
struct TYPE_15__ {scalar_t__ nPage; size_t szPage; size_t szAlloc; int * pnPurgeable; TYPE_6__* pGroup; scalar_t__ szExtra; TYPE_2__* pFree; } ;
struct TYPE_13__ {TYPE_2__* pExtra; void* pBuf; } ;
struct TYPE_14__ {scalar_t__ isAnchor; scalar_t__ isBulkLocal; TYPE_1__ page; struct TYPE_14__* pNext; } ;
struct TYPE_12__ {scalar_t__ separateCache; TYPE_6__ grp; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int) ;
 TYPE_11__ VAR_0 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static PgHdr1 *FUNC_11(PCache1 *VAR_1, int VAR_2){
  PgHdr1 *VAR_3 = 0;
  void *VAR_4;

  FUNC_0( FUNC_10(VAR_1->pGroup->mutex) );
  if( VAR_1->pFree || (VAR_1->nPage==0 && FUNC_4(VAR_1)) ){
    FUNC_0( VAR_1->pFree!=0 );
    VAR_3 = VAR_1->pFree;
    VAR_1->pFree = VAR_3->pNext;
    VAR_3->pNext = 0;
  }else{
    if( VAR_2 ){ FUNC_6(); }
    VAR_4 = FUNC_1(VAR_1->szAlloc);
    VAR_3 = (PgHdr1 *)&((u8 *)VAR_4)[VAR_1->szPage];

    if( VAR_2 ){ FUNC_7(); }



    if( VAR_4==0 ) return 0;
    VAR_3->page.pBuf = VAR_4;
    VAR_3->page.pExtra = &VAR_3[1];
    VAR_3->isBulkLocal = 0;
    VAR_3->isAnchor = 0;
  }
  (*VAR_1->pnPurgeable)++;
  return VAR_3;
}
