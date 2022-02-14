
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evdev_dev {TYPE_2__* ev_mt; int ev_report_count; } ;
typedef size_t int32_t ;
struct TYPE_4__ {size_t ev_mt_last_reported_slot; TYPE_1__* ev_mt_slots; } ;
struct TYPE_3__ {int ev_report; } ;



void
FUNC_0(struct evdev_dev *VAR_0, int32_t VAR_1)
{

 VAR_0->ev_mt->ev_mt_slots[VAR_1].ev_report = VAR_0->ev_report_count;
 VAR_0->ev_mt->ev_mt_last_reported_slot = VAR_1;
}
