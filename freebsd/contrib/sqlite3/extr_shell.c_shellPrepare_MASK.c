
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int **,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(
  sqlite3 *VAR_2,
  int *VAR_3,
  const char *VAR_4,
  sqlite3_stmt **VAR_5
){
  *VAR_5 = 0;
  if( *VAR_3==VAR_0 ){
    int VAR_6 = FUNC_3(VAR_2, VAR_4, -1, VAR_5, 0);
    if( VAR_6!=VAR_0 ){
      FUNC_0(VAR_1, "sql error: %s (%d)\n",
          FUNC_2(VAR_2), FUNC_1(VAR_2)
      );
      *VAR_3 = VAR_6;
    }
  }
}
