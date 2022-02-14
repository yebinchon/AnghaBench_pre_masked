
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_3__ {int tag; int map; int vaddr; } ;
typedef TYPE_1__ drm_dma_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct drm_device * VAR_0, drm_dma_handle_t * VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->tag, VAR_1->map);
 FUNC_2(VAR_1->tag, VAR_1->vaddr, VAR_1->map);
 FUNC_0(VAR_1->tag);
}
