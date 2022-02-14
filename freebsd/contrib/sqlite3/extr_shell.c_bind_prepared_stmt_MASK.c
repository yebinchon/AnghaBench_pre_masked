
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zNum ;
typedef int sqlite3_stmt ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char const*,int,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*,char*,int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*,char*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_12(ShellState *VAR_3, sqlite3_stmt *VAR_4){
  int VAR_5;
  int VAR_6;
  int VAR_7;
  sqlite3_stmt *VAR_8 = 0;

  VAR_5 = FUNC_1(VAR_4);
  if( VAR_5==0 ) return;
  if( FUNC_11(VAR_3->db, "TEMP", "sqlite_parameters",
                                    "key", 0, 0, 0, 0, 0)!=VAR_0 ){
    return;
  }
  VAR_7 = FUNC_7(VAR_3->db,
          "SELECT value FROM temp.sqlite_parameters"
          " WHERE key=?1", -1, &VAR_8, 0);
  if( VAR_7 || VAR_8==0 ) return;
  for(VAR_6=1; VAR_6<=VAR_5; VAR_6++){
    char VAR_9[30];
    const char *VAR_10 = FUNC_2(VAR_4, VAR_6);
    if( VAR_10==0 ){
      FUNC_9(sizeof(VAR_9),VAR_9,"?%d",VAR_6);
      VAR_10 = VAR_9;
    }
    FUNC_3(VAR_8, 1, VAR_10, -1, VAR_2);
    if( FUNC_10(VAR_8)==VAR_1 ){
      FUNC_4(VAR_4, VAR_6, FUNC_5(VAR_8, 0));
    }else{
      FUNC_0(VAR_4, VAR_6);
    }
    FUNC_8(VAR_8);
  }
  FUNC_6(VAR_8);
}
