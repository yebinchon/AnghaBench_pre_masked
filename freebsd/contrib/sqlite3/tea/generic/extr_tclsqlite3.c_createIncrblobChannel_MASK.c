
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zChannel ;
typedef int sqlite_int64 ;
typedef int sqlite3_blob ;
typedef int sqlite3 ;
typedef int Tcl_Interp ;
struct TYPE_6__ {int channel; TYPE_1__* pDb; struct TYPE_6__* pPrev; struct TYPE_6__* pNext; int * pBlob; scalar_t__ iSeek; } ;
struct TYPE_5__ {TYPE_2__* pIncrblob; int * db; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ IncrblobChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char const*,char const*,char const*,int ,int,int **) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(
  Tcl_Interp *VAR_7,
  SqliteDb *VAR_8,
  const char *VAR_9,
  const char *VAR_10,
  const char *VAR_11,
  sqlite_int64 VAR_12,
  int VAR_13
){
  IncrblobChannel *VAR_14;
  sqlite3 *VAR_15 = VAR_8->db;
  sqlite3_blob *VAR_16;
  int VAR_17;
  int VAR_18 = VAR_4|(VAR_13 ? 0 : VAR_6);


  static int VAR_19 = 0;
  char VAR_20[64];

  VAR_17 = FUNC_5(VAR_15, VAR_9, VAR_10, VAR_11, VAR_12, !VAR_13, &VAR_16);
  if( VAR_17!=VAR_1 ){
    FUNC_4(VAR_7, (char *)FUNC_6(VAR_8->db), VAR_5);
    return VAR_2;
  }

  VAR_14 = (IncrblobChannel *)FUNC_0(sizeof(IncrblobChannel));
  VAR_14->iSeek = 0;
  VAR_14->pBlob = VAR_16;

  FUNC_7(sizeof(VAR_20), VAR_20, "incrblob_%d", ++VAR_19);
  VAR_14->channel = FUNC_1(&VAR_0, VAR_20, VAR_14, VAR_18);
  FUNC_3(VAR_7, VAR_14->channel);


  VAR_14->pNext = VAR_8->pIncrblob;
  VAR_14->pPrev = 0;
  if( VAR_14->pNext ){
    VAR_14->pNext->pPrev = VAR_14;
  }
  VAR_8->pIncrblob = VAR_14;
  VAR_14->pDb = VAR_8;

  FUNC_4(VAR_7, (char *)FUNC_2(VAR_14->channel), VAR_5);
  return VAR_3;
}
