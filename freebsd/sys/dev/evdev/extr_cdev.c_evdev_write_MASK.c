
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_1__* uio_td; } ;
struct input_event {int value; int code; int type; } ;
struct evdev_dev {int dummy; } ;
struct evdev_client {scalar_t__ ec_revoked; } ;
struct cdev {struct evdev_dev* si_drv1; } ;
struct TYPE_2__ {int td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evdev_client*,char*,...) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (struct evdev_dev*,int ,int ,int ) ;
 int FUNC_3 (struct input_event*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct evdev_dev *VAR_5 = VAR_2->si_drv1;
 struct evdev_client *VAR_6;
 struct input_event VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_1((void **)&VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_0(VAR_6, "write %zd bytes by thread %d", VAR_3->uio_resid,
     VAR_3->uio_td->td_tid);

 if (VAR_6->ec_revoked || VAR_5 == ((void*)0))
  return (VAR_1);

 if (VAR_3->uio_resid % sizeof(struct input_event) != 0) {
  FUNC_0(VAR_6, "write size not multiple of input_event size");
  return (VAR_0);
 }

 while (VAR_3->uio_resid > 0 && VAR_8 == 0) {
  VAR_8 = FUNC_3(&VAR_7, sizeof(struct input_event), VAR_3);
  if (VAR_8 == 0)
   VAR_8 = FUNC_2(VAR_5, VAR_7.type, VAR_7.code,
       VAR_7.value);
 }

 return (VAR_8);
}
