
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int Tcl_Obj ;
struct TYPE_2__ {int pUpdateHook; int interp; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(
  void *VAR_4,
  int VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  sqlite_int64 VAR_8
){
  SqliteDb *VAR_9 = (SqliteDb *)VAR_4;
  Tcl_Obj *VAR_10;
  static const char *VAR_11[] = {"DELETE", "INSERT", "UPDATE"};

  FUNC_7( (VAR_0-1)/9 == 0 );
  FUNC_7( (VAR_1-1)/9 == 1 );
  FUNC_7( (VAR_2-1)/9 == 2 );

  FUNC_7( VAR_9->pUpdateHook );
  FUNC_7( VAR_5==VAR_1 || VAR_5==VAR_2 || VAR_5==VAR_0 );

  VAR_10 = FUNC_1(VAR_9->pUpdateHook);
  FUNC_3(VAR_10);
  FUNC_4(0, VAR_10, FUNC_5(VAR_11[(VAR_5-1)/9], -1));
  FUNC_4(0, VAR_10, FUNC_5(VAR_6, -1));
  FUNC_4(0, VAR_10, FUNC_5(VAR_7, -1));
  FUNC_4(0, VAR_10, FUNC_6(VAR_8));
  FUNC_2(VAR_9->interp, VAR_10, VAR_3);
  FUNC_0(VAR_10);
}
