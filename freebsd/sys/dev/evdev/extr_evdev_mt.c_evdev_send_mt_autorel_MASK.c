
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evdev_dev {scalar_t__ ev_report_count; TYPE_2__* ev_mt; } ;
typedef size_t int32_t ;
struct TYPE_4__ {TYPE_1__* ev_mt_slots; } ;
struct TYPE_3__ {scalar_t__ ev_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evdev_dev*) ;
 int VAR_2 ;
 size_t FUNC_1 (struct evdev_dev*) ;
 int FUNC_2 (struct evdev_dev*,size_t,int ) ;
 int FUNC_3 (struct evdev_dev*,int ,int ,int) ;

void
FUNC_4(struct evdev_dev *VAR_3)
{
 int32_t VAR_4;

 FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 <= FUNC_1(VAR_3); VAR_4++) {
  if (VAR_3->ev_mt->ev_mt_slots[VAR_4].ev_report !=
      VAR_3->ev_report_count &&
      FUNC_2(VAR_3, VAR_4, VAR_1) != -1){
   FUNC_3(VAR_3, VAR_2, VAR_0, VAR_4);
   FUNC_3(VAR_3, VAR_2, VAR_1,
       -1);
  }
 }
}
