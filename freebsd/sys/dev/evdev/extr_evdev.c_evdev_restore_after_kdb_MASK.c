
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int ev_key_states; int ev_kdb_led_states; int ev_led_states; } ;


 int FUNC_0 (struct evdev_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct evdev_dev*,int ,int,int) ;
 int FUNC_4 (struct evdev_dev*) ;

void
FUNC_5(struct evdev_dev *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_8);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  if (FUNC_2(VAR_8->ev_kdb_led_states, VAR_9))
   FUNC_3(VAR_8, VAR_1, VAR_9,
       !FUNC_2(VAR_8->ev_led_states, VAR_9));
 FUNC_1(VAR_8->ev_kdb_led_states, 0, VAR_6);


 FUNC_4(VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (FUNC_2(VAR_8->ev_key_states, VAR_9)) {
   FUNC_3(VAR_8, VAR_0, VAR_9, VAR_4);
   FUNC_3(VAR_8, VAR_2, VAR_7, 1);
  }
 }
}
