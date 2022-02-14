
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_1__* uio_td; } ;
struct input_event {int dummy; } ;
struct evdev_client {int ec_blocked; size_t ec_buffer_head; int ec_buffer_size; int * ec_buffer; int ec_buffer_mtx; scalar_t__ ec_revoked; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (struct evdev_client*) ;
 int FUNC_2 (struct evdev_client*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct evdev_client*,char*,int,int ) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (struct input_event*,int *,int) ;
 int FUNC_6 (struct evdev_client*,int *,int ,char*,int ) ;
 int FUNC_7 (struct input_event*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 struct evdev_client *VAR_8;
 struct input_event VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_10 = FUNC_4((void **)&VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);

 FUNC_3(VAR_8, "read %zd bytes by thread %d", VAR_6->uio_resid,
     VAR_6->uio_td->td_tid);

 if (VAR_8->ec_revoked)
  return (VAR_1);


 if (VAR_6->uio_resid != 0 && VAR_6->uio_resid < sizeof(struct input_event))
  return (VAR_0);

 VAR_11 = VAR_6->uio_resid / sizeof(struct input_event);

 FUNC_1(VAR_8);

 if (FUNC_0(VAR_8)) {
  if (VAR_7 & VAR_3)
   VAR_10 = VAR_2;
  else {
   if (VAR_11 != 0) {
    VAR_8->ec_blocked = 1;
    VAR_10 = FUNC_6(VAR_8, &VAR_8->ec_buffer_mtx,
        VAR_4, "evread", 0);
   }
  }
 }

 while (VAR_10 == 0 && !FUNC_0(VAR_8) && VAR_11 > 0) {
  FUNC_5(&VAR_9, &VAR_8->ec_buffer[VAR_8->ec_buffer_head],
      sizeof(struct input_event));
  VAR_8->ec_buffer_head =
      (VAR_8->ec_buffer_head + 1) % VAR_8->ec_buffer_size;
  VAR_11--;

  FUNC_2(VAR_8);
  VAR_10 = FUNC_7(&VAR_9, sizeof(struct input_event), VAR_6);
  FUNC_1(VAR_8);
 }

 FUNC_2(VAR_8);

 return (VAR_10);
}
