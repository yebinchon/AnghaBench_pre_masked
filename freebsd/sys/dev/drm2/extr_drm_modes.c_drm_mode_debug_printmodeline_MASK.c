
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_display_mode {int flags; int type; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; int clock; int vrefresh; int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(const struct drm_display_mode *VAR_0)
{
 FUNC_0("Modeline %d:\"%s\" %d %d %d %d %d %d %d %d %d %d "
   "0x%x 0x%x\n",
  VAR_0->base.id, VAR_0->name, VAR_0->vrefresh, VAR_0->clock,
  VAR_0->hdisplay, VAR_0->hsync_start,
  VAR_0->hsync_end, VAR_0->htotal,
  VAR_0->vdisplay, VAR_0->vsync_start,
  VAR_0->vsync_end, VAR_0->vtotal, VAR_0->type, VAR_0->flags);
}
