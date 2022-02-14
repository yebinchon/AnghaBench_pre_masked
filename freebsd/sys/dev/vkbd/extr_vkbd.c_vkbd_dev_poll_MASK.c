
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cc; int q; } ;
struct TYPE_5__ {int ks_flags; int ks_wsel; int ks_rsel; TYPE_2__ ks_inq; } ;
typedef TYPE_1__ vkbd_state_t ;
typedef TYPE_2__ vkbd_queue_t ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_6, int VAR_7, struct thread *VAR_8)
{
 vkbd_state_t *VAR_9 = (vkbd_state_t *) VAR_6->si_drv1;
 vkbd_queue_t *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (VAR_9 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_9);

 VAR_10 = &VAR_9->ks_inq;

 if (VAR_7 & (VAR_1 | VAR_3)) {
  if (VAR_9->ks_flags & VAR_5)
   VAR_11 |= VAR_7 & (VAR_1 | VAR_3);
  else
   FUNC_3(VAR_8, &VAR_9->ks_rsel);
 }

 if (VAR_7 & (VAR_2 | VAR_4)) {
  if (VAR_10->cc < FUNC_2(VAR_10->q))
   VAR_11 |= VAR_7 & (VAR_2 | VAR_4);
  else
   FUNC_3(VAR_8, &VAR_9->ks_wsel);
 }

 FUNC_1(VAR_9);

 return (VAR_11);
}
