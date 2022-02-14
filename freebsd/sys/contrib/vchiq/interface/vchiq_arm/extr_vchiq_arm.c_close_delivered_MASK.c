
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ close_pending; int close_event; TYPE_2__* service; } ;
typedef TYPE_1__ USER_SERVICE_T ;
struct TYPE_5__ {int handle; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(USER_SERVICE_T *VAR_1)
{
 FUNC_2(VAR_0,
  "close_delivered(handle=%x)",
  VAR_1->service->handle);

 if (VAR_1->close_pending) {

  FUNC_0(VAR_1->service);


  FUNC_1(&VAR_1->close_event);

  VAR_1->close_pending = 0;
 }
}
