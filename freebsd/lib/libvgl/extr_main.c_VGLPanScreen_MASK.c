
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; } ;
typedef TYPE_1__ video_display_start_t ;
struct TYPE_6__ {scalar_t__ Xsize; scalar_t__ VXsize; scalar_t__ Ysize; scalar_t__ VYsize; scalar_t__ Type; int Xorigin; int Yorigin; } ;
typedef TYPE_2__ VGLBitmap ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;

int
FUNC_2(VGLBitmap *VAR_3, int VAR_4, int VAR_5)
{
  video_display_start_t VAR_6;

  if (VAR_4 < 0 || VAR_4 + VAR_3->Xsize > VAR_3->VXsize
      || VAR_5 < 0 || VAR_5 + VAR_3->Ysize > VAR_3->VYsize)
    return -1;
  if (VAR_3->Type == VAR_1)
    return 0;
  VAR_6.x = VAR_4;
  VAR_6.y = VAR_5;
  if (FUNC_1(0, VAR_0, &VAR_6))
    return -1;
  VAR_3->Xorigin = VAR_4;
  VAR_3->Yorigin = VAR_5;





  return 0;
}
