
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int eFileLock; int lastErrno; int szChunk; int iBusyTimeout; int mmapSizeMax; int dbUpdate; int mmapSize; int nFetchOut; TYPE_1__* pVfs; int h; } ;
typedef TYPE_2__ unixFile ;
typedef int sqlite3_file ;
typedef int i64 ;
struct TYPE_11__ {int mxMmap; } ;
struct TYPE_9__ {int mxPathname; int zName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int,void*) ;
 TYPE_6__ VAR_10 ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(sqlite3_file *VAR_11, int VAR_12, void *VAR_13){
  unixFile *VAR_14 = (unixFile*)VAR_11;
  switch( VAR_12 ){
    case 137: {
      *(int*)VAR_13 = VAR_14->eFileLock;
      return VAR_7;
    }
    case 138: {
      *(int*)VAR_13 = VAR_14->lastErrno;
      return VAR_7;
    }
    case 143: {
      VAR_14->szChunk = *(int *)VAR_13;
      return VAR_7;
    }
    case 130: {
      int VAR_15;
      FUNC_0(1);
      VAR_15 = FUNC_1(VAR_14, *(i64 *)VAR_13);
      FUNC_0(0);
      return VAR_15;
    }
    case 134: {
      FUNC_9(VAR_14, VAR_8, (int*)VAR_13);
      return VAR_7;
    }
    case 133: {
      FUNC_9(VAR_14, VAR_9, (int*)VAR_13);
      return VAR_7;
    }
    case 128: {
      *(char**)VAR_13 = FUNC_6("%s", VAR_14->pVfs->zName);
      return VAR_7;
    }
    case 129: {
      char *VAR_16 = FUNC_5( VAR_14->pVfs->mxPathname );
      if( VAR_16 ){
        FUNC_7(VAR_14->pVfs->mxPathname, VAR_16);
        *(char**)VAR_13 = VAR_16;
      }
      return VAR_7;
    }
    case 139: {
      *(int*)VAR_13 = FUNC_2(VAR_14);
      return VAR_7;
    }
  }
  return VAR_6;
}
