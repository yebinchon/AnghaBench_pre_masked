
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int,int ,int ,int **,char const**) ;

int FUNC_2(
  sqlite3 *VAR_2,
  const char *VAR_3,
  int VAR_4,
  sqlite3_stmt **VAR_5,
  const char **VAR_6
){
  int VAR_7;





  VAR_7 = FUNC_1(VAR_2,VAR_3,VAR_4,VAR_1,0,
                             VAR_5,VAR_6);
  FUNC_0( VAR_7==VAR_0 || VAR_5==0 || *VAR_5==0 );
  return VAR_7;
}
