
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_long ;
struct video_adapter_softc {int depth; int fb_size; int width; int height; } ;
struct fbtype {int fb_depth; int fb_cmsize; int fb_size; int fb_width; int fb_height; int fb_type; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct video_adapter_softc *VAR_5;
 struct fbtype *VAR_6;

 VAR_5 = (struct video_adapter_softc *)VAR_2;

 switch (VAR_3) {
 case 129:
  VAR_6 = (struct fbtype *)VAR_4;
  VAR_6->fb_type = VAR_1;
  VAR_6->fb_height = VAR_5->height;
  VAR_6->fb_width = VAR_5->width;
  VAR_6->fb_depth = VAR_5->depth;
  if (VAR_5->depth <= 1 || VAR_5->depth > 8)
   VAR_6->fb_cmsize = 0;
  else
   VAR_6->fb_cmsize = 1 << VAR_5->depth;
  VAR_6->fb_size = VAR_5->fb_size;
  break;
 case 128:
  return (VAR_0);
 default:
  return (FUNC_0(VAR_2, VAR_3, VAR_4));
 }

 return (0);
}
