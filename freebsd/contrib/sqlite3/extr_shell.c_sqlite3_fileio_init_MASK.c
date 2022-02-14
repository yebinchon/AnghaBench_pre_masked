
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int,int ,int ,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_3(
  sqlite3 *VAR_5,
  char **VAR_6,
  const sqlite3_api_routines *VAR_7
){
  int VAR_8 = VAR_0;
  FUNC_0(VAR_7);
  (void)VAR_6;
  VAR_8 = FUNC_2(VAR_5, "readfile", 1, VAR_1, 0,
                               VAR_3, 0, 0);
  if( VAR_8==VAR_0 ){
    VAR_8 = FUNC_2(VAR_5, "writefile", -1, VAR_1, 0,
                                 VAR_4, 0, 0);
  }
  if( VAR_8==VAR_0 ){
    VAR_8 = FUNC_2(VAR_5, "lsmode", 1, VAR_1, 0,
                                 VAR_2, 0, 0);
  }
  if( VAR_8==VAR_0 ){
    VAR_8 = FUNC_1(VAR_5);
  }
  return VAR_8;
}
