
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int out; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_3(
  void *VAR_1,
  int VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  const char *VAR_6
){
  ShellState *VAR_7 = (ShellState*)VAR_1;
  static const char *VAR_8[] = { 0,
     "CREATE_INDEX", "CREATE_TABLE", "CREATE_TEMP_INDEX",
     "CREATE_TEMP_TABLE", "CREATE_TEMP_TRIGGER", "CREATE_TEMP_VIEW",
     "CREATE_TRIGGER", "CREATE_VIEW", "DELETE",
     "DROP_INDEX", "DROP_TABLE", "DROP_TEMP_INDEX",
     "DROP_TEMP_TABLE", "DROP_TEMP_TRIGGER", "DROP_TEMP_VIEW",
     "DROP_TRIGGER", "DROP_VIEW", "INSERT",
     "PRAGMA", "READ", "SELECT",
     "TRANSACTION", "UPDATE", "ATTACH",
     "DETACH", "ALTER_TABLE", "REINDEX",
     "ANALYZE", "CREATE_VTABLE", "DROP_VTABLE",
     "FUNCTION", "SAVEPOINT", "RECURSIVE"
  };
  int VAR_9;
  const char *VAR_10[4];
  VAR_10[0] = VAR_3;
  VAR_10[1] = VAR_4;
  VAR_10[2] = VAR_5;
  VAR_10[3] = VAR_6;
  FUNC_2(VAR_7->out, "authorizer: %s", VAR_8[VAR_2]);
  for(VAR_9=0; VAR_9<4; VAR_9++){
    FUNC_1(VAR_7->out, " ");
    if( VAR_10[VAR_9] ){
      FUNC_0(VAR_7->out, VAR_10[VAR_9]);
    }else{
      FUNC_1(VAR_7->out, "NULL");
    }
  }
  FUNC_1(VAR_7->out, "\n");
  return VAR_0;
}
