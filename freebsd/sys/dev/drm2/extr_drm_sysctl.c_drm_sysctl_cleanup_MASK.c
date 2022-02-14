
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; TYPE_2__* sysctl; } ;
struct TYPE_4__ {int ctx; } ;
struct TYPE_3__ {int (* sysctl_cleanup ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->sysctl == ((void*)0))
  return (0);

 VAR_2 = FUNC_2(&VAR_1->sysctl->ctx);
 FUNC_0(VAR_1->sysctl, VAR_0);
 VAR_1->sysctl = ((void*)0);
 if (VAR_1->driver->sysctl_cleanup != ((void*)0))
  VAR_1->driver->sysctl_cleanup(VAR_1);

 return (-VAR_2);
}
