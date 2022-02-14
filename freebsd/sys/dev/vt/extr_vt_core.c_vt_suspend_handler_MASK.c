
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_device {TYPE_1__* vd_driver; int vd_flags; } ;
struct TYPE_2__ {int (* vd_suspend ) (struct vt_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vt_device*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct vt_device *VAR_2;

 VAR_2 = VAR_1;
 VAR_2->vd_flags |= VAR_0;
 if (VAR_2->vd_driver != ((void*)0) && VAR_2->vd_driver->vd_suspend != ((void*)0))
  VAR_2->vd_driver->vd_suspend(VAR_2);
}
