
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {scalar_t__ is_master; TYPE_2__* minor; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_4__ {int master; } ;
struct TYPE_3__ {int (* master_drop ) (struct drm_device*,struct drm_file*,int) ;} ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,struct drm_file*,int) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 if (!VAR_3->is_master)
  return -VAR_0;

 if (!VAR_3->minor->master)
  return -VAR_0;

 FUNC_0(VAR_1);
 if (VAR_1->driver->master_drop)
  VAR_1->driver->master_drop(VAR_1, VAR_3, 0);
 FUNC_2(&VAR_3->minor->master);
 VAR_3->is_master = 0;
 FUNC_1(VAR_1);
 return 0;
}
