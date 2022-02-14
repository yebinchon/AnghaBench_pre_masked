
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dev; scalar_t__ ino; } ;
struct TYPE_7__ {int pLockMutex; TYPE_3__* pUnused; struct TYPE_7__* pNext; TYPE_1__ fileId; } ;
typedef TYPE_2__ unixInodeInfo ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_8__ {int flags; struct TYPE_8__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static UnixUnusedFd *FUNC_7(const char *VAR_3, int VAR_4){
  UnixUnusedFd *VAR_5 = 0;







  struct stat VAR_6;

  FUNC_5();
  if( VAR_2!=0 && 0==FUNC_1(VAR_3, &VAR_6) ){
    unixInodeInfo *VAR_7;

    VAR_7 = VAR_2;
    while( VAR_7 && (VAR_7->fileId.dev!=VAR_6.st_dev
                     || VAR_7->fileId.ino!=(u64)VAR_6.st_ino) ){
       VAR_7 = VAR_7->pNext;
    }
    if( VAR_7 ){
      UnixUnusedFd **VAR_8;
      FUNC_0( FUNC_4(VAR_7->pLockMutex) );
      FUNC_2(VAR_7->pLockMutex);
      VAR_4 &= (VAR_0|VAR_1);
      for(VAR_8=&VAR_7->pUnused; *VAR_8 && (*VAR_8)->flags!=VAR_4; VAR_8=&((*VAR_8)->pNext));
      VAR_5 = *VAR_8;
      if( VAR_5 ){
        *VAR_8 = VAR_5->pNext;
      }
      FUNC_3(VAR_7->pLockMutex);
    }
  }
  FUNC_6();

  return VAR_5;
}
