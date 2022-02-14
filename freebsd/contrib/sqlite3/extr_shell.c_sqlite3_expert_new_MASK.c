
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iSample; int dbv; int dbm; int * db; } ;
typedef TYPE_1__ sqlite3expert ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char**) ;
 int FUNC_1 (int*,int *) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (int *,int **,char**,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int,int*) ;
 int FUNC_6 (int ,char const*,int ,int ,char**) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (int ,int ,void*) ;
 scalar_t__ FUNC_10 (int *) ;

sqlite3expert *FUNC_11(sqlite3 *VAR_4, char **VAR_5){
  int VAR_6 = VAR_1;
  sqlite3expert *VAR_7;

  VAR_7 = (sqlite3expert*)FUNC_2(&VAR_6, sizeof(sqlite3expert));







  if( VAR_6==VAR_1 ){
    VAR_7->db = VAR_4;
    VAR_7->iSample = 100;
    VAR_6 = FUNC_8(":memory:", &VAR_7->dbv);
  }
  if( VAR_6==VAR_1 ){
    VAR_6 = FUNC_8(":memory:", &VAR_7->dbm);
    if( VAR_6==VAR_1 ){
      FUNC_5(VAR_7->dbm, VAR_0, 1, (int*)0);
    }
  }



  if( VAR_6==VAR_1 ){
    sqlite3_stmt *VAR_8;
    VAR_6 = FUNC_3(VAR_7->db, &VAR_8, VAR_5,
        "SELECT sql FROM sqlite_master WHERE name NOT LIKE 'sqlite_%%'"
        " AND sql NOT LIKE 'CREATE VIRTUAL %%'"
    );
    while( VAR_6==VAR_1 && VAR_2==FUNC_10(VAR_8) ){
      const char *VAR_9 = (const char*)FUNC_4(VAR_8, 0);
      VAR_6 = FUNC_6(VAR_7->dbm, VAR_9, 0, 0, VAR_5);
    }
    FUNC_1(&VAR_6, VAR_8);
  }


  if( VAR_6==VAR_1 ){
    VAR_6 = FUNC_0(VAR_7, VAR_5);
  }


  if( VAR_6==VAR_1 ){
    FUNC_9(VAR_7->dbv, VAR_3, (void*)VAR_7);
  }



  if( VAR_6!=VAR_1 ){
    FUNC_7(VAR_7);
    VAR_7 = 0;
  }
  return VAR_7;
}
