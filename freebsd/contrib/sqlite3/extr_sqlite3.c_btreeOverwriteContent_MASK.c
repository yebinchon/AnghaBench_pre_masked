
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int nData; scalar_t__ pData; } ;
struct TYPE_5__ {int pDbPage; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtreePayload ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
  MemPage *VAR_1,
  u8 *VAR_2,
  const BtreePayload *VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_3->nData - VAR_4;
  if( VAR_6<=0 ){

    int VAR_7;
    for(VAR_7=0; VAR_7<VAR_5 && VAR_2[VAR_7]==0; VAR_7++){}
    if( VAR_7<VAR_5 ){
      int VAR_8 = FUNC_3(VAR_1->pDbPage);
      if( VAR_8 ) return VAR_8;
      FUNC_2(VAR_2 + VAR_7, 0, VAR_5 - VAR_7);
    }
  }else{
    if( VAR_6<VAR_5 ){


      int VAR_9 = FUNC_4(VAR_1, VAR_2+VAR_6, VAR_3, VAR_4+VAR_6,
                                 VAR_5-VAR_6);
      if( VAR_9 ) return VAR_9;
      VAR_5 = VAR_6;
    }
    if( FUNC_0(VAR_2, ((u8*)VAR_3->pData) + VAR_4, VAR_5)!=0 ){
      int VAR_10 = FUNC_3(VAR_1->pDbPage);
      if( VAR_10 ) return VAR_10;




      FUNC_1(VAR_2, ((u8*)VAR_3->pData) + VAR_4, VAR_5);
    }
  }
  return VAR_0;
}
