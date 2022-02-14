
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vi_flags; scalar_t__ vi_mem_model; int vi_width; int vi_depth; int vi_planes; int vi_buffer_size; int vi_buffer; int vi_window_gran; int vi_window_size; int vi_window; } ;
typedef TYPE_2__ video_info_t ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {int va_flags; int va_line_width; int va_info; TYPE_1__ va_disp_start; int va_buffer_size; int va_buffer; scalar_t__ va_window_orig; int va_window_gran; int va_window_size; int va_window; int va_crtc_addr; } ;
typedef TYPE_3__ video_adapter_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_2(video_adapter_t *VAR_8, video_info_t *VAR_9)
{
    VAR_8->va_flags &= ~VAR_2;
    VAR_8->va_flags |=
 (VAR_9->vi_flags & VAR_4) ? VAR_2 : 0;
    VAR_8->va_crtc_addr =
 (VAR_8->va_flags & VAR_2) ? VAR_0 : VAR_1;
    VAR_8->va_window = FUNC_0(VAR_9->vi_window);
    VAR_8->va_window_size = VAR_9->vi_window_size;
    VAR_8->va_window_gran = VAR_9->vi_window_gran;
    VAR_8->va_window_orig = 0;

    VAR_8->va_buffer = VAR_9->vi_buffer;
    VAR_8->va_buffer_size = VAR_9->vi_buffer_size;
    VAR_8->va_flags &= ~VAR_3;
    if (VAR_9->vi_flags & VAR_5)
 VAR_8->va_flags |= VAR_3;
    if (VAR_9->vi_mem_model == VAR_7) {
 VAR_8->va_line_width = VAR_9->vi_width/2;
    } else if (VAR_9->vi_flags & VAR_6) {
 switch (VAR_9->vi_depth/VAR_9->vi_planes) {
 case 1:
     VAR_8->va_line_width = VAR_9->vi_width/8;
     break;
 case 2:
     VAR_8->va_line_width = VAR_9->vi_width/4;
     break;
 case 4:
     VAR_8->va_line_width = VAR_9->vi_width/2;
     break;
 case 8:
 default:
     VAR_8->va_line_width = VAR_9->vi_width;
     break;
 }
    } else {
 VAR_8->va_line_width = VAR_9->vi_width;
    }
    VAR_8->va_disp_start.x = 0;
    VAR_8->va_disp_start.y = 0;
    FUNC_1(VAR_9, &VAR_8->va_info, sizeof(VAR_8->va_info));
}
