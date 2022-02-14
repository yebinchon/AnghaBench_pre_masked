
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
struct bcmsc_softc {int width; int height; int xmargin; int ymargin; int va; int font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_7, video_adapter_t *VAR_8, int VAR_9)
{
 struct bcmsc_softc *VAR_10;
 video_info_t *VAR_11;

 VAR_10 = (struct bcmsc_softc *)VAR_8;
 VAR_11 = &VAR_8->va_info;

 FUNC_0(VAR_8, "bcmfb", -1, VAR_7);

 VAR_10->font = VAR_6;
 VAR_11->vi_cheight = VAR_0;
 VAR_11->vi_cwidth = VAR_1;
 VAR_11->vi_width = VAR_10->width / VAR_11->vi_cwidth;
 VAR_11->vi_height = VAR_10->height / VAR_11->vi_cheight;




 if (VAR_11->vi_width > VAR_2)
  VAR_11->vi_width = VAR_2;
 if (VAR_11->vi_height > VAR_3)
  VAR_11->vi_height = VAR_3;

 VAR_10->xmargin = (VAR_10->width - (VAR_11->vi_width * VAR_11->vi_cwidth)) / 2;
 VAR_10->ymargin = (VAR_10->height - (VAR_11->vi_height * VAR_11->vi_cheight)) / 2;

 VAR_8->va_window = (vm_offset_t) VAR_5;
 VAR_8->va_flags |= VAR_4 ;

 FUNC_1(&VAR_10->va);

 return (0);
}
