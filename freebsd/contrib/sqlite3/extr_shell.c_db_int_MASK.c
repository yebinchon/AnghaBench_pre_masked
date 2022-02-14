
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,int,int **,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(ShellState *VAR_1, const char *VAR_2){
  sqlite3_stmt *VAR_3;
  int VAR_4 = 0;
  FUNC_2(VAR_1->db, VAR_2, -1, &VAR_3, 0);
  if( VAR_3 && FUNC_3(VAR_3)==VAR_0 ){
    VAR_4 = FUNC_0(VAR_3,0);
  }
  FUNC_1(VAR_3);
  return VAR_4;
}
