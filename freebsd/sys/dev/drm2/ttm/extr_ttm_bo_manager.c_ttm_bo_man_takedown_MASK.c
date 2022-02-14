
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;
struct ttm_range_manager {int lock; struct drm_mm mm; } ;
struct ttm_mem_type_manager {int * priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_mm*) ;
 int FUNC_1 (struct drm_mm*) ;
 int FUNC_2 (struct ttm_range_manager*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ttm_mem_type_manager *VAR_2)
{
 struct ttm_range_manager *VAR_3 = (struct ttm_range_manager *) VAR_2->priv;
 struct drm_mm *VAR_4 = &VAR_3->mm;

 FUNC_4(&VAR_3->lock);
 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_4);
  FUNC_5(&VAR_3->lock);
  FUNC_3(&VAR_3->lock);
  FUNC_2(VAR_3, VAR_1);
  VAR_2->priv = ((void*)0);
  return 0;
 }
 FUNC_5(&VAR_3->lock);
 return -VAR_0;
}
