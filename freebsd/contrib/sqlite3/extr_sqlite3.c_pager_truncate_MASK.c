
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {scalar_t__ eState; int pageSize; scalar_t__ eLock; char* pTmpSpace; scalar_t__ dbFileSize; int fd; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Pager *VAR_6, Pgno VAR_7){
  int VAR_8 = VAR_5;
  FUNC_0( VAR_6->eState!=VAR_1 );
  FUNC_0( VAR_6->eState!=VAR_3 );

  if( FUNC_1(VAR_6->fd)
   && (VAR_6->eState>=VAR_4 || VAR_6->eState==VAR_2)
  ){
    i64 VAR_9, VAR_10;
    int VAR_11 = VAR_6->pageSize;
    FUNC_0( VAR_6->eLock==VAR_0 );

    VAR_8 = FUNC_3(VAR_6->fd, &VAR_9);
    VAR_10 = VAR_11*(i64)VAR_7;
    if( VAR_8==VAR_5 && VAR_9!=VAR_10 ){
      if( VAR_9>VAR_10 ){
        VAR_8 = FUNC_4(VAR_6->fd, VAR_10);
      }else if( (VAR_9+VAR_11)<=VAR_10 ){
        char *VAR_12 = VAR_6->pTmpSpace;
        FUNC_2(VAR_12, 0, VAR_11);
        FUNC_6( (VAR_10-VAR_11) == VAR_9 );
        FUNC_6( (VAR_10-VAR_11) > VAR_9 );
        VAR_8 = FUNC_5(VAR_6->fd, VAR_12, VAR_11, VAR_10-VAR_11);
      }
      if( VAR_8==VAR_5 ){
        VAR_6->dbFileSize = VAR_7;
      }
    }
  }
  return VAR_8;
}
