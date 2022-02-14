
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_7(FILE *VAR_1, const char *VAR_2){
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = 0;
  char *VAR_6;
  if( VAR_2==0
   || VAR_2[0]=='0'
   || FUNC_5(VAR_2,"-a")==0
   || FUNC_5(VAR_2,"-all")==0
  ){

    if( VAR_2==0 ) VAR_2 = "";
    for(VAR_3=0; VAR_3<FUNC_0(VAR_0); VAR_3++){
      if( VAR_0[VAR_3][0]=='.' || VAR_2[0] ){
        FUNC_6(VAR_1, "%s\n", VAR_0[VAR_3]);
        VAR_5++;
      }
    }
  }else{

    VAR_6 = FUNC_2(".%s*", VAR_2);
    for(VAR_3=0; VAR_3<FUNC_0(VAR_0); VAR_3++){
      if( FUNC_3(VAR_6, VAR_0[VAR_3])==0 ){
        FUNC_6(VAR_1, "%s\n", VAR_0[VAR_3]);
        VAR_4 = VAR_3+1;
        VAR_5++;
      }
    }
    FUNC_1(VAR_6);
    if( VAR_5 ){
      if( VAR_5==1 ){


        while( VAR_4<FUNC_0(VAR_0)-1 && VAR_0[VAR_4][0]!='.' ){
          FUNC_6(VAR_1, "%s\n", VAR_0[VAR_4]);
          VAR_4++;
        }
      }
      return VAR_5;
    }


    VAR_6 = FUNC_2("%%%s%%", VAR_2);
    for(VAR_3=0; VAR_3<FUNC_0(VAR_0); VAR_3++){
      if( VAR_0[VAR_3][0]=='.' ) VAR_4 = VAR_3;
      if( FUNC_4(VAR_6, VAR_0[VAR_3], 0)==0 ){
        FUNC_6(VAR_1, "%s\n", VAR_0[VAR_4]);
        while( VAR_4<FUNC_0(VAR_0)-1 && VAR_0[VAR_4+1][0]!='.' ){
          VAR_4++;
          FUNC_6(VAR_1, "%s\n", VAR_0[VAR_4]);
        }
        VAR_3 = VAR_4;
        VAR_5++;
      }
    }
    FUNC_1(VAR_6);
  }
  return VAR_5;
}
