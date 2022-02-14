
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char const*,int ) ;

int FUNC_6(const char *VAR_5, int VAR_6){
  FILE *VAR_7 = FUNC_1(VAR_5, "rb");
  size_t VAR_8;
  int VAR_9 = VAR_3;
  char VAR_10[100];
  if( VAR_7==0 ){
    if( VAR_6 && FUNC_5("%.zip",VAR_5,0)==0 ){
       return VAR_4;
    }else{
       return VAR_2;
    }
  }
  VAR_8 = FUNC_2(VAR_10, 16, 1, VAR_7);
  if( VAR_8==1 && FUNC_4(VAR_10, "SQLite format 3", 16)==0 ){
    FUNC_0(VAR_7);
    return VAR_2;
  }
  FUNC_3(VAR_7, -25, VAR_0);
  VAR_8 = FUNC_2(VAR_10, 25, 1, VAR_7);
  if( VAR_8==1 && FUNC_4(VAR_10, "Start-Of-SQLite3-", 17)==0 ){
    VAR_9 = VAR_1;
  }else{
    FUNC_3(VAR_7, -22, VAR_0);
    VAR_8 = FUNC_2(VAR_10, 22, 1, VAR_7);
    if( VAR_8==1 && VAR_10[0]==0x50 && VAR_10[1]==0x4b && VAR_10[2]==0x05
       && VAR_10[3]==0x06 ){
      VAR_9 = VAR_4;
    }else if( VAR_8==0 && VAR_6 && FUNC_5("%.zip",VAR_5,0)==0 ){
      VAR_9 = VAR_4;
    }
  }
  FUNC_0(VAR_7);
  return VAR_9;
}
