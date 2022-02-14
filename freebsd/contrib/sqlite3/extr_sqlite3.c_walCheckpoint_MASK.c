
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_19__ {scalar_t__ isInterrupted; } ;
struct TYPE_21__ {scalar_t__ mallocFailed; TYPE_1__ u1; } ;
typedef TYPE_3__ sqlite3 ;
typedef int i64 ;
typedef int WalIterator ;
struct TYPE_22__ {scalar_t__ nBackfill; scalar_t__* aReadMark; scalar_t__ nBackfillAttempted; } ;
typedef TYPE_4__ WalCkptInfo ;
struct TYPE_20__ {scalar_t__ mxFrame; scalar_t__ nPage; } ;
struct TYPE_23__ {int writeLock; int pWalFd; TYPE_2__ hdr; int pDbFd; } ;
typedef TYPE_5__ Wal ;
struct TYPE_18__ {scalar_t__ mxFrame; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int *,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int *,int,int) ;
 int FUNC_10 (int,scalar_t__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_5__*,int (*) (void*),void*,int ,int) ;
 TYPE_4__* FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (TYPE_5__*,scalar_t__) ;
 TYPE_10__* FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_5__*,scalar_t__,int **) ;
 scalar_t__ FUNC_19 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*,scalar_t__) ;
 int FUNC_22 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_23(
  Wal *VAR_11,
  sqlite3 *VAR_12,
  int VAR_13,
  int (*VAR_14)(void*),
  void *VAR_15,
  int VAR_16,
  u8 *VAR_17
){
  int VAR_18 = VAR_8;
  int VAR_19;
  WalIterator *VAR_20 = 0;
  u32 VAR_21 = 0;
  u32 VAR_22 = 0;
  u32 VAR_23;
  u32 VAR_24;
  int VAR_25;
  volatile WalCkptInfo *VAR_26;

  VAR_19 = FUNC_20(VAR_11);
  FUNC_11( VAR_19<=32768 );
  FUNC_11( VAR_19>=65536 );
  VAR_26 = FUNC_13(VAR_11);
  if( VAR_26->nBackfill<VAR_11->hdr.mxFrame ){



    FUNC_3( VAR_13!=VAR_2 || VAR_14==0 );






    VAR_23 = VAR_11->hdr.mxFrame;
    VAR_24 = VAR_11->hdr.nPage;
    for(VAR_25=1; VAR_25<VAR_10; VAR_25++){
      u32 VAR_27 = VAR_26->aReadMark[VAR_25];
      if( VAR_23>VAR_27 ){
        FUNC_3( VAR_27<=VAR_11->hdr.mxFrame );
        VAR_18 = FUNC_12(VAR_11, VAR_14, VAR_15, FUNC_2(VAR_25), 1);
        if( VAR_18==VAR_8 ){
          VAR_26->aReadMark[VAR_25] = (VAR_25==1 ? VAR_23 : VAR_0);
          FUNC_22(VAR_11, FUNC_2(VAR_25), 1);
        }else if( VAR_18==VAR_1 ){
          VAR_23 = VAR_27;
          VAR_14 = 0;
        }else{
          goto walcheckpoint_out;
        }
      }
    }


    if( VAR_26->nBackfill<VAR_23 ){
      VAR_18 = FUNC_18(VAR_11, VAR_26->nBackfill, &VAR_20);
      FUNC_3( VAR_18==VAR_8 || VAR_20==0 );
    }

    if( VAR_20
     && (VAR_18 = FUNC_12(VAR_11, VAR_14, VAR_15, FUNC_2(0),1))==VAR_8
    ){
      u32 VAR_28 = VAR_26->nBackfill;

      VAR_26->nBackfillAttempted = VAR_23;


      VAR_18 = FUNC_7(VAR_11->pWalFd, FUNC_0(VAR_16));




      if( VAR_18==VAR_8 ){
        i64 VAR_29 = ((i64)VAR_24 * VAR_19);
        i64 VAR_30;
        VAR_18 = FUNC_5(VAR_11->pDbFd, &VAR_30);
        if( VAR_18==VAR_8 && VAR_30<VAR_29 ){
          FUNC_4(VAR_11->pDbFd, VAR_5, &VAR_29);
        }
      }



      while( VAR_18==VAR_8 && 0==FUNC_19(VAR_20, &VAR_21, &VAR_22) ){
        i64 VAR_31;
        FUNC_3( FUNC_15(VAR_11, VAR_22)==VAR_21 );
        if( VAR_12->u1.isInterrupted ){
          VAR_18 = VAR_12->mallocFailed ? VAR_7 : VAR_6;
          break;
        }
        if( VAR_22<=VAR_28 || VAR_22>VAR_23 || VAR_21>VAR_24 ){
          continue;
        }
        VAR_31 = FUNC_14(VAR_22, VAR_19) + VAR_9;

        VAR_18 = FUNC_6(VAR_11->pWalFd, VAR_17, VAR_19, VAR_31);
        if( VAR_18!=VAR_8 ) break;
        VAR_31 = (VAR_21-1)*(i64)VAR_19;
        FUNC_11( FUNC_1(VAR_31) );
        VAR_18 = FUNC_9(VAR_11->pDbFd, VAR_17, VAR_19, VAR_31);
        if( VAR_18!=VAR_8 ) break;
      }


      if( VAR_18==VAR_8 ){
        if( VAR_23==FUNC_16(VAR_11)->mxFrame ){
          i64 VAR_32 = VAR_11->hdr.nPage*(i64)VAR_19;
          FUNC_11( FUNC_1(VAR_32) );
          VAR_18 = FUNC_8(VAR_11->pDbFd, VAR_32);
          if( VAR_18==VAR_8 ){
            VAR_18 = FUNC_7(VAR_11->pDbFd, FUNC_0(VAR_16));
          }
        }
        if( VAR_18==VAR_8 ){
          VAR_26->nBackfill = VAR_23;
        }
      }


      FUNC_22(VAR_11, FUNC_2(0), 1);
    }

    if( VAR_18==VAR_1 ){


      VAR_18 = VAR_8;
    }
  }






  if( VAR_18==VAR_8 && VAR_13!=VAR_2 ){
    FUNC_3( VAR_11->writeLock );
    if( VAR_26->nBackfill<VAR_11->hdr.mxFrame ){
      VAR_18 = VAR_1;
    }else if( VAR_13>=VAR_3 ){
      u32 VAR_33;
      FUNC_10(4, &VAR_33);
      FUNC_3( VAR_26->nBackfill==VAR_11->hdr.mxFrame );
      VAR_18 = FUNC_12(VAR_11, VAR_14, VAR_15, FUNC_2(1), VAR_10-1);
      if( VAR_18==VAR_8 ){
        if( VAR_13==VAR_4 ){
          FUNC_21(VAR_11, VAR_33);
          VAR_18 = FUNC_8(VAR_11->pWalFd, 0);
        }
        FUNC_22(VAR_11, FUNC_2(1), VAR_10-1);
      }
    }
  }

 walcheckpoint_out:
  FUNC_17(VAR_20);
  return VAR_18;
}
