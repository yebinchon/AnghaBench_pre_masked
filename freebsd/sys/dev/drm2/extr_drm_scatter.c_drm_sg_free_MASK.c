
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sg_mem {scalar_t__ vaddr; } ;
struct drm_scatter_gather {scalar_t__ handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct drm_sg_mem* sg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_sg_mem*) ;

int FUNC_3(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct drm_scatter_gather *VAR_5 = VAR_3;
 struct drm_sg_mem *VAR_6;

 if (!FUNC_1(VAR_2, VAR_0))
  return -VAR_1;

 VAR_6 = VAR_2->sg;
 VAR_2->sg = ((void*)0);

 if (!VAR_6 || VAR_6->vaddr != VAR_5->handle)
  return -VAR_1;

 FUNC_0("free 0x%zx\n", VAR_6->vaddr);

 FUNC_2(VAR_6);

 return 0;
}
