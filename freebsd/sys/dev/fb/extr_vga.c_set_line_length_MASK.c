
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vi_mem_model; int vi_depth; int vi_planes; } ;
struct TYPE_5__ {scalar_t__ va_type; int va_line_width; scalar_t__ va_crtc_addr; TYPE_1__ va_info; int va_mode; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_4, int VAR_5)
{
    u_char *VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    if ((VAR_4->va_type != VAR_3) && (VAR_4->va_type != VAR_2))
 return VAR_1;
    VAR_6 = FUNC_0(VAR_4->va_mode);
    if (VAR_6 == ((void*)0))
 return VAR_0;

    switch (VAR_4->va_info.vi_mem_model) {
    case 129:
 VAR_7 = 16/(VAR_4->va_info.vi_depth/VAR_4->va_info.vi_planes);
 VAR_9 = FUNC_1(VAR_5, VAR_7)/2;
 VAR_8 = (FUNC_1(VAR_5, VAR_7)/2)*4;
 break;
    case 130:
 VAR_9 = (VAR_5 + 7)/8;
 VAR_8 = FUNC_3(VAR_5 + 7, 8);
 break;
    case 128:
 VAR_9 = (VAR_5 + 7)/8;
 VAR_8 = (VAR_5 + 7)/8;
 break;
    default:
 return VAR_1;
    }

    if (VAR_6[10 + 0x17] & 0x40)
 VAR_9 *= 2;
    FUNC_2(VAR_4->va_crtc_addr, 0x13);
    FUNC_2(VAR_4->va_crtc_addr + 1, VAR_9);
    VAR_4->va_line_width = VAR_8;

    return 0;
}
