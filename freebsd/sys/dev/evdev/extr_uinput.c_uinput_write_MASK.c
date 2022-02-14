
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_1__* uio_td; } ;
struct uinput_user_dev {int value; int code; int type; } ;
struct uinput_cdev_state {scalar_t__ ucs_state; int ucs_evdev; } ;
struct input_event {int value; int code; int type; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int td_tid; } ;


 int VAR_0 ;
 int FUNC_0 (struct uinput_cdev_state*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 int FUNC_2 (struct uinput_cdev_state*,char*,...) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct uinput_cdev_state*,struct uinput_user_dev*) ;
 int FUNC_6 (struct uinput_user_dev*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct uinput_cdev_state *VAR_5;
 struct uinput_user_dev VAR_6;
 struct input_event VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_3((void **)&VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_2(VAR_5, "write %zd bytes by thread %d", VAR_3->uio_resid,
     VAR_3->uio_td->td_tid);

 FUNC_0(VAR_5);

 if (VAR_5->ucs_state != VAR_1) {

  if (VAR_3->uio_resid != sizeof(struct uinput_user_dev)) {
   FUNC_2(VAR_5, "write size not multiple of "
       "struct uinput_user_dev size");
   VAR_8 = VAR_0;
  } else {
   VAR_8 = FUNC_6(&VAR_6, sizeof(struct uinput_user_dev),
       VAR_3);
   if (VAR_8 == 0)
    FUNC_5(VAR_5, &VAR_6);
  }
 } else {

  if (VAR_3->uio_resid % sizeof(struct input_event) != 0) {
   FUNC_2(VAR_5, "write size not multiple of "
       "struct input_event size");
   VAR_8 = VAR_0;
  }

  while (VAR_8 == 0 && VAR_3->uio_resid > 0) {
   FUNC_6(&VAR_7, sizeof(struct input_event), VAR_3);
   VAR_8 = FUNC_4(VAR_5->ucs_evdev, VAR_7.type,
       VAR_7.code, VAR_7.value);
  }
 }

 FUNC_1(VAR_5);

 return (VAR_8);
}
