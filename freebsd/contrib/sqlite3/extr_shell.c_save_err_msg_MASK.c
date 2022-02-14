
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(
  sqlite3 *VAR_0
){
  int VAR_1 = 1+FUNC_3(FUNC_1(VAR_0));
  char *VAR_2 = FUNC_2(VAR_1);
  if( VAR_2 ){
    FUNC_0(VAR_2, FUNC_1(VAR_0), VAR_1);
  }
  return VAR_2;
}
