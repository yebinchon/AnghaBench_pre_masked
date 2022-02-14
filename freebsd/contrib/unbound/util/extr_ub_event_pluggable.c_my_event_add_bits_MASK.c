
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_event {int dummy; } ;
struct TYPE_3__ {int ev_events; } ;
struct TYPE_4__ {TYPE_1__ ev; } ;


 TYPE_2__* FUNC_0 (struct ub_event*) ;
 int FUNC_1 (short) ;

__attribute__((used)) static void
FUNC_2(struct ub_event* VAR_0, short VAR_1)
{
 FUNC_0(VAR_0)->ev.ev_events |= FUNC_1(VAR_1);
}
