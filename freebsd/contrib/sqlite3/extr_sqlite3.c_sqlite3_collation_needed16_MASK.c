
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void (* xCollNeeded16 ) (void*,TYPE_1__*,int,void const*) ;int mutex; void* pCollNeededArg; scalar_t__ xCollNeeded; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
  sqlite3 *VAR_2,
  void *VAR_3,
  void(*VAR_4)(void*,sqlite3*,int VAR_5,const void*)
){



  FUNC_1(VAR_2->mutex);
  VAR_2->xCollNeeded = 0;
  VAR_2->xCollNeeded16 = VAR_4;
  VAR_2->pCollNeededArg = VAR_3;
  FUNC_2(VAR_2->mutex);
  return VAR_1;
}
