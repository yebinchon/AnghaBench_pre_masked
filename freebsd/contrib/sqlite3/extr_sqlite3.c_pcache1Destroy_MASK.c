
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_9__ {scalar_t__ nMax; scalar_t__ nMin; struct TYPE_9__* apHash; struct TYPE_9__* pBulk; scalar_t__ nPage; scalar_t__ bPurgeable; TYPE_1__* pGroup; } ;
struct TYPE_8__ {scalar_t__ nMaxPage; scalar_t__ nMinPage; scalar_t__ mxPinned; } ;
typedef TYPE_1__ PGroup ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(sqlite3_pcache *VAR_0){
  PCache1 *VAR_1 = (PCache1 *)VAR_0;
  PGroup *VAR_2 = VAR_1->pGroup;
  FUNC_0( VAR_1->bPurgeable || (VAR_1->nMax==0 && VAR_1->nMin==0) );
  FUNC_2(VAR_2);
  if( VAR_1->nPage ) FUNC_4(VAR_1, 0);
  FUNC_0( VAR_2->nMaxPage >= VAR_1->nMax );
  VAR_2->nMaxPage -= VAR_1->nMax;
  FUNC_0( VAR_2->nMinPage >= VAR_1->nMin );
  VAR_2->nMinPage -= VAR_1->nMin;
  VAR_2->mxPinned = VAR_2->nMaxPage + 10 - VAR_2->nMinPage;
  FUNC_1(VAR_1);
  FUNC_3(VAR_2);
  FUNC_5(VAR_1->pBulk);
  FUNC_5(VAR_1->apHash);
  FUNC_5(VAR_1);
}
