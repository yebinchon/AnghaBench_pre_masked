
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {int head; int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (struct drm_property_blob*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1,
          struct drm_property_blob *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->base);
 FUNC_2(&VAR_2->head);
 FUNC_1(VAR_2, VAR_0);
}
