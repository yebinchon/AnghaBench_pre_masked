
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Tcl_Obj ;
struct TYPE_2__ {void const* zScript; int interp; } ;
typedef TYPE_1__ SqlCollate ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (void const*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
  void *VAR_1,
  int VAR_2,
  const void *VAR_3,
  int VAR_4,
  const void *VAR_5
){
  SqlCollate *VAR_6 = (SqlCollate *)VAR_1;
  Tcl_Obj *VAR_7;

  VAR_7 = FUNC_5(VAR_6->zScript, -1);
  FUNC_3(VAR_7);
  FUNC_4(VAR_6->interp, VAR_7, FUNC_5(VAR_3, VAR_2));
  FUNC_4(VAR_6->interp, VAR_7, FUNC_5(VAR_5, VAR_4));
  FUNC_1(VAR_6->interp, VAR_7, VAR_0);
  FUNC_0(VAR_7);
  return (FUNC_6(FUNC_2(VAR_6->interp)));
}
