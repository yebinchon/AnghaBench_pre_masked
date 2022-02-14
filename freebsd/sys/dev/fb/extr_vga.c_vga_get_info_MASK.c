
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vi_mode; int vi_buffer_size; int vi_window_size; int vi_planes; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_7__ {int va_flags; int va_initial_mode; int va_type; } ;
typedef TYPE_2__ video_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_8, int VAR_9, video_info_t *VAR_10)
{
    int VAR_11;

    if (!VAR_7)
 return VAR_1;

    VAR_9 = FUNC_1(VAR_8->va_type, VAR_8->va_flags & VAR_4, VAR_9);

    if (VAR_8->va_flags & VAR_5) {




 if (FUNC_0(VAR_9) == ((void*)0))
     return VAR_0;
    } else

    {





 if (VAR_9 != VAR_8->va_initial_mode)
     return VAR_0;
    }

    for (VAR_11 = 0; VAR_6[VAR_11].vi_mode != VAR_2; ++VAR_11) {
 if (VAR_6[VAR_11].vi_mode == VAR_3)
     continue;
 if (VAR_9 == VAR_6[VAR_11].vi_mode) {
     *VAR_10 = VAR_6[VAR_11];

     VAR_10->vi_buffer_size = VAR_10->vi_window_size*VAR_10->vi_planes;
     return 0;
 }
    }
    return VAR_0;
}
