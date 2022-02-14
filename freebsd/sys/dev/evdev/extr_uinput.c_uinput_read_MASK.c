
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_1__* uio_td; } ;
struct uinput_cdev_state {scalar_t__ ucs_state; int ucs_blocked; size_t ucs_buffer_head; struct input_event* ucs_buffer; int ucs_lock; } ;
struct input_event {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct uinput_cdev_state*) ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct uinput_cdev_state*) ;
 int FUNC_3 (struct uinput_cdev_state*,char*,int,int ) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (struct uinput_cdev_state*,int *,int ,char*,int ) ;
 int FUNC_6 (struct input_event*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct uinput_cdev_state *VAR_9;
 struct input_event *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_4((void **)&VAR_9);
 if (VAR_12 != 0)
  return (VAR_12);

 FUNC_3(VAR_9, "read %zd bytes by thread %d", VAR_7->uio_resid,
     VAR_7->uio_td->td_tid);


 if (VAR_7->uio_resid != 0 && VAR_7->uio_resid < sizeof(struct input_event))
  return (VAR_0);

 VAR_11 = VAR_7->uio_resid / sizeof(struct input_event);

 FUNC_1(VAR_9);

 if (VAR_9->ucs_state != VAR_5)
  VAR_12 = VAR_0;

 if (VAR_12 == 0 && FUNC_0(VAR_9)) {
  if (VAR_8 & VAR_2)
   VAR_12 = VAR_1;
  else {
   if (VAR_11 != 0) {
    VAR_9->ucs_blocked = 1;
    VAR_12 = FUNC_5(VAR_9, &VAR_9->ucs_lock,
        VAR_3, "uiread", 0);
   }
  }
 }

 while (VAR_12 == 0 && !FUNC_0(VAR_9) && VAR_11 > 0) {
  VAR_10 = &VAR_9->ucs_buffer[VAR_9->ucs_buffer_head];
  VAR_9->ucs_buffer_head = (VAR_9->ucs_buffer_head + 1) %
      VAR_4;
  VAR_11--;
  VAR_12 = FUNC_6(VAR_10, sizeof(struct input_event), VAR_7);
 }

 FUNC_2(VAR_9);

 return (VAR_12);
}
