
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;
struct TYPE_2__ {int* aLimit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int,int ,int ) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7
){
  const unsigned char *VAR_8;
  const unsigned char *VAR_9;
  int VAR_10;
  int VAR_11;
  i64 VAR_12, VAR_13;
  int VAR_14 = 0;

  FUNC_1( VAR_6==3 || VAR_6==2 );
  if( FUNC_9(VAR_7[1])==VAR_2
   || (VAR_6==3 && FUNC_9(VAR_7[2])==VAR_2)
  ){
    return;
  }
  VAR_11 = FUNC_9(VAR_7[0]);
  VAR_12 = FUNC_7(VAR_7[1]);
  if( VAR_11==VAR_0 ){
    VAR_10 = FUNC_6(VAR_7[0]);
    VAR_8 = FUNC_5(VAR_7[0]);
    if( VAR_8==0 ) return;
    FUNC_1( VAR_10==FUNC_6(VAR_7[0]) );
  }else{
    VAR_8 = FUNC_8(VAR_7[0]);
    if( VAR_8==0 ) return;
    VAR_10 = 0;
    if( VAR_12<0 ){
      for(VAR_9=VAR_8; *VAR_9; VAR_10++){
        FUNC_0(VAR_9);
      }
    }
  }
  if( VAR_6==3 ){
    VAR_13 = FUNC_7(VAR_7[2]);
    if( VAR_13<0 ){
      VAR_13 = -VAR_13;
      VAR_14 = 1;
    }
  }else{
    VAR_13 = FUNC_2(VAR_5)->aLimit[VAR_1];
  }
  if( VAR_12<0 ){
    VAR_12 += VAR_10;
    if( VAR_12<0 ){
      VAR_13 += VAR_12;
      if( VAR_13<0 ) VAR_13 = 0;
      VAR_12 = 0;
    }
  }else if( VAR_12>0 ){
    VAR_12--;
  }else if( VAR_13>0 ){
    VAR_13--;
  }
  if( VAR_14 ){
    VAR_12 -= VAR_13;
    if( VAR_12<0 ){
      VAR_13 += VAR_12;
      VAR_12 = 0;
    }
  }
  FUNC_1( VAR_12>=0 && VAR_13>=0 );
  if( VAR_11!=VAR_0 ){
    while( *VAR_8 && VAR_12 ){
      FUNC_0(VAR_8);
      VAR_12--;
    }
    for(VAR_9=VAR_8; *VAR_9 && VAR_13; VAR_13--){
      FUNC_0(VAR_9);
    }
    FUNC_4(VAR_5, (char*)VAR_8, VAR_9-VAR_8, VAR_3,
                          VAR_4);
  }else{
    if( VAR_12+VAR_13>VAR_10 ){
      VAR_13 = VAR_10-VAR_12;
      if( VAR_13<0 ) VAR_13 = 0;
    }
    FUNC_3(VAR_5, (char*)&VAR_8[VAR_12], (u64)VAR_13, VAR_3);
  }
}
