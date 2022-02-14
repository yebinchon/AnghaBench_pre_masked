
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_5__ {int vi_cheight; int vi_cwidth; int vi_width; int vi_height; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_6__ {int va_flags; scalar_t__ va_window; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct video_adapter_softc {int width; int height; int xmargin; int ymargin; int va; int font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_6, video_adapter_t *VAR_7, int VAR_8)
{
 struct video_adapter_softc *VAR_9;
 video_info_t *VAR_10;

 VAR_9 = (struct video_adapter_softc *)VAR_7;
 VAR_10 = &VAR_7->va_info;

 FUNC_0(VAR_7, "versatilefb", -1, VAR_6);

 VAR_9->font = VAR_4;
 VAR_10->vi_cheight = VAR_2;
 VAR_10->vi_cwidth = 8;

 VAR_10->vi_width = VAR_9->width/8;
 VAR_10->vi_height = VAR_9->height/VAR_10->vi_cheight;




 if (VAR_10->vi_width > VAR_0)
  VAR_10->vi_width = VAR_0;
 if (VAR_10->vi_height > VAR_1)
  VAR_10->vi_height = VAR_1;

 VAR_9->xmargin = (VAR_9->width - (VAR_10->vi_width * VAR_10->vi_cwidth)) / 2;
 VAR_9->ymargin = (VAR_9->height - (VAR_10->vi_height * VAR_10->vi_cheight))/2;

 VAR_7->va_window = (vm_offset_t) VAR_5;
 VAR_7->va_flags |= VAR_3 ;

 FUNC_1(&VAR_9->va);

 return (0);
}
