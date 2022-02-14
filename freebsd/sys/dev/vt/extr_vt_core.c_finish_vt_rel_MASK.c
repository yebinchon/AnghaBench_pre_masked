
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_flags; int vw_switch_to; int vw_proc_dead_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct vt_window *VAR_2, int VAR_3, int *VAR_4)
{

 if (VAR_2->vw_flags & VAR_1) {
  VAR_2->vw_flags &= ~VAR_1;
  if (VAR_3) {
   FUNC_0(&VAR_2->vw_proc_dead_timer);
   (void)FUNC_1(VAR_2->vw_switch_to);
  }
  return (0);
 }
 return (VAR_0);
}
