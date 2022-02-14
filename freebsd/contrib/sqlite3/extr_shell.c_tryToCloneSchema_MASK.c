
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 unsigned char* FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*,int ,int ,char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ,char*,int,int **,int ) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,char*,char*,unsigned char const*,...) ;

__attribute__((used)) static void FUNC_12(
  ShellState *VAR_4,
  sqlite3 *VAR_5,
  const char *VAR_6,
  void (*VAR_7)(ShellState*,sqlite3*,const char*)
){
  sqlite3_stmt *VAR_8 = 0;
  char *VAR_9 = 0;
  int VAR_10;
  const unsigned char *VAR_11;
  const unsigned char *VAR_12;
  char *VAR_13 = 0;

  VAR_9 = FUNC_8("SELECT name, sql FROM sqlite_master"
                           " WHERE %s", VAR_6);
  VAR_10 = FUNC_9(VAR_4->db, VAR_9, -1, &VAR_8, 0);
  if( VAR_10 ){
    FUNC_11(VAR_2, "Error: (%d) %s on [%s]\n",
                    FUNC_5(VAR_4->db), FUNC_3(VAR_4->db),
                    VAR_9);
    goto end_schema_xfer;
  }
  while( (VAR_10 = FUNC_10(VAR_8))==VAR_1 ){
    VAR_11 = FUNC_2(VAR_8, 0);
    VAR_12 = FUNC_2(VAR_8, 1);
    FUNC_1("%s... ", VAR_11); FUNC_0(VAR_3);
    FUNC_4(VAR_5, (const char*)VAR_12, 0, 0, &VAR_13);
    if( VAR_13 ){
      FUNC_11(VAR_2, "Error: %s\nSQL: [%s]\n", VAR_13, VAR_12);
      FUNC_7(VAR_13);
      VAR_13 = 0;
    }
    if( VAR_7 ){
      VAR_7(VAR_4, VAR_5, (const char*)VAR_11);
    }
    FUNC_1("done\n");
  }
  if( VAR_10!=VAR_0 ){
    FUNC_6(VAR_8);
    FUNC_7(VAR_9);
    VAR_9 = FUNC_8("SELECT name, sql FROM sqlite_master"
                             " WHERE %s ORDER BY rowid DESC", VAR_6);
    VAR_10 = FUNC_9(VAR_4->db, VAR_9, -1, &VAR_8, 0);
    if( VAR_10 ){
      FUNC_11(VAR_2, "Error: (%d) %s on [%s]\n",
                      FUNC_5(VAR_4->db), FUNC_3(VAR_4->db),
                      VAR_9);
      goto end_schema_xfer;
    }
    while( (VAR_10 = FUNC_10(VAR_8))==VAR_1 ){
      VAR_11 = FUNC_2(VAR_8, 0);
      VAR_12 = FUNC_2(VAR_8, 1);
      FUNC_1("%s... ", VAR_11); FUNC_0(VAR_3);
      FUNC_4(VAR_5, (const char*)VAR_12, 0, 0, &VAR_13);
      if( VAR_13 ){
        FUNC_11(VAR_2, "Error: %s\nSQL: [%s]\n", VAR_13, VAR_12);
        FUNC_7(VAR_13);
        VAR_13 = 0;
      }
      if( VAR_7 ){
        VAR_7(VAR_4, VAR_5, (const char*)VAR_11);
      }
      FUNC_1("done\n");
    }
  }
end_schema_xfer:
  FUNC_6(VAR_8);
  FUNC_7(VAR_9);
}
