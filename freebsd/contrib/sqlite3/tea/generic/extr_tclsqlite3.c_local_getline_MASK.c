
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, FILE *VAR_1){
  char *VAR_2;
  int VAR_3;
  int VAR_4;

  VAR_3 = 100;
  VAR_2 = FUNC_2( VAR_3 );
  if( VAR_2==0 ) return 0;
  VAR_4 = 0;
  while( 1 ){
    if( VAR_4+100>VAR_3 ){
      VAR_3 = VAR_3*2 + 100;
      VAR_2 = FUNC_3(VAR_2, VAR_3);
      if( VAR_2==0 ) return 0;
    }
    if( FUNC_0(&VAR_2[VAR_4], VAR_3 - VAR_4, VAR_1)==0 ){
      if( VAR_4==0 ){
        FUNC_1(VAR_2);
        return 0;
      }
      VAR_2[VAR_4] = 0;
      break;
    }
    while( VAR_2[VAR_4] ){ VAR_4++; }
    if( VAR_4>0 && VAR_2[VAR_4-1]=='\n' ){
      VAR_4--;
      VAR_2[VAR_4] = 0;
      break;
    }
  }
  VAR_2 = FUNC_3( VAR_2, VAR_4+1 );
  return VAR_2;
}
