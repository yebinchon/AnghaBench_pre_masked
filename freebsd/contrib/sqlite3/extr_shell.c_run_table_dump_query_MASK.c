
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int nErr; int db; int out; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int,int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(
  ShellState *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  sqlite3_stmt *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  const char *VAR_10;
  VAR_7 = FUNC_5(VAR_3->db, VAR_4, -1, &VAR_6, 0);
  if( VAR_7!=VAR_1 || !VAR_6 ){
    FUNC_7(VAR_3->out, "/**** ERROR: (%d) %s *****/\n", VAR_7,
                FUNC_3(VAR_3->db));
    if( (VAR_7&0xff)!=VAR_0 ) VAR_3->nErr++;
    return VAR_7;
  }
  VAR_7 = FUNC_6(VAR_6);
  VAR_8 = FUNC_1(VAR_6);
  while( VAR_7==VAR_2 ){
    if( VAR_5 ){
      FUNC_7(VAR_3->out, "%s", VAR_5);
      VAR_5 = 0;
    }
    VAR_10 = (const char*)FUNC_2(VAR_6, 0);
    FUNC_7(VAR_3->out, "%s", VAR_10);
    for(VAR_9=1; VAR_9<VAR_8; VAR_9++){
      FUNC_7(VAR_3->out, ",%s", FUNC_2(VAR_6, VAR_9));
    }
    if( VAR_10==0 ) VAR_10 = "";
    while( VAR_10[0] && (VAR_10[0]!='-' || VAR_10[1]!='-') ) VAR_10++;
    if( VAR_10[0] ){
      FUNC_0(VAR_3->out, "\n;\n");
    }else{
      FUNC_0(VAR_3->out, ";\n");
    }
    VAR_7 = FUNC_6(VAR_6);
  }
  VAR_7 = FUNC_4(VAR_6);
  if( VAR_7!=VAR_1 ){
    FUNC_7(VAR_3->out, "/**** ERROR: (%d) %s *****/\n", VAR_7,
                FUNC_3(VAR_3->db));
    if( (VAR_7&0xff)!=VAR_0 ) VAR_3->nErr++;
  }
  return VAR_7;
}
