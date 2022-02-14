
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_ooffset_t ;
struct vm_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_4__ {int td_ucred; } ;
struct TYPE_3__ {int gem_pager_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vm_object* FUNC_3 (struct drm_gem_object*,int ,int ,int ,int,int ,int ) ;
 TYPE_2__* VAR_3 ;
 struct drm_gem_object* FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct drm_gem_object*) ;

int
FUNC_7(struct drm_device *VAR_4, vm_ooffset_t *VAR_5, vm_size_t VAR_6,
    struct vm_object **VAR_7, int VAR_8)
{
 struct drm_gem_object *VAR_9;
 struct vm_object *VAR_10;

 FUNC_1(VAR_4);
 VAR_9 = FUNC_4(VAR_4, *VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_4);
  return (-VAR_1);
 }
 FUNC_5(VAR_9);
 FUNC_2(VAR_4);
 VAR_10 = FUNC_3(VAR_9, VAR_2,
     VAR_4->driver->gem_pager_ops, VAR_6, VAR_8,
     FUNC_0(*VAR_5), VAR_3->td_ucred);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_9);
  return (-VAR_0);
 }
 *VAR_5 = FUNC_0(*VAR_5);
 *VAR_7 = VAR_10;
 return (0);
}
