
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Parse ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_1(Parse *VAR_1, const char *VAR_2, int VAR_3){
  FUNC_0(VAR_1,
      "SELECT 1 "
      "FROM \"%w\".%s "
      "WHERE name NOT LIKE 'sqliteX_%%' ESCAPE 'X'"
      " AND sql NOT LIKE 'create virtual%%'"
      " AND sqlite_rename_test(%Q, sql, type, name, %d)=NULL ",
      VAR_2, VAR_0,
      VAR_2, VAR_3
  );

  if( VAR_3==0 ){
    FUNC_0(VAR_1,
        "SELECT 1 "
        "FROM temp.%s "
        "WHERE name NOT LIKE 'sqliteX_%%' ESCAPE 'X'"
        " AND sql NOT LIKE 'create virtual%%'"
        " AND sqlite_rename_test(%Q, sql, type, name, 1)=NULL ",
        VAR_0, VAR_2
    );
  }
}
