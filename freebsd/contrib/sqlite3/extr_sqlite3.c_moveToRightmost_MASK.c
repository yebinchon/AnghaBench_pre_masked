
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nSize; } ;
struct TYPE_9__ {scalar_t__ eState; int curFlags; TYPE_1__ info; scalar_t__ ix; TYPE_2__* pPage; } ;
struct TYPE_8__ {int hdrOffset; scalar_t__ nCell; int * aData; int leaf; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(BtCursor *VAR_3){
  Pgno VAR_4;
  int VAR_5 = VAR_2;
  MemPage *VAR_6 = 0;

  FUNC_0( FUNC_1(VAR_3) );
  FUNC_0( VAR_3->eState==VAR_1 );
  while( !(VAR_6 = VAR_3->pPage)->leaf ){
    VAR_4 = FUNC_2(&VAR_6->aData[VAR_6->hdrOffset+8]);
    VAR_3->ix = VAR_6->nCell;
    VAR_5 = FUNC_3(VAR_3, VAR_4);
    if( VAR_5 ) return VAR_5;
  }
  VAR_3->ix = VAR_6->nCell-1;
  FUNC_0( VAR_3->info.nSize==0 );
  FUNC_0( (VAR_3->curFlags & VAR_0)==0 );
  return VAR_2;
}
