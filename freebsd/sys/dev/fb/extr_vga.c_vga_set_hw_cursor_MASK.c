
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vi_flags; int vi_width; } ;
struct TYPE_5__ {scalar_t__ va_crtc_addr; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_4, int VAR_5, int VAR_6)
{
    u_int16_t VAR_7;
    int VAR_8;

    if (!VAR_3)
 return VAR_1;

    if ((VAR_5 == -1) && (VAR_6 == -1)) {
 VAR_7 = -1;
    } else {
 if (VAR_4->va_info.vi_flags & VAR_2)
     return VAR_0;
 VAR_7 = VAR_6*VAR_4->va_info.vi_width + VAR_5;
    }

    VAR_8 = FUNC_1();
    FUNC_0(VAR_4->va_crtc_addr, 14);
    FUNC_0(VAR_4->va_crtc_addr + 1, VAR_7 >> 8);
    FUNC_0(VAR_4->va_crtc_addr, 15);
    FUNC_0(VAR_4->va_crtc_addr + 1, VAR_7 & 0x00ff);
    FUNC_2(VAR_8);

    return 0;
}
