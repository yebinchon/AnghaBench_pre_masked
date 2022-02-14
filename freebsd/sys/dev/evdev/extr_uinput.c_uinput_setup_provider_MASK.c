
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uinput_user_dev {int * absflat; int * absfuzz; int * absmax; int * absmin; int ff_effects_max; int name; int id; } ;
struct uinput_cdev_state {TYPE_1__* ucs_evdev; } ;
struct input_absinfo {int flat; int fuzz; int maximum; int minimum; } ;
struct TYPE_2__ {int ev_abs_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct input_absinfo*,int) ;
 int FUNC_2 (struct uinput_cdev_state*,char*,struct uinput_user_dev*) ;
 int FUNC_3 (TYPE_1__*,int,struct input_absinfo*) ;
 int FUNC_4 (struct uinput_cdev_state*,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct uinput_cdev_state *VAR_1,
    struct uinput_user_dev *VAR_2)
{
 struct input_absinfo VAR_3;
 int VAR_4, VAR_5;

 FUNC_2(VAR_1, "setup_provider called, udev=%p", VAR_2);

 VAR_5 = FUNC_4(VAR_1, &VAR_2->id, VAR_2->name,
     VAR_2->ff_effects_max);
 if (VAR_5)
  return (VAR_5);

 FUNC_1(&VAR_3, sizeof(struct input_absinfo));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_0(VAR_1->ucs_evdev->ev_abs_flags, VAR_4))
   continue;

  VAR_3.minimum = VAR_2->absmin[VAR_4];
  VAR_3.maximum = VAR_2->absmax[VAR_4];
  VAR_3.fuzz = VAR_2->absfuzz[VAR_4];
  VAR_3.flat = VAR_2->absflat[VAR_4];
  FUNC_3(VAR_1->ucs_evdev, VAR_4, &VAR_3);
 }

 return (0);
}
