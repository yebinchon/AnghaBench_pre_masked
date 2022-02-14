
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zStmt ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int **,int ) ;
 int FUNC_4 (int,char*,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3 *VAR_1){
  sqlite3_stmt *VAR_2 = 0;
  int VAR_3 = 0;
  char VAR_4[100];
  FUNC_3(VAR_1, "PRAGMA reverse_unordered_selects", -1, &VAR_2, 0);
  if( FUNC_5(VAR_2)==VAR_0 ){
    VAR_3 = FUNC_0(VAR_2, 0);
  }
  FUNC_2(VAR_2);
  FUNC_4(sizeof(VAR_4), VAR_4,
       "PRAGMA reverse_unordered_selects(%d)", !VAR_3);
  FUNC_1(VAR_1, VAR_4, 0, 0, 0);
}
