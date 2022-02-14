
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_ooffset_t ;
struct vm_object {int dummy; } ;
struct drm_device {TYPE_1__* driver; int * drm_ttm_bdev; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int *,int ,struct vm_object**,int) ;
 struct drm_device* FUNC_1 (struct cdev*) ;
 int FUNC_2 (int *,int *,int ,struct vm_object**,int) ;

int
FUNC_3(struct cdev *VAR_2, vm_ooffset_t *VAR_3, vm_size_t VAR_4,
    struct vm_object **VAR_5, int VAR_6)
{
 struct drm_device *VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7->drm_ttm_bdev != ((void*)0)) {
  return (-FUNC_2(VAR_7->drm_ttm_bdev, VAR_3, VAR_4,
      VAR_5, VAR_6));
 } else if ((VAR_7->driver->driver_features & VAR_0) != 0) {
  return (-FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
 } else {
  return (VAR_1);
 }
}
