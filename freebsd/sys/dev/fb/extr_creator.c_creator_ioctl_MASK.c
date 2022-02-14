
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_long ;
struct fbtype {int fb_size; int fb_cmsize; int fb_depth; int fb_width; int fb_height; int fb_type; } ;
struct fbcursor {int set; int enable; } ;
struct creator_softc {int sc_flags; int sc_width; int sc_height; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct creator_softc*,int ) ;
 int FUNC_1 (int *,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct creator_softc *VAR_7;
 struct fbcursor *VAR_8;
 struct fbtype *VAR_9;

 VAR_7 = (struct creator_softc *)VAR_4;
 switch (VAR_5) {
 case 129:
  VAR_9 = (struct fbtype *)VAR_6;
  VAR_9->fb_type = VAR_2;
  VAR_9->fb_height = VAR_7->sc_height;
  VAR_9->fb_width = VAR_7->sc_width;
  VAR_9->fb_depth = VAR_9->fb_cmsize = VAR_9->fb_size = 0;
  break;
 case 128:
  VAR_8 = (struct fbcursor *)VAR_6;
  if (VAR_8->set & VAR_3 && VAR_8->enable == 0) {
   FUNC_0(VAR_7, 0);
   VAR_7->sc_flags &= ~VAR_0;
  } else
   return (VAR_1);
  break;
  break;
 default:
  return (FUNC_1(VAR_4, VAR_5, VAR_6));
 }
 return (0);
}
