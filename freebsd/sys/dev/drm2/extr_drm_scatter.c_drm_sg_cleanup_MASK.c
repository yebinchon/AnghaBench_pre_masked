
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sg_mem {scalar_t__ vaddr; struct drm_sg_mem* busaddr; int pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_sg_mem*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct drm_sg_mem * VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->vaddr != 0)
  FUNC_2(VAR_2->vaddr, FUNC_0(VAR_2->pages));

 FUNC_1(VAR_2->busaddr, VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
