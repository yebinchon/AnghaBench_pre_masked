
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct evdev_dev {int ev_kdb_active; int ev_flags; scalar_t__ ev_report_opened; int ev_led_states; int ev_kdb_led_states; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct evdev_dev*,int ,int ,scalar_t__) ;
 int FUNC_6 (struct evdev_dev*,int ,int ,scalar_t__*) ;
 int FUNC_7 (struct evdev_dev*) ;
 int FUNC_8 (struct evdev_dev*,int ,int ,scalar_t__) ;
 int FUNC_9 (struct evdev_dev*) ;
 int FUNC_10 (struct evdev_dev*) ;
 scalar_t__ VAR_6 ;

int
FUNC_11(struct evdev_dev *VAR_7, uint16_t VAR_8, uint16_t VAR_9,
    int32_t VAR_10)
{

 if (FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10) != 0)
  return (VAR_0);





 if (VAR_6 || FUNC_2()) {
  VAR_7->ev_kdb_active = 1;
  if (VAR_8 == VAR_3)
   FUNC_3(VAR_7->ev_kdb_led_states,
       FUNC_4(VAR_7->ev_led_states, VAR_9) != VAR_10);
  return (0);
 }

 FUNC_0(VAR_7);


 if (VAR_7->ev_kdb_active) {
  VAR_7->ev_kdb_active = 0;
  FUNC_7(VAR_7);
 }

 FUNC_6(VAR_7, VAR_8, VAR_9, &VAR_10);
 if (VAR_8 == VAR_4 && VAR_9 == VAR_5 &&
      FUNC_4(VAR_7->ev_flags, VAR_1))
  FUNC_9(VAR_7);
 if (VAR_8 == VAR_4 && VAR_9 == VAR_5 && VAR_7->ev_report_opened &&
     FUNC_4(VAR_7->ev_flags, VAR_2))
  FUNC_10(VAR_7);
 FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10);

 FUNC_1(VAR_7);

 return (0);
}
