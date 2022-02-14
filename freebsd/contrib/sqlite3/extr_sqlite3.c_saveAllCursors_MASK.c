
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pgnoRoot; int curFlags; struct TYPE_8__* pNext; TYPE_1__* pBt; } ;
struct TYPE_7__ {TYPE_2__* pCursor; int mutex; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ BtShared ;
typedef TYPE_2__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(BtShared *VAR_2, Pgno VAR_3, BtCursor *VAR_4){
  BtCursor *VAR_5;
  FUNC_0( FUNC_2(VAR_2->mutex) );
  FUNC_0( VAR_4==0 || VAR_4->pBt==VAR_2 );
  for(VAR_5=VAR_2->pCursor; VAR_5; VAR_5=VAR_5->pNext){
    if( VAR_5!=VAR_4 && (0==VAR_3 || VAR_5->pgnoRoot==VAR_3) ) break;
  }
  if( VAR_5 ) return FUNC_1(VAR_5, VAR_3, VAR_4);
  if( VAR_4 ) VAR_4->curFlags &= ~VAR_0;
  return VAR_1;
}
