
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static char *FUNC_8(char *VAR_2, FILE *VAR_3){
  int VAR_4 = VAR_2==0 ? 0 : 100;
  int VAR_5 = 0;

  while( 1 ){
    if( VAR_5+100>VAR_4 ){
      VAR_4 = VAR_4*2 + 100;
      VAR_2 = FUNC_3(VAR_2, VAR_4);
      if( VAR_2==0 ) FUNC_4();
    }
    if( FUNC_0(&VAR_2[VAR_5], VAR_4 - VAR_5, VAR_3)==0 ){
      if( VAR_5==0 ){
        FUNC_1(VAR_2);
        return 0;
      }
      VAR_2[VAR_5] = 0;
      break;
    }
    while( VAR_2[VAR_5] ) VAR_5++;
    if( VAR_5>0 && VAR_2[VAR_5-1]=='\n' ){
      VAR_5--;
      if( VAR_5>0 && VAR_2[VAR_5-1]=='\r' ) VAR_5--;
      VAR_2[VAR_5] = 0;
      break;
    }
  }
  return VAR_2;
}
