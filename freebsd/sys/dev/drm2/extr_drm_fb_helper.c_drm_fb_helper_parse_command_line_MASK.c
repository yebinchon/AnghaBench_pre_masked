
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int force; int refresh; scalar_t__ interlace; scalar_t__ margins; scalar_t__ rb; scalar_t__ refresh_specified; int yres; int xres; } ;
struct drm_fb_helper_connector {struct drm_cmdline_mode cmdline_mode; struct drm_connector* connector; } ;
struct drm_fb_helper {int connector_count; struct drm_fb_helper_connector** connector_info; } ;
struct drm_connector {int force; } ;


 int FUNC_0 (char*,int ,int ,int ,int,char*,char*,char*) ;



 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (struct drm_connector*) ;
 scalar_t__ FUNC_3 (char*,struct drm_connector*,struct drm_cmdline_mode*) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct drm_fb_helper *VAR_0)
{
 struct drm_fb_helper_connector *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->connector_count; VAR_2++) {
  struct drm_cmdline_mode *VAR_3;
  struct drm_connector *VAR_4;
  char *VAR_5 = ((void*)0);

  VAR_1 = VAR_0->connector_info[VAR_2];
  VAR_4 = VAR_1->connector;
  VAR_3 = &VAR_1->cmdline_mode;


  if (FUNC_4(FUNC_2(VAR_4), &VAR_5))
   continue;

  if (FUNC_3(VAR_5,
             VAR_4,
             VAR_3)) {
   if (VAR_3->force) {
    const char *VAR_6;
    switch (VAR_3->force) {
    case 130:
     VAR_6 = "OFF";
     break;
    case 128:
     VAR_6 = "ON - dig";
     break;
    default:
    case 129:
     VAR_6 = "ON";
     break;
    }

    FUNC_1("forcing %s connector %s\n",
      FUNC_2(VAR_4), VAR_6);
    VAR_4->force = VAR_3->force;
   }

   FUNC_0("cmdline mode for connector %s %dx%d@%dHz%s%s%s\n",
          FUNC_2(VAR_4),
          VAR_3->xres, VAR_3->yres,
          VAR_3->refresh_specified ? VAR_3->refresh : 60,
          VAR_3->rb ? " reduced blanking" : "",
          VAR_3->margins ? " with margins" : "",
          VAR_3->interlace ? " interlaced" : "");
  }

  FUNC_5(VAR_5);
 }
 return 0;
}
