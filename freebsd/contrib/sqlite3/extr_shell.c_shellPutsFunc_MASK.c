
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_2__ {int out; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  ShellState *VAR_3 = (ShellState*)FUNC_1(VAR_0);
  (void)VAR_1;
  FUNC_3(VAR_3->out, "%s\n", FUNC_2(VAR_2[0]));
  FUNC_0(VAR_0, VAR_2[0]);
}
