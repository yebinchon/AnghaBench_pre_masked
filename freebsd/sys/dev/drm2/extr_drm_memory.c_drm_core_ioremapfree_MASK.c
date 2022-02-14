
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct drm_local_map {scalar_t__ type; int size; scalar_t__ handle; } ;
struct drm_device {TYPE_1__* agp; } ;
struct TYPE_2__ {scalar_t__ cant_use_aperture; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct drm_local_map *VAR_1, struct drm_device *VAR_2)
{
 if (!VAR_1->handle || !VAR_1->size)
  return;

 if (FUNC_0(VAR_2) &&
     VAR_2->agp && VAR_2->agp->cant_use_aperture && VAR_1->type == VAR_0)
  FUNC_2(VAR_1->handle);
 else
  FUNC_1((vm_offset_t)VAR_1->handle, VAR_1->size);
}
