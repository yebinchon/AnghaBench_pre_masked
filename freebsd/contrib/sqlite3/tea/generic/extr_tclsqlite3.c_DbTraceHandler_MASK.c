
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Tcl_DString ;
struct TYPE_2__ {int interp; int zTrace; } ;
typedef TYPE_1__ SqliteDb ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, const char *VAR_1){
  SqliteDb *VAR_2 = (SqliteDb*)VAR_0;
  Tcl_DString VAR_3;

  FUNC_3(&VAR_3);
  FUNC_0(&VAR_3, VAR_2->zTrace, -1);
  FUNC_1(&VAR_3, VAR_1);
  FUNC_5(VAR_2->interp, FUNC_4(&VAR_3));
  FUNC_2(&VAR_3);
  FUNC_6(VAR_2->interp);
}
