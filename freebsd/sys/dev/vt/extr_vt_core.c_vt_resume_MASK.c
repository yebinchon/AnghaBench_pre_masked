
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int * vd_savedwindow; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(struct vt_device *VAR_1)
{

 if (VAR_0 == 0)
  return;

 FUNC_0(VAR_1->vd_savedwindow);
 VAR_1->vd_savedwindow = ((void*)0);
}
