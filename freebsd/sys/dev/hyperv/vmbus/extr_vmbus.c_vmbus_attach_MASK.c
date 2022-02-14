
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_6__ {TYPE_1__* ich_arg; int ich_func; } ;
struct TYPE_5__ {int vmbus_idtvec; TYPE_4__ vmbus_intrhook; int vmbus_event_proc; int vmbus_dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 VAR_3 = FUNC_1(VAR_4);
 VAR_3->vmbus_dev = VAR_4;
 VAR_3->vmbus_idtvec = -1;






 VAR_3->vmbus_event_proc = VAR_1;
 if (!VAR_0)
  FUNC_2(VAR_3);


 return (0);
}
