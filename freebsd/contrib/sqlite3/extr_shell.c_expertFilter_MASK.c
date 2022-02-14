
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int db; } ;
typedef TYPE_3__ sqlite3expert ;
struct TYPE_12__ {scalar_t__ pVtab; } ;
typedef TYPE_4__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_14__ {scalar_t__ pData; } ;
struct TYPE_9__ {int zErrMsg; } ;
struct TYPE_13__ {TYPE_2__* pTab; TYPE_1__ base; TYPE_3__* pExpert; } ;
struct TYPE_10__ {int zName; } ;
typedef TYPE_5__ ExpertVtab ;
typedef TYPE_6__ ExpertCsr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,scalar_t__*,int *,char*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  ExpertCsr *VAR_6 = (ExpertCsr*)VAR_1;
  ExpertVtab *VAR_7 = (ExpertVtab*)(VAR_1->pVtab);
  sqlite3expert *VAR_8 = VAR_7->pExpert;
  int VAR_9;

  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  (void)VAR_5;
  VAR_9 = FUNC_2(VAR_6->pData);
  VAR_6->pData = 0;
  if( VAR_9==VAR_0 ){
    VAR_9 = FUNC_1(VAR_8->db, &VAR_6->pData, &VAR_7->base.zErrMsg,
        "SELECT * FROM main.%Q WHERE sample()", VAR_7->pTab->zName
    );
  }

  if( VAR_9==VAR_0 ){
    VAR_9 = FUNC_0(VAR_1);
  }
  return VAR_9;
}
