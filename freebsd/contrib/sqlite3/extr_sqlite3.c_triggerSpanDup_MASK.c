
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 char* FUNC_0 (int *,char const*,char const*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static char *FUNC_2(sqlite3 *VAR_0, const char *VAR_1, const char *VAR_2){
  char *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  int VAR_4;
  if( VAR_3 ) for(VAR_4=0; VAR_3[VAR_4]; VAR_4++) if( FUNC_1(VAR_3[VAR_4]) ) VAR_3[VAR_4] = ' ';
  return VAR_3;
}
