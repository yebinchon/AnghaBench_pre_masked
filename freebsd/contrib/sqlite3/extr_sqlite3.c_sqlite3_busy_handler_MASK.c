
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xBusyHandler ) (void*,int) ;scalar_t__ bExtraFileArg; scalar_t__ nBusy; void* pBusyArg; } ;
struct TYPE_6__ {int mutex; scalar_t__ busyTimeout; TYPE_1__ busyHandler; } ;
typedef TYPE_2__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
  sqlite3 *VAR_2,
  int (*VAR_3)(void*,int),
  void *VAR_4
){



  FUNC_1(VAR_2->mutex);
  VAR_2->busyHandler.xBusyHandler = VAR_3;
  VAR_2->busyHandler.pBusyArg = VAR_4;
  VAR_2->busyHandler.nBusy = 0;
  VAR_2->busyHandler.bExtraFileArg = 0;
  VAR_2->busyTimeout = 0;
  FUNC_2(VAR_2->mutex);
  return VAR_1;
}
