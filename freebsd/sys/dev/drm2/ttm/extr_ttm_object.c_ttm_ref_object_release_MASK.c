
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_ref_object {size_t ref_type; struct ttm_base_object* obj; int head; int hash; struct ttm_object_file* tfile; } ;
struct ttm_object_file {int lock; struct drm_open_hash* ref_hash; TYPE_1__* tdev; } ;
struct ttm_mem_global {int dummy; } ;
struct ttm_base_object {int (* ref_obj_release ) (struct ttm_base_object*,size_t) ;} ;
struct drm_open_hash {int dummy; } ;
struct TYPE_2__ {struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct drm_open_hash*,int *) ;
 int FUNC_1 (struct ttm_ref_object*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ttm_base_object*,size_t) ;
 int FUNC_6 (struct ttm_base_object**) ;
 int FUNC_7 (struct ttm_mem_global*,int) ;

__attribute__((used)) static void FUNC_8(struct ttm_ref_object *VAR_2)
{
 struct ttm_base_object *VAR_3 = VAR_2->obj;
 struct ttm_object_file *VAR_4 = VAR_2->tfile;
 struct drm_open_hash *VAR_5;
 struct ttm_mem_global *VAR_6 = VAR_4->tdev->mem_glob;

 VAR_5 = &VAR_4->ref_hash[VAR_2->ref_type];
 (void)FUNC_0(VAR_5, &VAR_2->hash);
 FUNC_2(&VAR_2->head);
 FUNC_4(&VAR_4->lock);

 if (VAR_2->ref_type != VAR_1 && VAR_3->ref_obj_release)
  VAR_3->ref_obj_release(VAR_3, VAR_2->ref_type);

 FUNC_6(&VAR_2->obj);
 FUNC_7(VAR_6, sizeof(*VAR_2));
 FUNC_1(VAR_2, VAR_0);
 FUNC_3(&VAR_4->lock);
}
