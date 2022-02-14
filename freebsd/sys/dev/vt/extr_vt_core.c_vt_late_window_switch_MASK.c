
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; } ;
struct vt_window {TYPE_2__ vw_smode; TYPE_1__* vw_device; int vw_proc_dead_timer; } ;
struct TYPE_3__ {struct vt_window* vd_curwindow; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vt_window*) ;
 int FUNC_2 (struct vt_window*) ;

__attribute__((used)) static int
FUNC_3(struct vt_window *VAR_1)
{
 struct vt_window *VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->vw_proc_dead_timer);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != 0) {




  VAR_2 = VAR_1->vw_device->vd_curwindow;
  if (VAR_2->vw_smode.mode == VAR_0)
   (void)FUNC_1(VAR_2);
  return (VAR_3);
 }


 if (VAR_1->vw_smode.mode == VAR_0) {
  VAR_3 = FUNC_1(VAR_1);
 }
 return (VAR_3);
}
