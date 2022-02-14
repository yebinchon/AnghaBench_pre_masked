
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property_blob {int length; int head; int data; int base; } ;
struct TYPE_2__ {int property_blob_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (struct drm_property_blob*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct drm_property_blob* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,void*,int) ;

__attribute__((used)) static struct drm_property_blob *FUNC_5(struct drm_device *VAR_4, int VAR_5,
         void *VAR_6)
{
 struct drm_property_blob *VAR_7;
 int VAR_8;

 if (!VAR_5 || !VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(sizeof(struct drm_property_blob)+VAR_5, VAR_0,
     VAR_2 | VAR_3);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_4, &VAR_7->base, VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_7, VAR_0);
  return ((void*)0);
 }

 VAR_7->length = VAR_5;

 FUNC_4(VAR_7->data, VAR_6, VAR_5);

 FUNC_2(&VAR_7->head, &VAR_4->mode_config.property_blob_list);
 return VAR_7;
}
