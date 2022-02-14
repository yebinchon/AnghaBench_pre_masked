
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int szChunk; scalar_t__ mmapSizeMax; int mmapSize; int zPath; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {int st_size; int st_blksize; } ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(unixFile *VAR_7, i64 VAR_8){
  if( VAR_7->szChunk>0 ){
    i64 VAR_9;
    struct stat VAR_10;

    if( FUNC_2(VAR_7->h, &VAR_10) ){
      return VAR_2;
    }

    VAR_9 = ((VAR_8+VAR_7->szChunk-1) / VAR_7->szChunk) * VAR_7->szChunk;
    if( VAR_9>(i64)VAR_10.st_size ){
      int VAR_11 = VAR_10.st_blksize;
      int VAR_12 = 0;
      i64 VAR_13;

      VAR_13 = (VAR_10.st_size/VAR_11)*VAR_11 + VAR_11 - 1;
      FUNC_0( VAR_13>=VAR_10.st_size );
      FUNC_0( ((VAR_13+1)%VAR_11)==0 );
      for( ; VAR_13<VAR_9+VAR_11-1; VAR_13+=VAR_11 ){
        if( VAR_13>=VAR_9 ) VAR_13 = VAR_9 - 1;
        VAR_12 = FUNC_4(VAR_7, VAR_13, "", 1);
        if( VAR_12!=1 ) return VAR_4;
      }

    }
  }
  return VAR_5;
}
