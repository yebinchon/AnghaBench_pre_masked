
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;
struct TYPE_5__ {int ha; int ibdev; } ;
typedef TYPE_2__ qlnxr_dev_t ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ib_event*) ;

__attribute__((used)) static void
FUNC_2(qlnxr_dev_t *VAR_0, uint8_t VAR_1,
 enum ib_event_type VAR_2)
{
        struct ib_event VAR_3;

 FUNC_0(VAR_0->ha, "enter\n");

        VAR_3.device = &VAR_0->ibdev;
        VAR_3.element.port_num = VAR_1;
        VAR_3.event = VAR_2;

        FUNC_1(&VAR_3);

 FUNC_0(VAR_0->ha, "exit\n");
}
