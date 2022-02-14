
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct uinput_cdev_state {scalar_t__ ucs_state; } ;
struct evdev_dev {int dummy; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uinput_cdev_state*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 struct uinput_cdev_state* FUNC_2 (struct evdev_dev*) ;
 int FUNC_3 (struct evdev_dev*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct uinput_cdev_state*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct uinput_cdev_state*) ;

__attribute__((used)) static void
FUNC_6(struct evdev_dev *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
    int32_t VAR_5)
{
 struct uinput_cdev_state *VAR_6 = FUNC_2(VAR_2);

 if (VAR_3 == VAR_0)
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_6);
 if (VAR_6->ucs_state == VAR_1) {
  FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);
  FUNC_5(VAR_6);
 }
 FUNC_1(VAR_6);
}
