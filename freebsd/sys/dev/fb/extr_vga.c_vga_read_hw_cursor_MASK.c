
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vi_flags; int vi_width; } ;
struct TYPE_5__ {TYPE_1__ va_info; scalar_t__ va_crtc_addr; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_4, int *VAR_5, int *VAR_6)
{
    u_int16_t VAR_7;
    int VAR_8;

    if (!VAR_3)
 return VAR_1;

    if (VAR_4->va_info.vi_flags & VAR_2)
 return VAR_0;

    VAR_8 = FUNC_2();
    FUNC_1(VAR_4->va_crtc_addr, 14);
    VAR_7 = FUNC_0(VAR_4->va_crtc_addr + 1);
    FUNC_1(VAR_4->va_crtc_addr, 15);
    VAR_7 = (VAR_7 << 8) | FUNC_0(VAR_4->va_crtc_addr + 1);
    FUNC_3(VAR_8);

    *VAR_6 = VAR_7 / VAR_4->va_info.vi_width;
    *VAR_5 = VAR_7 % VAR_4->va_info.vi_width;

    return 0;
}
