
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_12__ {scalar_t__ nLocal; scalar_t__ nPayload; int nSize; } ;
struct TYPE_11__ {scalar_t__* aData; int nCell; int hdrOffset; TYPE_1__* pBt; int (* xParseCell ) (TYPE_2__*,scalar_t__*,TYPE_3__*) ;scalar_t__ isInit; int pDbPage; } ;
struct TYPE_10__ {int usableSize; int mutex; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(MemPage *VAR_4, Pgno VAR_5, Pgno VAR_6, u8 VAR_7){
  FUNC_1( FUNC_7(VAR_4->pBt->mutex) );
  FUNC_1( FUNC_6(VAR_4->pDbPage) );
  if( VAR_7==VAR_2 ){

    if( FUNC_4(VAR_4->aData)!=VAR_5 ){
      return FUNC_0(VAR_4);
    }
    FUNC_5(VAR_4->aData, VAR_6);
  }else{
    int VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_10 = VAR_4->isInit ? VAR_3 : FUNC_2(VAR_4);
    if( VAR_10 ) return VAR_10;
    VAR_9 = VAR_4->nCell;

    for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
      u8 *VAR_11 = FUNC_3(VAR_4, VAR_8);
      if( VAR_7==VAR_1 ){
        CellInfo VAR_12;
        VAR_4->xParseCell(VAR_4, VAR_11, &VAR_12);
        if( VAR_12.nLocal<VAR_12.nPayload ){
          if( VAR_11+VAR_12.nSize > VAR_4->aData+VAR_4->pBt->usableSize ){
            return FUNC_0(VAR_4);
          }
          if( VAR_5==FUNC_4(VAR_11+VAR_12.nSize-4) ){
            FUNC_5(VAR_11+VAR_12.nSize-4, VAR_6);
            break;
          }
        }
      }else{
        if( FUNC_4(VAR_11)==VAR_5 ){
          FUNC_5(VAR_11, VAR_6);
          break;
        }
      }
    }

    if( VAR_8==VAR_9 ){
      if( VAR_7!=VAR_0 ||
          FUNC_4(&VAR_4->aData[VAR_4->hdrOffset+8])!=VAR_5 ){
        return FUNC_0(VAR_4);
      }
      FUNC_5(&VAR_4->aData[VAR_4->hdrOffset+8], VAR_6);
    }
  }
  return VAR_3;
}
