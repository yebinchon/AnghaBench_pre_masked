
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct uinput_cdev_state {int ucs_lock; TYPE_1__ ucs_selp; int ucs_evdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct uinput_cdev_state *VAR_2 = (struct uinput_cdev_state *)VAR_1;

 FUNC_0(VAR_2->ucs_evdev);

 FUNC_2(&VAR_2->ucs_selp.si_note, 0);
 FUNC_4(&VAR_2->ucs_selp);
 FUNC_3(&VAR_2->ucs_selp.si_note);
 FUNC_5(&VAR_2->ucs_lock);
 FUNC_1(VAR_1, VAR_0);
}
