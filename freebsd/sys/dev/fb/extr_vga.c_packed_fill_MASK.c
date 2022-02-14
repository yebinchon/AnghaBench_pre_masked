
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vi_height; } ;
struct TYPE_6__ {int va_line_width; int va_window; int va_window_size; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(video_adapter_t *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3;
    int VAR_4;

    VAR_3 = 0;
    VAR_2 = VAR_0->va_line_width*VAR_0->va_info.vi_height;
    while (VAR_2 > 0) {
 VAR_4 = FUNC_1(VAR_2, VAR_0->va_window_size);
 FUNC_2(VAR_0, VAR_3);
 FUNC_0(VAR_1, VAR_0->va_window, VAR_4);
 VAR_2 -= VAR_4;
 VAR_3 += VAR_4;
    }
}
