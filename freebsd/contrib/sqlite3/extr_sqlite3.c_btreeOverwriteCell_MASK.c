
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ pPayload; int nLocal; } ;
struct TYPE_16__ {TYPE_1__ info; TYPE_2__* pPage; } ;
struct TYPE_15__ {int usableSize; } ;
struct TYPE_14__ {int nData; int nZero; } ;
struct TYPE_13__ {scalar_t__ aDataEnd; scalar_t__ aData; scalar_t__ cellOffset; int pDbPage; TYPE_4__* pBt; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtreePayload ;
typedef TYPE_4__ BtShared ;
typedef TYPE_5__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_2__**,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,TYPE_3__ const*,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(BtCursor *VAR_2, const BtreePayload *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_3->nData + VAR_3->nZero;
  int VAR_6;
  MemPage *VAR_7 = VAR_2->pPage;
  BtShared *VAR_8;
  Pgno VAR_9;
  u32 VAR_10;

  if( VAR_2->info.pPayload + VAR_2->info.nLocal > VAR_7->aDataEnd
   || VAR_2->info.pPayload < VAR_7->aData + VAR_7->cellOffset
  ){
    return VAR_0;
  }

  VAR_6 = FUNC_2(VAR_7, VAR_2->info.pPayload, VAR_3,
                             0, VAR_2->info.nLocal);
  if( VAR_6 ) return VAR_6;
  if( VAR_2->info.nLocal==VAR_5 ) return VAR_1;


  VAR_4 = VAR_2->info.nLocal;
  FUNC_0( VAR_5>=0 );
  FUNC_0( VAR_4>=0 );
  VAR_9 = FUNC_3(VAR_2->info.pPayload + VAR_4);
  VAR_8 = VAR_7->pBt;
  VAR_10 = VAR_8->usableSize - 4;
  do{
    VAR_6 = FUNC_1(VAR_8, VAR_9, &VAR_7, 0);
    if( VAR_6 ) return VAR_6;
    if( FUNC_4(VAR_7->pDbPage)!=1 ){
      VAR_6 = VAR_0;
    }else{
      if( VAR_4+VAR_10<(u32)VAR_5 ){
        VAR_9 = FUNC_3(VAR_7->aData);
      }else{
        VAR_10 = VAR_5 - VAR_4;
      }
      VAR_6 = FUNC_2(VAR_7, VAR_7->aData+4, VAR_3,
                                 VAR_4, VAR_10);
    }
    FUNC_5(VAR_7->pDbPage);
    if( VAR_6 ) return VAR_6;
    VAR_4 += VAR_10;
  }while( VAR_4<VAR_5 );
  return VAR_1;
}
