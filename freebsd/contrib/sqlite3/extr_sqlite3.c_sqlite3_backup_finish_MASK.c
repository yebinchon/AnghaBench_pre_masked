
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rc; TYPE_2__* pDestDb; TYPE_8__* pSrc; int pDest; struct TYPE_11__* pNext; scalar_t__ isAttached; TYPE_2__* pSrcDb; } ;
typedef TYPE_1__ sqlite3_backup ;
struct TYPE_12__ {int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_13__ {int nBackup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__** FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;

int FUNC_10(sqlite3_backup *VAR_2){
  sqlite3_backup **VAR_3;
  sqlite3 *VAR_4;
  int VAR_5;


  if( VAR_2==0 ) return VAR_1;
  VAR_4 = VAR_2->pSrcDb;
  FUNC_9(VAR_4->mutex);
  FUNC_1(VAR_2->pSrc);
  if( VAR_2->pDestDb ){
    FUNC_9(VAR_2->pDestDb->mutex);
  }


  if( VAR_2->pDestDb ){
    VAR_2->pSrc->nBackup--;
  }
  if( VAR_2->isAttached ){
    VAR_3 = FUNC_7(FUNC_3(VAR_2->pSrc));
    FUNC_0( VAR_3!=0 );
    while( *VAR_3!=VAR_2 ){
      VAR_3 = &(*VAR_3)->pNext;
      FUNC_0( VAR_3!=0 );
    }
    *VAR_3 = VAR_2->pNext;
  }


  FUNC_4(VAR_2->pDest, VAR_1, 0);


  VAR_5 = (VAR_2->rc==VAR_0) ? VAR_1 : VAR_2->rc;
  if( VAR_2->pDestDb ){
    FUNC_5(VAR_2->pDestDb, VAR_5);


    FUNC_6(VAR_2->pDestDb);
  }
  FUNC_2(VAR_2->pSrc);
  if( VAR_2->pDestDb ){



    FUNC_8(VAR_2);
  }
  FUNC_6(VAR_4);
  return VAR_5;
}
