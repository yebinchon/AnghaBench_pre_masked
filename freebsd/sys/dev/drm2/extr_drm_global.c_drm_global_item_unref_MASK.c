
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_global_reference {size_t global_type; int (* release ) (struct drm_global_reference*) ;int * object; } ;
struct drm_global_item {scalar_t__ refcount; int mutex; int * object; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct drm_global_item* VAR_1 ;
 int FUNC_2 (struct drm_global_reference*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_global_reference *VAR_2)
{
 struct drm_global_item *VAR_3 = &VAR_1[VAR_2->global_type];

 FUNC_3(&VAR_3->mutex);
 FUNC_0(VAR_3->refcount != 0);
 FUNC_0(VAR_2->object == VAR_3->object);
 if (--VAR_3->refcount == 0) {
  VAR_2->release(VAR_2);
  FUNC_1(VAR_3->object, VAR_0);
  VAR_3->object = ((void*)0);
 }
 FUNC_4(&VAR_3->mutex);
}
