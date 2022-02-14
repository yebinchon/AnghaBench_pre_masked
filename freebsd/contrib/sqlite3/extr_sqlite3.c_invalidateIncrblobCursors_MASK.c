
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_8__ {scalar_t__ nKey; } ;
struct TYPE_10__ {int curFlags; scalar_t__ pgnoRoot; int eState; TYPE_2__ info; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {int hasIncrblobCur; TYPE_1__* pBt; } ;
struct TYPE_7__ {TYPE_4__* pCursor; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_3__ Btree ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(
  Btree *VAR_2,
  Pgno VAR_3,
  i64 VAR_4,
  int VAR_5
){
  BtCursor *VAR_6;
  if( VAR_2->hasIncrblobCur==0 ) return;
  FUNC_0( FUNC_1(VAR_2) );
  VAR_2->hasIncrblobCur = 0;
  for(VAR_6=VAR_2->pBt->pCursor; VAR_6; VAR_6=VAR_6->pNext){
    if( (VAR_6->curFlags & VAR_0)!=0 ){
      VAR_2->hasIncrblobCur = 1;
      if( VAR_6->pgnoRoot==VAR_3 && (VAR_5 || VAR_6->info.nKey==VAR_4) ){
        VAR_6->eState = VAR_1;
      }
    }
  }
}
