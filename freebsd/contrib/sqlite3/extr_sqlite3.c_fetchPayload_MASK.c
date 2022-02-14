
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {scalar_t__ nSize; scalar_t__ pPayload; int nLocal; } ;
struct TYPE_12__ {scalar_t__ iPage; scalar_t__ eState; scalar_t__ ix; TYPE_4__ info; TYPE_3__* pPage; TYPE_2__* pBtree; } ;
struct TYPE_10__ {scalar_t__ nCell; scalar_t__ aData; scalar_t__ aDataEnd; } ;
struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_5__ BtCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const void *FUNC_4(
  BtCursor *VAR_2,
  u32 *VAR_3
){
  int VAR_4;
  FUNC_1( VAR_2!=0 && VAR_2->iPage>=0 && VAR_2->pPage);
  FUNC_1( VAR_2->eState==VAR_1 );
  FUNC_1( FUNC_3(VAR_2->pBtree->db->mutex) );
  FUNC_1( FUNC_2(VAR_2) );
  FUNC_1( VAR_2->ix<VAR_2->pPage->nCell );
  FUNC_1( VAR_2->info.nSize>0 );
  FUNC_1( VAR_2->info.pPayload>VAR_2->pPage->aData || VAR_0 );
  FUNC_1( VAR_2->info.pPayload<VAR_2->pPage->aDataEnd ||VAR_0);
  VAR_4 = VAR_2->info.nLocal;
  if( VAR_4>(int)(VAR_2->pPage->aDataEnd - VAR_2->info.pPayload) ){


    FUNC_1( VAR_0 );
    VAR_4 = FUNC_0(0, (int)(VAR_2->pPage->aDataEnd - VAR_2->info.pPayload));
  }
  *VAR_3 = (u32)VAR_4;
  return (void*)VAR_2->info.pPayload;
}
