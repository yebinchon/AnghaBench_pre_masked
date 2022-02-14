
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_file ;
typedef scalar_t__ i64 ;
struct TYPE_9__ {scalar_t__ zChunk; struct TYPE_9__* pNext; } ;
struct TYPE_7__ {scalar_t__ iOffset; } ;
struct TYPE_8__ {int nChunkSize; TYPE_1__ endpoint; TYPE_3__* pFirst; int flags; int zJournal; int pVfs; } ;
typedef TYPE_2__ MemJournal ;
typedef TYPE_3__ FileChunk ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int ,int ) ;
 int FUNC_4 (int *,int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(MemJournal *VAR_1){
  int VAR_2;
  sqlite3_file *VAR_3 = (sqlite3_file*)VAR_1;
  MemJournal VAR_4 = *VAR_1;

  FUNC_1(VAR_1, 0, sizeof(MemJournal));
  VAR_2 = FUNC_3(VAR_4.pVfs, VAR_4.zJournal, VAR_3, VAR_4.flags, 0);
  if( VAR_2==VAR_0 ){
    int VAR_5 = VAR_4.nChunkSize;
    i64 VAR_6 = 0;
    FileChunk *VAR_7;
    for(VAR_7=VAR_4.pFirst; VAR_7; VAR_7=VAR_7->pNext){
      if( VAR_6 + VAR_5 > VAR_4.endpoint.iOffset ){
        VAR_5 = VAR_4.endpoint.iOffset - VAR_6;
      }
      VAR_2 = FUNC_4(VAR_3, (u8*)VAR_7->zChunk, VAR_5, VAR_6);
      if( VAR_2 ) break;
      VAR_6 += VAR_5;
    }
    if( VAR_2==VAR_0 ){

      FUNC_0(&VAR_4);
    }
  }
  if( VAR_2!=VAR_0 ){




    FUNC_2(VAR_3);
    *VAR_1 = VAR_4;
  }
  return VAR_2;
}
