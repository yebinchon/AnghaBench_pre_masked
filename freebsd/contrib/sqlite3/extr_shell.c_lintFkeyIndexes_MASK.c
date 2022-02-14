
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_3__ {int * out; int * db; } ;
typedef TYPE_1__ ShellState ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int,int ,int ,int ,int ,int ) ;
 char const* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const*) ;
 int FUNC_8 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int * VAR_5 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(
  ShellState *VAR_6,
  char **VAR_7,
  int VAR_8
){
  sqlite3 *VAR_9 = VAR_6->db;
  FILE *VAR_10 = VAR_6->out;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13;
  const char *VAR_14 = "";
  int VAR_15;
  sqlite3_stmt *VAR_16 = 0;
  const char *VAR_17 =
  "SELECT "
    "     'EXPLAIN QUERY PLAN SELECT 1 FROM ' || quote(s.name) || ' WHERE '"
    "  || group_concat(quote(s.name) || '.' || quote(f.[from]) || '=?' "
    "  || fkey_collate_clause("
    "       f.[table], COALESCE(f.[to], p.[name]), s.name, f.[from]),' AND ')"
    ", "
    "     'SEARCH TABLE ' || s.name || ' USING COVERING INDEX*('"
    "  || group_concat('*=?', ' AND ') || ')'"
    ", "
    "     s.name  || '(' || group_concat(f.[from],  ', ') || ')'"
    ", "
    "     f.[table] || '(' || group_concat(COALESCE(f.[to], p.[name])) || ')'"
    ", "
    "     'CREATE INDEX ' || quote(s.name ||'_'|| group_concat(f.[from], '_'))"
    "  || ' ON ' || quote(s.name) || '('"
    "  || group_concat(quote(f.[from]) ||"
    "        fkey_collate_clause("
    "          f.[table], COALESCE(f.[to], p.[name]), s.name, f.[from]), ', ')"
    "  || ');'"
    ", "
    "     f.[table] "
    "FROM sqlite_master AS s, pragma_foreign_key_list(s.name) AS f "
    "LEFT JOIN pragma_table_info AS p ON (pk-1=seq AND p.arg=f.[table]) "
    "GROUP BY s.name, f.id "
    "ORDER BY (CASE WHEN ? THEN f.[table] ELSE s.name END)"
  ;
  const char *VAR_18 = "SEARCH TABLE * USING INTEGER PRIMARY KEY (rowid=?)";

  for(VAR_13=2; VAR_13<VAR_8; VAR_13++){
    int VAR_19 = FUNC_13(VAR_7[VAR_13]);
    if( VAR_19>1 && FUNC_12("-verbose", VAR_7[VAR_13], VAR_19)==0 ){
      VAR_11 = 1;
    }
    else if( VAR_19>1 && FUNC_12("-groupbyparent", VAR_7[VAR_13], VAR_19)==0 ){
      VAR_12 = 1;
      VAR_14 = "    ";
    }
    else{
      FUNC_0(VAR_5, "Usage: %s %s ?-verbose? ?-groupbyparent?\n",
          VAR_7[0], VAR_7[1]
      );
      return VAR_0;
    }
  }


  VAR_15 = FUNC_3(VAR_9, "fkey_collate_clause", 4, VAR_3,
      0, VAR_4, 0, 0
  );


  if( VAR_15==VAR_1 ){
    VAR_15 = FUNC_8(VAR_9, VAR_17, -1, &VAR_16, 0);
  }
  if( VAR_15==VAR_1 ){
    FUNC_1(VAR_16, 1, VAR_12);
  }

  if( VAR_15==VAR_1 ){
    int VAR_20;
    char *VAR_21 = 0;
    while( VAR_2==FUNC_9(VAR_16) ){
      int VAR_22 = -1;
      sqlite3_stmt *VAR_23 = 0;
      const char *VAR_24 = (const char*)FUNC_2(VAR_16, 0);
      const char *VAR_25 = (const char*)FUNC_2(VAR_16, 1);
      const char *VAR_26 = (const char*)FUNC_2(VAR_16, 2);
      const char *VAR_27 = (const char*)FUNC_2(VAR_16, 3);
      const char *VAR_28 = (const char*)FUNC_2(VAR_16, 4);
      const char *VAR_29 = (const char*)FUNC_2(VAR_16, 5);

      VAR_15 = FUNC_8(VAR_9, VAR_24, -1, &VAR_23, 0);
      if( VAR_15!=VAR_1 ) break;
      if( VAR_2==FUNC_9(VAR_23) ){
        const char *VAR_30 = (const char*)FUNC_2(VAR_23, 3);
        VAR_22 = (
              0==FUNC_10(VAR_25, VAR_30)
           || 0==FUNC_10(VAR_18, VAR_30)
        );
      }
      VAR_15 = FUNC_5(VAR_23);
      if( VAR_15!=VAR_1 ) break;

      if( VAR_22<0 ){
        FUNC_0(VAR_5, "Error: internal error");
        break;
      }else{
        if( VAR_12
        && (VAR_11 || VAR_22==0)
        && (VAR_21==0 || FUNC_11(VAR_29, VAR_21))
        ){
          FUNC_0(VAR_10, "-- Parent table %s\n", VAR_29);
          FUNC_6(VAR_21);
          VAR_21 = FUNC_7("%s", VAR_29);
        }

        if( VAR_22==0 ){
          FUNC_0(VAR_10, "%s%s --> %s\n", VAR_14, VAR_28, VAR_27);
        }else if( VAR_11 ){
          FUNC_0(VAR_10, "%s/* no extra indexes required for %s -> %s */\n",
              VAR_14, VAR_26, VAR_27
          );
        }
      }
    }
    FUNC_6(VAR_21);

    if( VAR_15!=VAR_1 ){
      FUNC_0(VAR_5, "%s\n", FUNC_4(VAR_9));
    }

    VAR_20 = FUNC_5(VAR_16);
    if( VAR_15==VAR_1 && VAR_20!=VAR_1 ){
      VAR_15 = VAR_20;
      FUNC_0(VAR_5, "%s\n", FUNC_4(VAR_9));
    }
  }else{
    FUNC_0(VAR_5, "%s\n", FUNC_4(VAR_9));
  }

  return VAR_15;
}
