
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int bytesperline; int depth; int width; int height; int base; } ;
struct l_video_buffer {int bytesperline; int depth; int width; int height; int base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct video_buffer *VAR_0, struct l_video_buffer *VAR_1)
{
 VAR_1->base = FUNC_0(VAR_0->base);
 VAR_1->height = VAR_0->height;
 VAR_1->width = VAR_0->width;
 VAR_1->depth = VAR_0->depth;
 VAR_1->bytesperline = VAR_0->bytesperline;
 return (0);
}
