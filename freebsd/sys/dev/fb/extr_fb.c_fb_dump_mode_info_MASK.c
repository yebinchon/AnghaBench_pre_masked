
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vi_mode; int vi_flags; int vi_width; int vi_height; int vi_depth; int vi_planes; int vi_cwidth; int vi_cheight; scalar_t__ vi_window; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_6__ {char* va_unit; int va_name; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int u_long ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(char *VAR_1, video_adapter_t *VAR_2, video_info_t *VAR_3,
    int VAR_4)
{
    if (VAR_4 <= 0)
 return;

    FUNC_0("%s%d: %s, mode:%d, flags:0x%x ",
    VAR_1, VAR_2->va_unit, VAR_2->va_name, VAR_3->vi_mode, VAR_3->vi_flags);
    if (VAR_3->vi_flags & VAR_0)
 FUNC_0("G %dx%dx%d, %d plane(s), font:%dx%d, ",
        VAR_3->vi_width, VAR_3->vi_height,
        VAR_3->vi_depth, VAR_3->vi_planes,
        VAR_3->vi_cwidth, VAR_3->vi_cheight);
    else
 FUNC_0("T %dx%d, font:%dx%d, ",
        VAR_3->vi_width, VAR_3->vi_height,
        VAR_3->vi_cwidth, VAR_3->vi_cheight);
    FUNC_0("win:0x%lx\n", (u_long)VAR_3->vi_window);
}
