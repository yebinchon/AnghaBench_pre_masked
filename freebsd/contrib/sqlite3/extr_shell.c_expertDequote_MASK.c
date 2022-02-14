
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0){
  int VAR_1 = FUNC_0(VAR_0);
  char *VAR_2 = FUNC_2(VAR_1);

  FUNC_1( VAR_0[0]=='\'' );
  FUNC_1( VAR_0[VAR_1-1]=='\'' );

  if( VAR_2 ){
    int VAR_3 = 0;
    int VAR_4 = 0;
    for(VAR_4=1; VAR_4<(VAR_1-1); VAR_4++){
      if( VAR_0[VAR_4]=='\'' ){
        FUNC_1( VAR_0[VAR_4+1]=='\'' );
        VAR_4++;
      }
      VAR_2[VAR_3++] = VAR_0[VAR_4];
    }
    VAR_2[VAR_3] = '\0';
  }

  return VAR_2;
}
