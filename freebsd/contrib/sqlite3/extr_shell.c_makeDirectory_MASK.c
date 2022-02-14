
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct stat*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(
  const char *VAR_3
){
  char *VAR_4 = FUNC_4("%s", VAR_3);
  int VAR_5 = VAR_2;

  if( VAR_4==0 ){
    VAR_5 = VAR_1;
  }else{
    int VAR_6 = (int)FUNC_5(VAR_4);
    int VAR_7 = 1;

    while( VAR_5==VAR_2 ){
      struct stat VAR_8;
      int VAR_9;

      for(; VAR_4[VAR_7]!='/' && VAR_7<VAR_6; VAR_7++);
      if( VAR_7==VAR_6 ) break;
      VAR_4[VAR_7] = '\0';

      VAR_9 = FUNC_1(VAR_4, &VAR_8);
      if( VAR_9!=0 ){
        if( FUNC_2(VAR_4, 0777) ) VAR_5 = VAR_0;
      }else{
        if( !FUNC_0(VAR_8.st_mode) ) VAR_5 = VAR_0;
      }
      VAR_4[VAR_7] = '/';
      VAR_7++;
    }

    FUNC_3(VAR_4);
  }

  return VAR_5;
}
