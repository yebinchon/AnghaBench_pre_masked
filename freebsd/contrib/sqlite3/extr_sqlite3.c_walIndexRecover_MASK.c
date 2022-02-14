
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef scalar_t__ i64 ;
typedef int WalIndexHdr ;
struct TYPE_13__ {int nBackfillAttempted; int* aReadMark; scalar_t__ nBackfill; } ;
typedef TYPE_1__ WalCkptInfo ;
struct TYPE_12__ {scalar_t__ bigEndCksum; int* aFrameCksum; int mxFrame; int nPage; scalar_t__ szPage; int aSalt; } ;
struct TYPE_14__ {int ckptLock; int writeLock; int szPage; int zWalName; TYPE_11__ hdr; int pWalFd; void* nCkpt; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (TYPE_11__*,int ,int) ;
 void* FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*,int,scalar_t__) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (int ,char*,int,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,scalar_t__*,scalar_t__,int ,int*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int*,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (TYPE_2__*,int,int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int,int) ;
 int FUNC_18 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_19(Wal *VAR_15){
  int VAR_16;
  i64 VAR_17;
  u32 VAR_18[2] = {0, 0};
  int VAR_19;







  FUNC_2( VAR_15->ckptLock==1 || VAR_15->ckptLock==0 );
  FUNC_2( VAR_7==VAR_14+1 );
  FUNC_2( VAR_8==VAR_7 );
  FUNC_2( VAR_15->writeLock );
  VAR_19 = VAR_7 + VAR_15->ckptLock;
  VAR_16 = FUNC_17(VAR_15, VAR_19, FUNC_1(0)-VAR_19);
  if( VAR_16==VAR_6 ){
    VAR_16 = FUNC_17(VAR_15, FUNC_1(1), VAR_13-1);
    if( VAR_16!=VAR_6 ){
      FUNC_18(VAR_15, VAR_19, FUNC_1(0)-VAR_19);
    }
  }
  if( VAR_16 ){
    return VAR_16;
  }

  FUNC_0(("WAL%p: recovery begin...\n", VAR_15));

  FUNC_4(&VAR_15->hdr, 0, sizeof(WalIndexHdr));

  VAR_16 = FUNC_6(VAR_15->pWalFd, &VAR_17);
  if( VAR_16!=VAR_6 ){
    goto recovery_error;
  }

  if( VAR_17>VAR_10 ){
    u8 VAR_20[VAR_10];
    u8 *VAR_21 = 0;
    int VAR_22;
    u8 *VAR_23;
    int VAR_24;
    i64 VAR_25;
    int VAR_26;
    u32 VAR_27;
    u32 VAR_28;
    int VAR_29;


    VAR_16 = FUNC_7(VAR_15->pWalFd, VAR_20, VAR_10, 0);
    if( VAR_16!=VAR_6 ){
      goto recovery_error;
    }






    VAR_27 = FUNC_5(&VAR_20[0]);
    VAR_26 = FUNC_5(&VAR_20[8]);
    if( (VAR_27&0xFFFFFFFE)!=VAR_11
     || VAR_26&(VAR_26-1)
     || VAR_26>VAR_3
     || VAR_26<512
    ){
      goto finished;
    }
    VAR_15->hdr.bigEndCksum = (u8)(VAR_27&0x00000001);
    VAR_15->szPage = VAR_26;
    VAR_15->nCkpt = FUNC_5(&VAR_20[12]);
    FUNC_3(&VAR_15->hdr.aSalt, &VAR_20[16], 8);


    FUNC_12(VAR_15->hdr.bigEndCksum==VAR_1,
        VAR_20, VAR_10-2*4, 0, VAR_15->hdr.aFrameCksum
    );
    if( VAR_15->hdr.aFrameCksum[0]!=FUNC_5(&VAR_20[24])
     || VAR_15->hdr.aFrameCksum[1]!=FUNC_5(&VAR_20[28])
    ){
      goto finished;
    }



    VAR_28 = FUNC_5(&VAR_20[4]);
    if( VAR_28!=VAR_12 ){
      VAR_16 = VAR_2;
      goto finished;
    }


    VAR_22 = VAR_26 + VAR_9;
    VAR_21 = (u8 *)FUNC_10(VAR_22);
    if( !VAR_21 ){
      VAR_16 = VAR_4;
      goto recovery_error;
    }
    VAR_23 = &VAR_21[VAR_9];


    VAR_24 = 0;
    for(VAR_25=VAR_10; (VAR_25+VAR_22)<=VAR_17; VAR_25+=VAR_22){
      u32 VAR_30;
      u32 VAR_31;


      VAR_24++;
      VAR_16 = FUNC_7(VAR_15->pWalFd, VAR_21, VAR_22, VAR_25);
      if( VAR_16!=VAR_6 ) break;
      VAR_29 = FUNC_14(VAR_15, &VAR_30, &VAR_31, VAR_23, VAR_21);
      if( !VAR_29 ) break;
      VAR_16 = FUNC_15(VAR_15, VAR_24, VAR_30);
      if( VAR_16!=VAR_6 ) break;


      if( VAR_31 ){
        VAR_15->hdr.mxFrame = VAR_24;
        VAR_15->hdr.nPage = VAR_31;
        VAR_15->hdr.szPage = (u16)((VAR_26&0xff00) | (VAR_26>>16));
        FUNC_11( VAR_26<=32768 );
        FUNC_11( VAR_26>=65536 );
        VAR_18[0] = VAR_15->hdr.aFrameCksum[0];
        VAR_18[1] = VAR_15->hdr.aFrameCksum[1];
      }
    }

    FUNC_8(VAR_21);
  }

finished:
  if( VAR_16==VAR_6 ){
    volatile WalCkptInfo *VAR_32;
    int VAR_33;
    VAR_15->hdr.aFrameCksum[0] = VAR_18[0];
    VAR_15->hdr.aFrameCksum[1] = VAR_18[1];
    FUNC_16(VAR_15);





    VAR_32 = FUNC_13(VAR_15);
    VAR_32->nBackfill = 0;
    VAR_32->nBackfillAttempted = VAR_15->hdr.mxFrame;
    VAR_32->aReadMark[0] = 0;
    for(VAR_33=1; VAR_33<VAR_13; VAR_33++) VAR_32->aReadMark[VAR_33] = VAR_0;
    if( VAR_15->hdr.mxFrame ) VAR_32->aReadMark[1] = VAR_15->hdr.mxFrame;






    if( VAR_15->hdr.nPage ){
      FUNC_9(VAR_5,
          "recovered %d frames from WAL file %s",
          VAR_15->hdr.mxFrame, VAR_15->zWalName
      );
    }
  }

recovery_error:
  FUNC_0(("WAL%p: recovery %s\n", VAR_15, VAR_16 ? "failed" : "ok"));
  FUNC_18(VAR_15, VAR_19, FUNC_1(0)-VAR_19);
  FUNC_18(VAR_15, FUNC_1(1), VAR_13-1);
  return VAR_16;
}
