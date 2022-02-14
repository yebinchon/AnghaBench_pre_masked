
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdev_dev {TYPE_1__* ev_absinfo; int ev_abs_flags; int ev_prop_flags; } ;
typedef size_t int32_t ;
struct TYPE_2__ {int resolution; int flat; int fuzz; int maximum; int minimum; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct evdev_dev*) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 size_t** VAR_3 ;
 int FUNC_2 (struct evdev_dev*,size_t,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct evdev_dev*,int ) ;
 int FUNC_4 (struct evdev_dev*,int ) ;
 int FUNC_5 (struct evdev_dev*,scalar_t__) ;
 size_t FUNC_6 (size_t**) ;

void
FUNC_7(struct evdev_dev *VAR_4)
{
 int32_t VAR_5;

 if (VAR_4->ev_absinfo == ((void*)0))
  return;

 FUNC_3(VAR_4, VAR_1);
 FUNC_4(VAR_4, VAR_0);


 if (!FUNC_1(VAR_4->ev_prop_flags, VAR_2))
  FUNC_5(VAR_4, FUNC_0(VAR_4) + 1);


 for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_3); VAR_5++)
  if (FUNC_1(VAR_4->ev_abs_flags, VAR_3[VAR_5][0]))
   FUNC_2(VAR_4, VAR_3[VAR_5][1],
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].value,
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].minimum,
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].maximum,
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].fuzz,
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].flat,
       VAR_4->ev_absinfo[VAR_3[VAR_5][0]].resolution);
}
