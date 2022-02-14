
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int object_names; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct drm_file*) ;
 int VAR_0 ;

void
FUNC_2(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 FUNC_1(&VAR_2->object_names,
     VAR_0, VAR_2);

 FUNC_0(&VAR_2->object_names);
}
