
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {scalar_t__ vd_savedwindow; scalar_t__ vd_curwindow; scalar_t__* vd_windows; int vd_lock; int vd_winswitch; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct vt_device*) ;
 int FUNC_1 (struct vt_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;

void
FUNC_4(struct vt_device *VAR_2)
{
 int VAR_3;

 if (VAR_1 == 0)
  return;

 VAR_2->vd_savedwindow = VAR_2->vd_curwindow;

 FUNC_3(VAR_2->vd_windows[VAR_0]);


 VAR_3 = 0;
 FUNC_0(VAR_2);
 while (VAR_2->vd_curwindow != VAR_2->vd_windows[VAR_0] && VAR_3 == 0)
  VAR_3 = FUNC_2(&VAR_2->vd_winswitch, &VAR_2->vd_lock);
 FUNC_1(VAR_2);
}
