
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {int * unique; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int (* set_busid ) (struct drm_device*,struct drm_master*) ;} ;


 int FUNC_0 (struct drm_device*,struct drm_master*) ;
 int FUNC_1 (struct drm_device*,struct drm_master*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct drm_master *VAR_2 = VAR_1->master;
 int VAR_3;

 if (VAR_2->unique != ((void*)0))
  FUNC_0(VAR_0, VAR_2);

 VAR_3 = VAR_0->driver->bus->set_busid(VAR_0, VAR_2);
 if (VAR_3)
  goto err;
 return 0;
err:
 FUNC_0(VAR_0, VAR_2);
 return VAR_3;
}
