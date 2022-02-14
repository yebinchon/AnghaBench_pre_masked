
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_event_handler {int dummy; } ;
struct TYPE_4__ {int port_num; } ;
struct ib_event {TYPE_2__ element; TYPE_1__* device; int event; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ib_event_handler *VAR_0,
    struct ib_event *VAR_1)
{
 FUNC_0("async event %d on device %s port %d",
   VAR_1->event, VAR_1->device->name,
   VAR_1->element.port_num);
}
