
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vi_width; scalar_t__ vi_height; scalar_t__ vi_cwidth; scalar_t__ vi_cheight; scalar_t__ vi_depth; scalar_t__ vi_planes; scalar_t__ vi_flags; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
struct TYPE_6__ {scalar_t__ vi_mode; scalar_t__ vi_width; scalar_t__ vi_height; scalar_t__ vi_cwidth; scalar_t__ vi_cheight; scalar_t__ vi_depth; scalar_t__ vi_planes; scalar_t__ vi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_6, video_info_t *VAR_7)
{
    int VAR_8;

    if (!VAR_5)
 return VAR_1;

    for (VAR_8 = 0; VAR_4[VAR_8].vi_mode != VAR_2; ++VAR_8) {
 if (VAR_4[VAR_8].vi_mode == VAR_3)
     continue;

 if ((VAR_7->vi_width != 0)
     && (VAR_7->vi_width != VAR_4[VAR_8].vi_width))
  continue;
 if ((VAR_7->vi_height != 0)
     && (VAR_7->vi_height != VAR_4[VAR_8].vi_height))
  continue;
 if ((VAR_7->vi_cwidth != 0)
     && (VAR_7->vi_cwidth != VAR_4[VAR_8].vi_cwidth))
  continue;
 if ((VAR_7->vi_cheight != 0)
     && (VAR_7->vi_cheight != VAR_4[VAR_8].vi_cheight))
  continue;
 if ((VAR_7->vi_depth != 0)
     && (VAR_7->vi_depth != VAR_4[VAR_8].vi_depth))
  continue;
 if ((VAR_7->vi_planes != 0)
     && (VAR_7->vi_planes != VAR_4[VAR_8].vi_planes))
  continue;

 if ((VAR_7->vi_flags != 0)
     && (VAR_7->vi_flags != VAR_4[VAR_8].vi_flags))
  continue;


 if (FUNC_0(VAR_6, VAR_4[VAR_8].vi_mode, VAR_7))
  continue;
 return 0;
    }
    return VAR_0;
}
