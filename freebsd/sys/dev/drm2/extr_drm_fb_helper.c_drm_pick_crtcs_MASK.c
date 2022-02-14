
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper_crtc {int dummy; } ;
struct drm_fb_helper_connector {struct drm_connector* connector; } ;
struct drm_fb_helper {int connector_count; int crtc_count; struct drm_fb_helper_crtc* crtc_info; struct drm_fb_helper_connector** connector_info; struct drm_device* dev; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int num_connector; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (struct drm_connector*) ;} ;
struct drm_connector {scalar_t__ status; struct drm_connector_helper_funcs* helper_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_fb_helper_connector*) ;
 scalar_t__ FUNC_1 (struct drm_fb_helper_connector*,int,int) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_fb_helper_crtc**,int ) ;
 struct drm_fb_helper_crtc** FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct drm_fb_helper_crtc**,struct drm_fb_helper_crtc**,int) ;
 struct drm_encoder* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_fb_helper *VAR_4,
     struct drm_fb_helper_crtc **VAR_5,
     struct drm_display_mode **VAR_6,
     int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 struct drm_device *VAR_12 = VAR_4->dev;
 struct drm_connector *VAR_13;
 struct drm_connector_helper_funcs *VAR_14;
 struct drm_encoder *VAR_15;
 struct drm_fb_helper_crtc *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct drm_fb_helper_crtc **VAR_20, *VAR_21;
 struct drm_fb_helper_connector *VAR_22;

 if (VAR_7 == VAR_4->connector_count)
  return 0;

 VAR_22 = VAR_4->connector_info[VAR_7];
 VAR_13 = VAR_22->connector;

 VAR_5[VAR_7] = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_18 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7+1, VAR_8, VAR_9);
 if (VAR_6[VAR_7] == ((void*)0))
  return VAR_18;

 VAR_20 = FUNC_4(VAR_12->mode_config.num_connector *
   sizeof(struct drm_fb_helper_crtc *), VAR_0, VAR_1 | VAR_2);
 if (!VAR_20)
  return VAR_18;

 VAR_17 = 1;
 if (VAR_13->status == VAR_3)
  VAR_17++;
 if (FUNC_0(VAR_22))
  VAR_17++;
 if (FUNC_1(VAR_22, VAR_8, VAR_9))
  VAR_17++;

 VAR_14 = VAR_13->helper_private;
 VAR_15 = VAR_14->best_encoder(VAR_13);
 if (!VAR_15)
  goto out;



 for (VAR_10 = 0; VAR_10 < VAR_4->crtc_count; VAR_10++) {
  VAR_21 = &VAR_4->crtc_info[VAR_10];

  if ((VAR_15->possible_crtcs & (1 << VAR_10)) == 0)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
   if (VAR_5[VAR_11] == VAR_21)
    break;

  if (VAR_11 < VAR_7) {

   if (VAR_4->crtc_count > 1)
    continue;

   if (!FUNC_2(VAR_6[VAR_11], VAR_6[VAR_7]))
    continue;
  }

  VAR_20[VAR_7] = VAR_21;
  FUNC_5(VAR_20, VAR_5, VAR_7 * sizeof(struct drm_fb_helper_crtc *));
  VAR_19 = VAR_17 + FUNC_7(VAR_4, VAR_20, VAR_6, VAR_7 + 1,
        VAR_8, VAR_9);
  if (VAR_19 > VAR_18) {
   VAR_16 = VAR_21;
   VAR_18 = VAR_19;
   FUNC_5(VAR_5, VAR_20,
          VAR_12->mode_config.num_connector *
          sizeof(struct drm_fb_helper_crtc *));
  }
 }
out:
 FUNC_3(VAR_20, VAR_0);
 return VAR_18;
}
