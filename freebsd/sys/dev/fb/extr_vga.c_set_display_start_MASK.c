
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int vi_flags; int vi_depth; int vi_planes; int vi_cheight; } ;
struct TYPE_7__ {scalar_t__ va_type; int va_line_width; TYPE_2__ va_disp_start; scalar_t__ va_crtc_addr; TYPE_1__ va_info; } ;
typedef TYPE_3__ video_adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;

    if ((VAR_6->va_type != VAR_2) && (VAR_6->va_type != VAR_1))
 VAR_7 &= ~7;
    if (VAR_6->va_info.vi_flags & VAR_5) {
 VAR_12 = 8/(VAR_6->va_info.vi_depth/VAR_6->va_info.vi_planes);
 VAR_9 = VAR_8*VAR_6->va_line_width + VAR_7/VAR_12;
 VAR_11 = 0;
 VAR_10 = VAR_7%VAR_12;
    } else {
 if ((VAR_6->va_type == VAR_2) || (VAR_6->va_type == VAR_1)) {
     FUNC_1(VAR_3, 1);
     if (FUNC_0(VAR_4) & 1)
  VAR_12 = 9;
     else
  VAR_12 = 8;
 } else {
     VAR_12 = 8;
 }
 VAR_9 = VAR_8/VAR_6->va_info.vi_cheight*VAR_6->va_line_width + VAR_7/VAR_12;
 VAR_11 = VAR_8%VAR_6->va_info.vi_cheight;

 if (VAR_12 == 8)
     VAR_10 = VAR_7%VAR_12;
 else
     VAR_10 = (VAR_7 + 8)%VAR_12;
    }


    FUNC_1(VAR_6->va_crtc_addr, 0xc);
    FUNC_1(VAR_6->va_crtc_addr + 1, VAR_9 >> 8);
    FUNC_1(VAR_6->va_crtc_addr, 0xd);
    FUNC_1(VAR_6->va_crtc_addr + 1, VAR_9 & 0xff);


    if ((VAR_6->va_type == VAR_2) || (VAR_6->va_type == VAR_1)) {
 FUNC_0(VAR_6->va_crtc_addr + 6);
 FUNC_1(VAR_0, 0x13 | 0x20);
 FUNC_1(VAR_0, VAR_10);
 FUNC_0(VAR_6->va_crtc_addr + 6);
 FUNC_1(VAR_0, 0x20);
    }


    FUNC_1(VAR_6->va_crtc_addr, 8);
    FUNC_1(VAR_6->va_crtc_addr + 1, VAR_11);

    VAR_6->va_disp_start.x = VAR_7;
    VAR_6->va_disp_start.y = VAR_8;
    return 0;
}
