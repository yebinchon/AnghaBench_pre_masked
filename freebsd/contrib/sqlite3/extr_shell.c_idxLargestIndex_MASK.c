
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *,int **,char**,char const*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_2, int *VAR_3, char **VAR_4){
  int VAR_5 = VAR_0;
  const char *VAR_6 =
    "SELECT max(i.seqno) FROM "
    "  sqlite_master AS s, "
    "  pragma_index_list(s.name) AS l, "
    "  pragma_index_info(l.name) AS i "
    "WHERE s.type = 'table'";
  sqlite3_stmt *VAR_7 = 0;

  *VAR_3 = 0;
  VAR_5 = FUNC_1(VAR_2, &VAR_7, VAR_4, VAR_6);
  if( VAR_5==VAR_0 && VAR_1==FUNC_3(VAR_7) ){
    *VAR_3 = FUNC_2(VAR_7, 0) + 1;
  }
  FUNC_0(&VAR_5, VAR_7);

  return VAR_5;
}
