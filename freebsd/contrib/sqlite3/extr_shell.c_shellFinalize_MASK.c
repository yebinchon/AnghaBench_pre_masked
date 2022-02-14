
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4(
  int *VAR_2,
  sqlite3_stmt *VAR_3
){
  if( VAR_3 ){
    sqlite3 *VAR_4 = FUNC_1(VAR_3);
    int VAR_5 = FUNC_3(VAR_3);
    if( *VAR_2==VAR_0 ){
      if( VAR_5!=VAR_0 ){
        FUNC_0(VAR_1, "SQL error: %s\n", FUNC_2(VAR_4));
      }
      *VAR_2 = VAR_5;
    }
  }
}
