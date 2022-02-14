
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void (* destroy ) (struct drm_pending_event*) ;struct drm_file* file_priv; TYPE_2__* event; } ;
struct TYPE_8__ {int length; int type; } ;
struct TYPE_9__ {TYPE_2__ base; int user_data; } ;
struct drm_pending_vblank_event {TYPE_4__ base; TYPE_3__ event; } ;
struct drm_mode_object {int dummy; } ;
struct drm_mode_crtc_page_flip {int flags; scalar_t__ reserved; int user_data; int fb_id; int crtc_id; } ;
struct drm_framebuffer {int width; int height; } ;
struct drm_file {int event_space; } ;
struct TYPE_12__ {int mutex; } ;
struct drm_device {TYPE_6__ mode_config; int event_lock; } ;
struct TYPE_7__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {int x; int y; TYPE_5__* funcs; scalar_t__ invert_dimensions; TYPE_1__ mode; int * fb; } ;
struct TYPE_11__ {int (* page_flip ) (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*) ;} ;


 int FUNC_0 (char*,int,int,int,int,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct drm_mode_object* FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_pending_vblank_event*,int ) ;
 scalar_t__ VAR_12 ;
 struct drm_pending_vblank_event* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct drm_crtc* FUNC_6 (struct drm_mode_object*) ;
 struct drm_framebuffer* FUNC_7 (struct drm_mode_object*) ;
 int FUNC_8 (struct drm_crtc*,struct drm_framebuffer*,struct drm_pending_vblank_event*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct drm_device *VAR_13,
        void *VAR_14, struct drm_file *VAR_15)
{
 struct drm_mode_crtc_page_flip *VAR_16 = VAR_14;
 struct drm_mode_object *VAR_17;
 struct drm_crtc *VAR_18;
 struct drm_framebuffer *VAR_19;
 struct drm_pending_vblank_event *VAR_20 = ((void*)0);

 unsigned long VAR_21;

 int VAR_22, VAR_23;
 int VAR_24 = -VAR_7;

 if (VAR_16->flags & ~VAR_5 ||
     VAR_16->reserved != 0)
  return -VAR_7;

 FUNC_9(&VAR_13->mode_config.mutex);
 VAR_17 = FUNC_1(VAR_13, VAR_16->crtc_id, VAR_2);
 if (!VAR_17)
  goto out;
 VAR_18 = FUNC_6(VAR_17);

 if (VAR_18->fb == ((void*)0)) {




  VAR_24 = -VAR_6;
  goto out;
 }

 if (VAR_18->funcs->page_flip == ((void*)0))
  goto out;

 VAR_17 = FUNC_1(VAR_13, VAR_16->fb_id, VAR_3);
 if (!VAR_17)
  goto out;
 VAR_19 = FUNC_7(VAR_17);

 VAR_22 = VAR_18->mode.hdisplay;
 VAR_23 = VAR_18->mode.vdisplay;

 if (VAR_18->invert_dimensions) {
  int VAR_25;
  VAR_25 = VAR_23;
  VAR_23 = VAR_22;
  VAR_22 = VAR_25;
 }

 if (VAR_22 > VAR_19->width ||
     VAR_23 > VAR_19->height ||
     VAR_18->x > VAR_19->width - VAR_22 ||
     VAR_18->y > VAR_19->height - VAR_23) {
  FUNC_0("Invalid fb size %ux%u for CRTC viewport %ux%u+%d+%d%s.\n",
         VAR_19->width, VAR_19->height, VAR_22, VAR_23, VAR_18->x, VAR_18->y,
         VAR_18->invert_dimensions ? " (inverted)" : "");
  VAR_24 = -VAR_9;
  goto out;
 }

 if (VAR_16->flags & VAR_4) {
  VAR_24 = -VAR_8;
  FUNC_4(&VAR_13->event_lock);
  if (VAR_15->event_space < sizeof VAR_20->event) {
   FUNC_5(&VAR_13->event_lock);
   goto out;
  }
  VAR_15->event_space -= sizeof VAR_20->event;
  FUNC_5(&VAR_13->event_lock);

  VAR_20 = FUNC_3(sizeof *VAR_20, VAR_1, VAR_10 | VAR_11);
  if (VAR_20 == ((void*)0)) {
   FUNC_4(&VAR_13->event_lock);
   VAR_15->event_space += sizeof VAR_20->event;
   FUNC_5(&VAR_13->event_lock);
   goto out;
  }

  VAR_20->event.base.type = VAR_0;
  VAR_20->event.base.length = sizeof VAR_20->event;
  VAR_20->event.user_data = VAR_16->user_data;
  VAR_20->base.event = &VAR_20->event.base;
  VAR_20->base.file_priv = VAR_15;
  VAR_20->base.destroy =
   (void (*) (struct drm_pending_event *)) VAR_12;
 }

 VAR_24 = VAR_18->funcs->page_flip(VAR_18, VAR_19, VAR_20);
 if (VAR_24) {
  if (VAR_16->flags & VAR_4) {
   FUNC_4(&VAR_13->event_lock);
   VAR_15->event_space += sizeof VAR_20->event;
   FUNC_5(&VAR_13->event_lock);
   FUNC_2(VAR_20, VAR_1);
  }
 }

out:
 FUNC_10(&VAR_13->mode_config.mutex);
 return VAR_24;
}
