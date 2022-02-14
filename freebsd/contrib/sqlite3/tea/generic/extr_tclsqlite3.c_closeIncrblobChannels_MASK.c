
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channel; struct TYPE_5__* pNext; } ;
struct TYPE_4__ {int interp; TYPE_2__* pIncrblob; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ IncrblobChannel ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(SqliteDb *VAR_0){
  IncrblobChannel *VAR_1;
  IncrblobChannel *VAR_2;

  for(VAR_1=VAR_0->pIncrblob; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;





    FUNC_0(VAR_0->interp, VAR_1->channel);
  }
}
