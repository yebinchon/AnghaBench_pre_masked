
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int flags; int num_values; char* name; struct drm_property* values; int head; int enum_blob_list; int base; } ;
struct TYPE_2__ {int property_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_device*,int *,int ) ;
 int FUNC_2 (struct drm_property*,int ) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int,int ,int) ;
 int FUNC_5 (char*,char const*,int) ;

struct drm_property *FUNC_6(struct drm_device *VAR_5, int VAR_6,
      const char *VAR_7, int VAR_8)
{
 struct drm_property *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = FUNC_4(sizeof(struct drm_property), VAR_0,
     VAR_3 | VAR_4);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_8) {
  VAR_9->values = FUNC_4(sizeof(uint64_t)*VAR_8, VAR_0,
      VAR_3 | VAR_4);
  if (!VAR_9->values)
   goto fail;
 }

 VAR_10 = FUNC_1(VAR_5, &VAR_9->base, VAR_1);
 if (VAR_10)
  goto fail;

 VAR_9->flags = VAR_6;
 VAR_9->num_values = VAR_8;
 FUNC_0(&VAR_9->enum_blob_list);

 if (VAR_7) {
  FUNC_5(VAR_9->name, VAR_7, VAR_2);
  VAR_9->name[VAR_2-1] = '\0';
 }

 FUNC_3(&VAR_9->head, &VAR_5->mode_config.property_list);
 return VAR_9;
fail:
 FUNC_2(VAR_9->values, VAR_0);
 FUNC_2(VAR_9, VAR_0);
 return ((void*)0);
}
