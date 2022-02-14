
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; int hdisplay; int vdisplay; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,int,char*) ;

void FUNC_1(struct drm_display_mode *VAR_2)
{
 bool VAR_3 = !!(VAR_2->flags & VAR_1);

 FUNC_0(VAR_2->name, VAR_0, "%dx%d%s",
   VAR_2->hdisplay, VAR_2->vdisplay,
   VAR_3 ? "i" : "");
}
