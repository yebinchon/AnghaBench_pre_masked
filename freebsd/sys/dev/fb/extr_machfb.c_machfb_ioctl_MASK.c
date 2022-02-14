
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_buffer_size; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_long ;
struct machfb_softc {int sc_depth; int sc_flags; int sc_width; int sc_height; } ;
struct fbtype {int fb_depth; int fb_cmsize; int fb_size; int fb_width; int fb_height; int fb_type; } ;
struct fbcursor {int set; int enable; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_1 (struct machfb_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct machfb_softc *VAR_7;
 struct fbcursor *VAR_8;
 struct fbtype *VAR_9;

 VAR_7 = (struct machfb_softc *)VAR_4;

 switch (VAR_5) {
 case 129:
  VAR_9 = (struct fbtype *)VAR_6;
  VAR_9->fb_type = VAR_1;
  VAR_9->fb_height = VAR_7->sc_height;
  VAR_9->fb_width = VAR_7->sc_width;
  VAR_9->fb_depth = VAR_7->sc_depth;
  if (VAR_7->sc_depth <= 1 || VAR_7->sc_depth > 8)
   VAR_9->fb_cmsize = 0;
  else
   VAR_9->fb_cmsize = 1 << VAR_7->sc_depth;
  VAR_9->fb_size = VAR_4->va_buffer_size;
  break;
 case 128:
  VAR_8 = (struct fbcursor *)VAR_6;
  if (VAR_8->set & VAR_2 && VAR_8->enable == 0) {
   FUNC_1(VAR_7, 0);
   VAR_7->sc_flags &= ~VAR_3;
  } else
   return (VAR_0);
  break;
 default:
  return (FUNC_0(VAR_4, VAR_5, VAR_6));
 }

 return (0);
}
