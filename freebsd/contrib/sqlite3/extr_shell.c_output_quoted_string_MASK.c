
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static void FUNC_4(FILE *VAR_0, const char *VAR_1){
  int VAR_2;
  char VAR_3;
  FUNC_1(VAR_0, 1);
  for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\''; VAR_2++){}
  if( VAR_3==0 ){
    FUNC_3(VAR_0,"'%s'",VAR_1);
  }else{
    FUNC_0(VAR_0, "'");
    while( *VAR_1 ){
      for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\''; VAR_2++){}
      if( VAR_3=='\'' ) VAR_2++;
      if( VAR_2 ){
        FUNC_3(VAR_0, "%.*s", VAR_2, VAR_1);
        VAR_1 += VAR_2;
      }
      if( VAR_3=='\'' ){
        FUNC_0(VAR_0, "'");
        continue;
      }
      if( VAR_3==0 ){
        break;
      }
      VAR_1++;
    }
    FUNC_0(VAR_0, "'");
  }
  FUNC_2(VAR_0, 1);
}
