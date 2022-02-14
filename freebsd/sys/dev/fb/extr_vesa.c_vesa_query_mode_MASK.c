
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vi_mode; scalar_t__ vi_width; scalar_t__ vi_height; scalar_t__ vi_cwidth; scalar_t__ vi_cheight; scalar_t__ vi_depth; scalar_t__ vi_planes; scalar_t__ vi_flags; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
struct TYPE_7__ {scalar_t__ (* query_mode ) (int *,TYPE_1__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_5, video_info_t *VAR_6)
{
 int VAR_7;

 if ((*VAR_2->query_mode)(VAR_5, VAR_6) == 0)
  return (0);
 if (VAR_5 != VAR_3)
  return (VAR_0);

 for (VAR_7 = 0; VAR_4[VAR_7].vi_mode != VAR_1; ++VAR_7) {
  if ((VAR_6->vi_width != 0)
      && (VAR_6->vi_width != VAR_4[VAR_7].vi_width))
   continue;
  if ((VAR_6->vi_height != 0)
      && (VAR_6->vi_height != VAR_4[VAR_7].vi_height))
   continue;
  if ((VAR_6->vi_cwidth != 0)
      && (VAR_6->vi_cwidth != VAR_4[VAR_7].vi_cwidth))
   continue;
  if ((VAR_6->vi_cheight != 0)
      && (VAR_6->vi_cheight != VAR_4[VAR_7].vi_cheight))
   continue;
  if ((VAR_6->vi_depth != 0)
      && (VAR_6->vi_depth != VAR_4[VAR_7].vi_depth))
   continue;
  if ((VAR_6->vi_planes != 0)
      && (VAR_6->vi_planes != VAR_4[VAR_7].vi_planes))
   continue;

  if ((VAR_6->vi_flags != 0)
      && (VAR_6->vi_flags != VAR_4[VAR_7].vi_flags))
   continue;
  *VAR_6 = VAR_4[VAR_7];
  return (0);
 }
 return (VAR_0);
}
