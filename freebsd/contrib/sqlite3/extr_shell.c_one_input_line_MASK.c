
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int *) ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *FUNC_6(FILE *VAR_4, char *VAR_5, int VAR_6){
  char *VAR_7;
  char *VAR_8;
  if( VAR_4!=0 ){
    VAR_8 = FUNC_2(VAR_5, VAR_4);
  }else{
    VAR_7 = VAR_6 ? VAR_0 : VAR_1;





    FUNC_1(VAR_5);
    VAR_8 = FUNC_5(VAR_7);
    if( VAR_8 && *VAR_8 ) FUNC_4(VAR_8);

  }
  return VAR_8;
}
