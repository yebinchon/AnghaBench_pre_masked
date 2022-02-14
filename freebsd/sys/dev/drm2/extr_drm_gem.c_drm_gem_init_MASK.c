
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_mm {int idxunr; int offset_hash; } ;
struct drm_device {struct drm_gem_mm* mm_private; int object_names; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (struct drm_gem_mm*,int ) ;
 struct drm_gem_mm* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;

int
FUNC_6(struct drm_device *VAR_4)
{
 struct drm_gem_mm *VAR_5;

 FUNC_1(&VAR_4->object_names);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1, VAR_3);
 if (!VAR_5) {
  FUNC_0("out of memory\n");
  return -VAR_2;
 }

 VAR_4->mm_private = VAR_5;

 if (FUNC_2(&VAR_5->offset_hash, 19)) {
  FUNC_3(VAR_5, VAR_1);
  return -VAR_2;
 }

 VAR_5->idxunr = FUNC_5(0, VAR_0, ((void*)0));

 return 0;
}
