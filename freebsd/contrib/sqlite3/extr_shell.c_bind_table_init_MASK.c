
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(ShellState *VAR_1){
  int VAR_2 = 0;
  FUNC_0(VAR_1->db, VAR_0, -1, &VAR_2);
  FUNC_0(VAR_1->db, VAR_0, 1, 0);
  FUNC_1(VAR_1->db,
    "CREATE TABLE IF NOT EXISTS temp.sqlite_parameters(\n"
    "  key TEXT PRIMARY KEY,\n"
    "  value ANY\n"
    ") WITHOUT ROWID;",
    0, 0, 0);
  FUNC_0(VAR_1->db, VAR_0, VAR_2, 0);
}
