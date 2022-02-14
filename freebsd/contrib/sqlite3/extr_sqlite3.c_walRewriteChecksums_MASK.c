
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int i64 ;
typedef int aFrame ;
struct TYPE_5__ {void** aFrameCksum; } ;
struct TYPE_6__ {int szPage; int iReCksum; int pWalFd; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int const,int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const) ;
 int FUNC_6 (TYPE_2__*,int,int,int *,int *) ;
 int FUNC_7 (int,int const) ;

__attribute__((used)) static int FUNC_8(Wal *VAR_3, u32 VAR_4){
  const int VAR_5 = VAR_3->szPage;
  int VAR_6 = VAR_1;
  u8 *VAR_7;
  u8 VAR_8[VAR_2];
  u32 VAR_9;
  i64 VAR_10;

  VAR_7 = FUNC_5(VAR_5 + VAR_2);
  if( VAR_7==0 ) return VAR_0;






  FUNC_0( VAR_3->iReCksum>0 );
  if( VAR_3->iReCksum==1 ){
    VAR_10 = 24;
  }else{
    VAR_10 = FUNC_7(VAR_3->iReCksum-1, VAR_5) + 16;
  }
  VAR_6 = FUNC_2(VAR_3->pWalFd, VAR_7, sizeof(u32)*2, VAR_10);
  VAR_3->hdr.aFrameCksum[0] = FUNC_1(VAR_7);
  VAR_3->hdr.aFrameCksum[1] = FUNC_1(&VAR_7[sizeof(u32)]);

  VAR_9 = VAR_3->iReCksum;
  VAR_3->iReCksum = 0;
  for(; VAR_6==VAR_1 && VAR_9<=VAR_4; VAR_9++){
    i64 VAR_11 = FUNC_7(VAR_9, VAR_5);
    VAR_6 = FUNC_2(VAR_3->pWalFd, VAR_7, VAR_5+VAR_2, VAR_11);
    if( VAR_6==VAR_1 ){
      u32 VAR_12, VAR_13;
      VAR_12 = FUNC_1(VAR_7);
      VAR_13 = FUNC_1(&VAR_7[4]);

      FUNC_6(VAR_3, VAR_12, VAR_13, &VAR_7[VAR_2], VAR_8);
      VAR_6 = FUNC_3(VAR_3->pWalFd, VAR_8, sizeof(VAR_8), VAR_11);
    }
  }

  FUNC_4(VAR_7);
  return VAR_6;
}
