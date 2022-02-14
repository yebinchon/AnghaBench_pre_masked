
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_local_map {scalar_t__ type; int size; int offset; int handle; } ;
struct drm_device {TYPE_1__* agp; } ;
struct TYPE_2__ {scalar_t__ cant_use_aperture; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct drm_local_map *VAR_2, struct drm_device *VAR_3)
{
 if (FUNC_1(VAR_3) &&
     VAR_3->agp && VAR_3->agp->cant_use_aperture && VAR_2->type == VAR_1)
  VAR_2->handle = FUNC_0(VAR_2->offset, VAR_2->size, VAR_3);
 else
  VAR_2->handle = FUNC_2(VAR_2->offset, VAR_2->size,
      VAR_0);
}
