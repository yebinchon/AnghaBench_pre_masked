
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *) ;
 char const* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ,int ) ;
 int FUNC_4 (char const*,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,int *,char*,int ) ;
 int FUNC_6 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_7(ShellState *VAR_2, const char *VAR_3){
  int VAR_4;
  sqlite3 *VAR_5 = 0;
  if( FUNC_0(VAR_3,0)==0 ){
    FUNC_6(VAR_0, "File \"%s\" already exists.\n", VAR_3);
    return;
  }
  VAR_4 = FUNC_4(VAR_3, &VAR_5);
  if( VAR_4 ){
    FUNC_6(VAR_0, "Cannot create output database: %s\n",
            FUNC_2(VAR_5));
  }else{
    FUNC_3(VAR_2->db, "PRAGMA writable_schema=ON;", 0, 0, 0);
    FUNC_3(VAR_5, "BEGIN EXCLUSIVE;", 0, 0, 0);
    FUNC_5(VAR_2, VAR_5, "type='table'", VAR_1);
    FUNC_5(VAR_2, VAR_5, "type!='table'", 0);
    FUNC_3(VAR_5, "COMMIT;", 0, 0, 0);
    FUNC_3(VAR_2->db, "PRAGMA writable_schema=OFF;", 0, 0, 0);
  }
  FUNC_1(VAR_5);
}
