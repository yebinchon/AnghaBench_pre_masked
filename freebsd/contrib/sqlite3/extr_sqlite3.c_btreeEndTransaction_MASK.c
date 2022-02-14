
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int nVdbeRead; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_12__ {scalar_t__ nTransaction; scalar_t__ inTransaction; scalar_t__ bDoTruncate; } ;
struct TYPE_11__ {scalar_t__ inTrans; TYPE_1__* db; TYPE_3__* pBt; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(Btree *VAR_2){
  BtShared *VAR_3 = VAR_2->pBt;
  sqlite3 *VAR_4 = VAR_2->db;
  FUNC_0( FUNC_4(VAR_2) );


  VAR_3->bDoTruncate = 0;

  if( VAR_2->inTrans>VAR_0 && VAR_4->nVdbeRead>1 ){



    FUNC_3(VAR_2);
    VAR_2->inTrans = VAR_1;
  }else{




    if( VAR_2->inTrans!=VAR_0 ){
      FUNC_2(VAR_2);
      VAR_3->nTransaction--;
      if( 0==VAR_3->nTransaction ){
        VAR_3->inTransaction = VAR_0;
      }
    }



    VAR_2->inTrans = VAR_0;
    FUNC_5(VAR_3);
  }

  FUNC_1(VAR_2);
}
