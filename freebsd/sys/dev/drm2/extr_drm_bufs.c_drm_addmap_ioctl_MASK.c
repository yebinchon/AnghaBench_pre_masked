
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_map_list {scalar_t__ user_token; } ;
struct drm_map {scalar_t__ type; void* handle; int flags; int size; int offset; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct drm_device*,int ,int ,scalar_t__,int ,struct drm_map_list**) ;

int FUNC_2(struct drm_device *VAR_4, void *VAR_5,
       struct drm_file *VAR_6)
{
 struct drm_map *VAR_7 = VAR_5;
 struct drm_map_list *VAR_8;
 int VAR_9;

 if (!(FUNC_0(VAR_0) || VAR_7->type == VAR_2 || VAR_7->type == VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4, VAR_7->offset, VAR_7->size, VAR_7->type,
         VAR_7->flags, &VAR_8);

 if (VAR_9)
  return VAR_9;


 VAR_7->handle = (void *)(unsigned long)VAR_8->user_token;
 return 0;
}
