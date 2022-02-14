
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_version {int desc_len; int desc; int date_len; int date; int name_len; int name; int version_patchlevel; int version_minor; int version_major; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int desc; int date; int name; int patchlevel; int minor; int major; } ;


 int FUNC_0 (int ,int *,int ) ;

int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
         struct drm_file *VAR_2)
{
 struct drm_version *VAR_3 = VAR_1;
 int VAR_4;

 VAR_3->version_major = VAR_0->driver->major;
 VAR_3->version_minor = VAR_0->driver->minor;
 VAR_3->version_patchlevel = VAR_0->driver->patchlevel;
 VAR_4 = FUNC_0(VAR_3->name, &VAR_3->name_len,
   VAR_0->driver->name);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->date, &VAR_3->date_len,
    VAR_0->driver->date);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->desc, &VAR_3->desc_len,
    VAR_0->driver->desc);

 return VAR_4;
}
