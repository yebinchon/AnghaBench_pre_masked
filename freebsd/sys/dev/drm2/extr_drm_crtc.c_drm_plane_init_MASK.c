
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane_funcs {int dummy; } ;
struct TYPE_5__ {int * properties; } ;
struct drm_plane {int format_count; unsigned long possible_crtcs; int head; int format_types; TYPE_2__ base; struct drm_plane_funcs const* funcs; struct drm_device* dev; int properties; } ;
struct TYPE_4__ {int mutex; int num_plane; int plane_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_device*,TYPE_2__*,int ) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct drm_device *VAR_4, struct drm_plane *VAR_5,
     unsigned long VAR_6,
     const struct drm_plane_funcs *VAR_7,
     const uint32_t *VAR_8, uint32_t VAR_9,
     bool VAR_10)
{
 int VAR_11;

 FUNC_7(&VAR_4->mode_config.mutex);

 VAR_11 = FUNC_2(VAR_4, &VAR_5->base, VAR_1);
 if (VAR_11)
  goto out;

 VAR_5->base.properties = &VAR_5->properties;
 VAR_5->dev = VAR_4;
 VAR_5->funcs = VAR_7;
 VAR_5->format_types = FUNC_5(sizeof(uint32_t) * VAR_9,
     VAR_0, VAR_3);
 if (!VAR_5->format_types) {
  FUNC_0("out of memory when allocating plane\n");
  FUNC_3(VAR_4, &VAR_5->base);
  VAR_11 = -VAR_2;
  goto out;
 }

 FUNC_6(VAR_5->format_types, VAR_8, VAR_9 * sizeof(uint32_t));
 VAR_5->format_count = VAR_9;
 VAR_5->possible_crtcs = VAR_6;





 if (!VAR_10) {
  FUNC_4(&VAR_5->head, &VAR_4->mode_config.plane_list);
  VAR_4->mode_config.num_plane++;
 } else {
  FUNC_1(&VAR_5->head);
 }

 out:
 FUNC_8(&VAR_4->mode_config.mutex);

 return VAR_11;
}
