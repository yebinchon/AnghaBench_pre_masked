
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_2__ {int pWalHook; int * db; int * interp; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(
  void *VAR_2,
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_0;
  Tcl_Obj *VAR_7;
  SqliteDb *VAR_8 = (SqliteDb*)VAR_2;
  Tcl_Interp *VAR_9 = VAR_8->interp;
  FUNC_10(VAR_8->pWalHook);

  FUNC_10( VAR_3==VAR_8->db );
  VAR_7 = FUNC_2(VAR_8->pWalHook);
  FUNC_6(VAR_7);
  FUNC_7(VAR_9, VAR_7, FUNC_9(VAR_4, -1));
  FUNC_7(VAR_9, VAR_7, FUNC_8(VAR_5));
  if( VAR_1!=FUNC_3(VAR_9, VAR_7, 0)
   || VAR_1!=FUNC_4(VAR_9, FUNC_5(VAR_9), &VAR_6)
  ){
    FUNC_0(VAR_9);
  }
  FUNC_1(VAR_7);

  return VAR_6;
}
