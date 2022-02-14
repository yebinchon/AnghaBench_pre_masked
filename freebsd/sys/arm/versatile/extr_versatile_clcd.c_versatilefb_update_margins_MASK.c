
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vi_width; int vi_cwidth; int vi_height; int vi_cheight; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct video_adapter_softc {int xmargin; int width; int ymargin; int height; } ;



__attribute__((used)) static void
FUNC_0(video_adapter_t *VAR_0)
{
 struct video_adapter_softc *VAR_1;
 video_info_t *VAR_2;

 VAR_1 = (struct video_adapter_softc *)VAR_0;
 VAR_2 = &VAR_0->va_info;

 VAR_1->xmargin = (VAR_1->width - (VAR_2->vi_width * VAR_2->vi_cwidth)) / 2;
 VAR_1->ymargin = (VAR_1->height - (VAR_2->vi_height * VAR_2->vi_cheight))/2;
}
