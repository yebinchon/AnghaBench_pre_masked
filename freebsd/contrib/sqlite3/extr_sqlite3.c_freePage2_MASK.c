
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_15__ {int nPage; int btsFlags; int usableSize; int mutex; TYPE_2__* pPage1; } ;
struct TYPE_14__ {int pgno; scalar_t__ isInit; int * aData; int pDbPage; TYPE_1__* pBt; } ;
struct TYPE_13__ {int pageSize; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_2__**,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,int*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(BtShared *VAR_6, MemPage *VAR_7, Pgno VAR_8){
  MemPage *VAR_9 = 0;
  Pgno VAR_10 = 0;
  MemPage *VAR_11 = VAR_6->pPage1;
  MemPage *VAR_12;
  int VAR_13;
  u32 VAR_14;

  FUNC_1( FUNC_13(VAR_6->mutex) );
  FUNC_1( VAR_1 || VAR_8>1 );
  FUNC_1( !VAR_7 || VAR_7->pgno==VAR_8 );

  if( VAR_8<2 || VAR_8>VAR_6->nPage ){
    return VAR_4;
  }
  if( VAR_7 ){
    VAR_12 = VAR_7;
    FUNC_11(VAR_12->pDbPage);
  }else{
    VAR_12 = FUNC_3(VAR_6, VAR_8);
  }


  VAR_13 = FUNC_12(VAR_11->pDbPage);
  if( VAR_13 ) goto freepage_out;
  VAR_14 = FUNC_5(&VAR_11->aData[36]);
  FUNC_8(&VAR_11->aData[36], VAR_14+1);

  if( VAR_6->btsFlags & VAR_0 ){



    if( (!VAR_12 && ((VAR_13 = FUNC_2(VAR_6, VAR_8, &VAR_12, 0))!=0) )
     || ((VAR_13 = FUNC_12(VAR_12->pDbPage))!=0)
    ){
      goto freepage_out;
    }
    FUNC_6(VAR_12->aData, 0, VAR_12->pBt->pageSize);
  }




  if( VAR_2 ){
    FUNC_7(VAR_6, VAR_8, VAR_3, 0, &VAR_13);
    if( VAR_13 ) goto freepage_out;
  }
  if( VAR_14!=0 ){
    u32 VAR_15;

    VAR_10 = FUNC_5(&VAR_11->aData[32]);
    VAR_13 = FUNC_2(VAR_6, VAR_10, &VAR_9, 0);
    if( VAR_13!=VAR_5 ){
      goto freepage_out;
    }

    VAR_15 = FUNC_5(&VAR_9->aData[4]);
    FUNC_1( VAR_6->usableSize>32 );
    if( VAR_15 > (u32)VAR_6->usableSize/4 - 2 ){
      VAR_13 = VAR_4;
      goto freepage_out;
    }
    if( VAR_15 < (u32)VAR_6->usableSize/4 - 8 ){
      VAR_13 = FUNC_12(VAR_9->pDbPage);
      if( VAR_13==VAR_5 ){
        FUNC_8(&VAR_9->aData[4], VAR_15+1);
        FUNC_8(&VAR_9->aData[8+VAR_15*4], VAR_8);
        if( VAR_12 && (VAR_6->btsFlags & VAR_0)==0 ){
          FUNC_10(VAR_12->pDbPage);
        }
        VAR_13 = FUNC_4(VAR_6, VAR_8);
      }
      FUNC_0(("FREE-PAGE: %d leaf on trunk page %d\n",VAR_12->pgno,VAR_9->pgno));
      goto freepage_out;
    }
  }







  if( VAR_12==0 && VAR_5!=(VAR_13 = FUNC_2(VAR_6, VAR_8, &VAR_12, 0)) ){
    goto freepage_out;
  }
  VAR_13 = FUNC_12(VAR_12->pDbPage);
  if( VAR_13!=VAR_5 ){
    goto freepage_out;
  }
  FUNC_8(VAR_12->aData, VAR_10);
  FUNC_8(&VAR_12->aData[4], 0);
  FUNC_8(&VAR_11->aData[32], VAR_8);
  FUNC_0(("FREE-PAGE: %d new trunk page replacing %d\n", VAR_12->pgno, VAR_10));

freepage_out:
  if( VAR_12 ){
    VAR_12->isInit = 0;
  }
  FUNC_9(VAR_12);
  FUNC_9(VAR_9);
  return VAR_13;
}
