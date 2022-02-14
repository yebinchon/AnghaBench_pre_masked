
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {int pVList; } ;
typedef TYPE_1__ Vdbe ;


 char const* FUNC_0 (int ,int) ;

const char *FUNC_1(sqlite3_stmt *VAR_0, int VAR_1){
  Vdbe *VAR_2 = (Vdbe*)VAR_0;
  if( VAR_2==0 ) return 0;
  return FUNC_0(VAR_2->pVList, VAR_1);
}
