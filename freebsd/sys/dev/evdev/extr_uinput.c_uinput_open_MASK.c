
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct uinput_cdev_state {int ucs_lock; TYPE_1__ ucs_selp; int ucs_evdev; } ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uinput_cdev_state*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 struct uinput_cdev_state* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_8, int VAR_9, int VAR_10, struct thread *VAR_11)
{
 struct uinput_cdev_state *VAR_12;

 VAR_12 = FUNC_3(sizeof(struct uinput_cdev_state), VAR_0,
     VAR_1 | VAR_2);
 VAR_12->ucs_evdev = FUNC_1();

 FUNC_4(&VAR_12->ucs_lock, "uinput");
 FUNC_2(&VAR_12->ucs_selp.si_note, &VAR_12->ucs_lock, VAR_6,
     VAR_7, VAR_4,
     VAR_5);

 FUNC_0(VAR_12, VAR_3);
 return (0);
}
