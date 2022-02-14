
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evdev_dev {scalar_t__ ev_report_count; TYPE_2__* ev_mt; } ;
typedef int int32_t ;
struct TYPE_4__ {TYPE_1__* ev_mt_slots; } ;
struct TYPE_3__ {scalar_t__ ev_report; } ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*,int,int ) ;

int32_t
FUNC_2(struct evdev_dev *VAR_1, int32_t VAR_2)
{
 int32_t VAR_3, VAR_4, VAR_5 = -1;

 for (VAR_4 = 0; VAR_4 <= FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_0);
  if (VAR_3 == VAR_2)
   return (VAR_4);






  if (VAR_5 == -1 && VAR_3 == -1 &&
      VAR_1->ev_mt->ev_mt_slots[VAR_4].ev_report !=
      VAR_1->ev_report_count)
   VAR_5 = VAR_4;
 }

 return (VAR_5);
}
