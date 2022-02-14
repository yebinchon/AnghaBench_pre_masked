
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eState; int journalMode; int errCode; scalar_t__ tempFile; scalar_t__ setMaster; scalar_t__ journalHdr; scalar_t__ journalOff; int fd; int jfd; scalar_t__ changeCountDone; int eLock; int exclusiveMode; int pWal; scalar_t__ pInJournal; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(Pager *VAR_14){

  FUNC_1( VAR_14->eState==VAR_10
       || VAR_14->eState==VAR_9
       || VAR_14->eState==VAR_2
  );

  FUNC_8(VAR_14->pInJournal);
  VAR_14->pInJournal = 0;
  FUNC_6(VAR_14);

  if( FUNC_4(VAR_14) ){
    FUNC_1( !FUNC_2(VAR_14->jfd) );
    FUNC_12(VAR_14->pWal);
    VAR_14->eState = VAR_9;
  }else if( !VAR_14->exclusiveMode ){
    int VAR_15;
    int VAR_16 = FUNC_2(VAR_14->fd)?FUNC_10(VAR_14->fd):0;






    FUNC_1( (VAR_4 & 5)!=1 );
    FUNC_1( (VAR_5 & 5)!=1 );
    FUNC_1( (VAR_8 & 5)!=1 );
    FUNC_1( (VAR_3 & 5)!=1 );
    FUNC_1( (VAR_7 & 5)==1 );
    FUNC_1( (VAR_6 & 5)==1 );
    if( 0==(VAR_16 & VAR_11)
     || 1!=(VAR_14->journalMode & 5)
    ){
      FUNC_9(VAR_14->jfd);
    }






    VAR_15 = FUNC_3(VAR_14, VAR_1);
    if( VAR_15!=VAR_12 && VAR_14->eState==VAR_2 ){
      VAR_14->eLock = VAR_13;
    }





    FUNC_1( VAR_14->errCode || VAR_14->eState!=VAR_2 );
    VAR_14->changeCountDone = 0;
    VAR_14->eState = VAR_9;
  }






  FUNC_1( VAR_14->errCode==VAR_12 || !VAR_0 );
  if( VAR_14->errCode ){
    if( VAR_14->tempFile==0 ){
      FUNC_5(VAR_14);
      VAR_14->changeCountDone = 0;
      VAR_14->eState = VAR_9;
    }else{
      VAR_14->eState = (FUNC_2(VAR_14->jfd) ? VAR_9 : VAR_10);
    }
    if( FUNC_0(VAR_14) ) FUNC_11(VAR_14->fd, 0, 0);
    VAR_14->errCode = VAR_12;
    FUNC_7(VAR_14);
  }

  VAR_14->journalOff = 0;
  VAR_14->journalHdr = 0;
  VAR_14->setMaster = 0;
}
