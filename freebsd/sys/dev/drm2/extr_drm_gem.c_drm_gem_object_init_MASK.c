
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct drm_gem_object {int refcount; size_t size; scalar_t__ handle_count; int vm_obj; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int td_ucred; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int *,size_t,int,int ,int ) ;

int FUNC_2(struct drm_device *VAR_5,
   struct drm_gem_object *VAR_6, size_t VAR_7)
{
 FUNC_0((VAR_7 & (VAR_1 - 1)) == 0,
     ("Bad size %ju", (uintmax_t)VAR_7));

 VAR_6->dev = VAR_5;
 VAR_6->vm_obj = FUNC_1(VAR_0, ((void*)0), VAR_7,
     VAR_2 | VAR_3, 0, VAR_4->td_ucred);

 VAR_6->refcount = 1;
 VAR_6->handle_count = 0;
 VAR_6->size = VAR_7;

 return 0;
}
