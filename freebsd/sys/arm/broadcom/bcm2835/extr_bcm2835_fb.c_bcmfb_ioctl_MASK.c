
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_long ;
struct fbtype {int fb_depth; int fb_cmsize; int fb_size; int fb_width; int fb_height; int fb_type; } ;
struct bcmsc_softc {int depth; int fb_size; int width; int height; } ;
typedef scalar_t__ caddr_t ;



 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 struct bcmsc_softc *VAR_4;
 struct fbtype *VAR_5;

 VAR_4 = (struct bcmsc_softc *)VAR_1;

 switch (VAR_2) {
 case 128:
  VAR_5 = (struct fbtype *)VAR_3;
  VAR_5->fb_type = VAR_0;
  VAR_5->fb_height = VAR_4->height;
  VAR_5->fb_width = VAR_4->width;
  VAR_5->fb_depth = VAR_4->depth;
  if (VAR_4->depth <= 1 || VAR_4->depth > 8)
   VAR_5->fb_cmsize = 0;
  else
   VAR_5->fb_cmsize = 1 << VAR_4->depth;
  VAR_5->fb_size = VAR_4->fb_size;
  break;
 default:
  return (FUNC_0(VAR_1, VAR_2, VAR_3));
 }

 return (0);
}
