
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int vd_flags; int vd_timer; int vd_timer_armed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vt_device*,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vt_device *VAR_2)
{





 FUNC_0(VAR_2, VAR_0);

 if (!(VAR_2->vd_flags & VAR_1) ||
     !FUNC_1(&VAR_2->vd_timer_armed, 1, 0))
  return;

 FUNC_2(&VAR_2->vd_timer);
}
