
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vi_width; int vi_height; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
struct TYPE_7__ {int x; int y; int vx; int vy; } ;
struct TYPE_6__ {int r; int g; int b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_10)
{
 video_info_t VAR_11;
 int VAR_12;


 for (VAR_12 = 0; VAR_4[VAR_12] >= 0; ++VAR_12)
  if (FUNC_2(VAR_10, VAR_4[VAR_12], &VAR_11) == 0)
   break;
 if (VAR_4[VAR_12] < 0) {
  FUNC_0(VAR_2, "%s: no supported video modes\n", VAR_3);
  return (VAR_0);
 }
 VAR_8 = VAR_4[VAR_12];
 VAR_9 = VAR_11.vi_width;
 VAR_7 = VAR_11.vi_height;


 for (VAR_12 = 0; VAR_12 < 256; ++VAR_12)
  VAR_6[VAR_12].r = VAR_6[VAR_12].g = VAR_6[VAR_12].b = VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_5[VAR_12].x = FUNC_1() % VAR_9;
  VAR_5[VAR_12].y = FUNC_1() % VAR_7;
  VAR_5[VAR_12].vx = FUNC_1() % 5 - 2;
  VAR_5[VAR_12].vy = FUNC_1() % 5 - 2;
 }

 return (0);
}
