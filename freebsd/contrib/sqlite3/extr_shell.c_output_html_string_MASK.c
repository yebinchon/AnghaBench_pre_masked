
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,char const*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0, const char *VAR_1){
  int VAR_2;
  if( VAR_1==0 ) VAR_1 = "";
  while( *VAR_1 ){
    for(VAR_2=0; VAR_1[VAR_2]
            && VAR_1[VAR_2]!='<'
            && VAR_1[VAR_2]!='&'
            && VAR_1[VAR_2]!='>'
            && VAR_1[VAR_2]!='\"'
            && VAR_1[VAR_2]!='\'';
        VAR_2++){}
    if( VAR_2>0 ){
      FUNC_1(VAR_0,"%.*s",VAR_2,VAR_1);
    }
    if( VAR_1[VAR_2]=='<' ){
      FUNC_0(VAR_0,"&lt;");
    }else if( VAR_1[VAR_2]=='&' ){
      FUNC_0(VAR_0,"&amp;");
    }else if( VAR_1[VAR_2]=='>' ){
      FUNC_0(VAR_0,"&gt;");
    }else if( VAR_1[VAR_2]=='\"' ){
      FUNC_0(VAR_0,"&quot;");
    }else if( VAR_1[VAR_2]=='\'' ){
      FUNC_0(VAR_0,"&#39;");
    }else{
      break;
    }
    VAR_1 += VAR_2 + 1;
  }
}
