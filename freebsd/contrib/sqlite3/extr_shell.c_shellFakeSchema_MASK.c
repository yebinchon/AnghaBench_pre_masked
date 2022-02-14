
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_5__ {char* z; } ;
typedef TYPE_1__ ShellText ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,char) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 char FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static char *FUNC_11(
  sqlite3 *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  sqlite3_stmt *VAR_4 = 0;
  char *VAR_5;
  ShellText VAR_6;
  char VAR_7;
  char *VAR_8 = "(";
  int VAR_9 = 0;

  VAR_5 = FUNC_7("PRAGMA \"%w\".table_info=%Q;",
                         VAR_2 ? VAR_2 : "main", VAR_3);
  FUNC_8(VAR_1, VAR_5, -1, &VAR_4, 0);
  FUNC_6(VAR_5);
  FUNC_2(&VAR_6);
  if( VAR_2 ){
    VAR_7 = FUNC_3(VAR_2);
    if( VAR_7 && FUNC_10(VAR_2,"temp")==0 ) VAR_7 = 0;
    FUNC_0(&VAR_6, VAR_2, VAR_7);
    FUNC_0(&VAR_6, ".", 0);
  }
  VAR_7 = FUNC_3(VAR_3);
  FUNC_0(&VAR_6, VAR_3, VAR_7);
  while( FUNC_9(VAR_4)==VAR_0 ){
    const char *VAR_10 = (const char*)FUNC_4(VAR_4, 1);
    VAR_9++;
    FUNC_0(&VAR_6, VAR_8, 0);
    VAR_8 = ",";
    VAR_7 = FUNC_3(VAR_10);
    FUNC_0(&VAR_6, VAR_10, VAR_7);
  }
  FUNC_0(&VAR_6, ")", 0);
  FUNC_5(VAR_4);
  if( VAR_9==0 ){
    FUNC_1(&VAR_6);
    VAR_6.z = 0;
  }
  return VAR_6.z;
}
