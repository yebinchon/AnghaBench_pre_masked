
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {int dummy; } ;
struct ttm_range_manager {int lock; struct drm_mm mm; } ;
struct ttm_placement {unsigned long lpfn; int fpfn; } ;
struct ttm_mem_type_manager {unsigned long size; scalar_t__ priv; } ;
struct ttm_mem_reg {int start; struct drm_mm_node* mm_node; int page_alignment; int num_pages; } ;
struct ttm_buffer_object {int dummy; } ;
struct drm_mm_node {int start; } ;


 struct drm_mm_node* FUNC_0 (struct drm_mm_node*,int ,int ,int ,unsigned long) ;
 int FUNC_1 (struct drm_mm*) ;
 struct drm_mm_node* FUNC_2 (struct drm_mm*,int ,int ,int ,unsigned long,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ttm_mem_type_manager *VAR_0,
          struct ttm_buffer_object *VAR_1,
          struct ttm_placement *VAR_2,
          struct ttm_mem_reg *VAR_3)
{
 struct ttm_range_manager *VAR_4 = (struct ttm_range_manager *) VAR_0->priv;
 struct drm_mm *VAR_5 = &VAR_4->mm;
 struct drm_mm_node *VAR_6 = ((void*)0);
 unsigned long VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->lpfn;
 if (!VAR_7)
  VAR_7 = VAR_0->size;
 do {
  VAR_8 = FUNC_1(VAR_5);
  if (FUNC_5(VAR_8))
   return VAR_8;

  FUNC_3(&VAR_4->lock);
  VAR_6 = FUNC_2(VAR_5,
     VAR_3->num_pages, VAR_3->page_alignment,
     VAR_2->fpfn, VAR_7, 1);
  if (FUNC_5(VAR_6 == ((void*)0))) {
   FUNC_4(&VAR_4->lock);
   return 0;
  }
  VAR_6 = FUNC_0(VAR_6, VAR_3->num_pages,
           VAR_3->page_alignment,
           VAR_2->fpfn,
           VAR_7);
  FUNC_4(&VAR_4->lock);
 } while (VAR_6 == ((void*)0));

 VAR_3->mm_node = VAR_6;
 VAR_3->start = VAR_6->start;
 return 0;
}
