
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pStatement; } ;
typedef TYPE_2__ sqlite3expert ;
struct TYPE_4__ {int iId; } ;



int FUNC_0(sqlite3expert *VAR_0){
  int VAR_1 = 0;
  if( VAR_0->pStatement ) VAR_1 = VAR_0->pStatement->iId+1;
  return VAR_1;
}
