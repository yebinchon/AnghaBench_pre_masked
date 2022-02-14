
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_window {int clipcount; int clips; int flags; int chromakey; int height; int width; int y; int x; } ;
struct l_video_window {int clipcount; int clips; int flags; int chromakey; int height; int width; int y; int x; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct l_video_window *VAR_0, struct video_window *VAR_1)
{
 VAR_1->x = VAR_0->x;
 VAR_1->y = VAR_0->y;
 VAR_1->width = VAR_0->width;
 VAR_1->height = VAR_0->height;
 VAR_1->chromakey = VAR_0->chromakey;
 VAR_1->flags = VAR_0->flags;
 VAR_1->clips = FUNC_0(VAR_0->clips);
 VAR_1->clipcount = VAR_0->clipcount;
 return (0);
}
