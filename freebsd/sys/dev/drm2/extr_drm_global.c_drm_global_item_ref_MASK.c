
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_global_reference {size_t global_type; int (* init ) (struct drm_global_reference*) ;int * object; int size; } ;
struct drm_global_item {scalar_t__ refcount; int * object; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_global_item* VAR_4 ;
 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct drm_global_reference*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct drm_global_reference *VAR_5)
{
 int VAR_6;
 struct drm_global_item *VAR_7 = &VAR_4[VAR_5->global_type];
 void *VAR_8;

 FUNC_2(&VAR_7->mutex);
 if (VAR_7->refcount == 0) {
  VAR_7->object = FUNC_0(VAR_5->size, VAR_1,
      VAR_2 | VAR_3);
  if (FUNC_4(VAR_7->object == ((void*)0))) {
   VAR_6 = -VAR_0;
   goto out_err;
  }

  VAR_5->object = VAR_7->object;
  VAR_6 = VAR_5->init(VAR_5);
  if (FUNC_4(VAR_6 != 0))
   goto out_err;

 }
 ++VAR_7->refcount;
 VAR_5->object = VAR_7->object;
 VAR_8 = VAR_7->object;
 FUNC_3(&VAR_7->mutex);
 return 0;
out_err:
 FUNC_3(&VAR_7->mutex);
 VAR_7->object = ((void*)0);
 return VAR_6;
}
