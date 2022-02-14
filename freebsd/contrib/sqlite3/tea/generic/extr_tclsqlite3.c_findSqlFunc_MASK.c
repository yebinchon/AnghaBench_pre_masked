
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* zName; struct TYPE_6__* pNext; scalar_t__ pScript; TYPE_1__* pDb; int interp; } ;
struct TYPE_5__ {TYPE_2__* pFunc; int interp; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ SqlFunc ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static SqlFunc *FUNC_5(SqliteDb *VAR_0, const char *VAR_1){
  SqlFunc *VAR_2, *VAR_3;
  int VAR_4 = FUNC_4(VAR_1);
  VAR_3 = (SqlFunc*)FUNC_0( sizeof(*VAR_3) + VAR_4 + 1 );
  VAR_3->zName = (char*)&VAR_3[1];
  FUNC_2(VAR_3->zName, VAR_1, VAR_4+1);
  for(VAR_2=VAR_0->pFunc; VAR_2; VAR_2=VAR_2->pNext){
    if( FUNC_3(VAR_2->zName, VAR_3->zName)==0 ){
      FUNC_1((char*)VAR_3);
      return VAR_2;
    }
  }
  VAR_3->interp = VAR_0->interp;
  VAR_3->pDb = VAR_0;
  VAR_3->pScript = 0;
  VAR_3->pNext = VAR_0->pFunc;
  VAR_0->pFunc = VAR_3;
  return VAR_3;
}
