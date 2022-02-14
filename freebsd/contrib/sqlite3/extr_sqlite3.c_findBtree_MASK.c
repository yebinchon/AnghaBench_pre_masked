
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int sParse ;
struct TYPE_14__ {int rc; char const* zErrMsg; TYPE_2__* db; } ;
struct TYPE_12__ {int * pBt; } ;
typedef TYPE_3__ Parse ;
typedef int Btree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,int,char*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static Btree *FUNC_6(sqlite3 *VAR_1, sqlite3 *VAR_2, const char *VAR_3){
  int VAR_4 = FUNC_3(VAR_2, VAR_3);

  if( VAR_4==1 ){
    Parse VAR_5;
    int VAR_6 = 0;
    FUNC_0(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.db = VAR_2;
    if( FUNC_4(&VAR_5) ){
      FUNC_2(VAR_1, VAR_5.rc, "%s", VAR_5.zErrMsg);
      VAR_6 = VAR_0;
    }
    FUNC_1(VAR_1, VAR_5.zErrMsg);
    FUNC_5(&VAR_5);
    if( VAR_6 ){
      return 0;
    }
  }

  if( VAR_4<0 ){
    FUNC_2(VAR_1, VAR_0, "unknown database %s", VAR_3);
    return 0;
  }

  return VAR_2->aDb[VAR_4].pBt;
}
