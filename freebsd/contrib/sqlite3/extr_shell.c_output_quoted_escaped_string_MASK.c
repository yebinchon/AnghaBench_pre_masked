
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (char const*,char*,char*,char*) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_0, const char *VAR_1){
  int VAR_2;
  char VAR_3;
  FUNC_1(VAR_0, 1);
  for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\'' && VAR_3!='\n' && VAR_3!='\r'; VAR_2++){}
  if( VAR_3==0 ){
    FUNC_4(VAR_0,"'%s'",VAR_1);
  }else{
    const char *VAR_4 = 0;
    const char *VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    char VAR_8[20], VAR_9[20];
    for(VAR_2=0; VAR_1[VAR_2]; VAR_2++){
      if( VAR_1[VAR_2]=='\n' ) VAR_6++;
      if( VAR_1[VAR_2]=='\r' ) VAR_7++;
    }
    if( VAR_6 ){
      FUNC_0(VAR_0, "replace(");
      VAR_4 = FUNC_3(VAR_1, "\\n", "\\012", VAR_8);
    }
    if( VAR_7 ){
      FUNC_0(VAR_0, "replace(");
      VAR_5 = FUNC_3(VAR_1, "\\r", "\\015", VAR_9);
    }
    FUNC_0(VAR_0, "'");
    while( *VAR_1 ){
      for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\n' && VAR_3!='\r' && VAR_3!='\''; VAR_2++){}
      if( VAR_3=='\'' ) VAR_2++;
      if( VAR_2 ){
        FUNC_4(VAR_0, "%.*s", VAR_2, VAR_1);
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
      if( VAR_3=='\n' ){
        FUNC_0(VAR_0, "%s", VAR_4);
        continue;
      }
      FUNC_0(VAR_0, "%s", VAR_5);
    }
    FUNC_0(VAR_0, "'");
    if( VAR_7 ){
      FUNC_0(VAR_0, ",'%s',char(13))", VAR_5);
    }
    if( VAR_6 ){
      FUNC_0(VAR_0, ",'%s',char(10))", VAR_4);
    }
  }
  FUNC_2(VAR_0, 1);
}
