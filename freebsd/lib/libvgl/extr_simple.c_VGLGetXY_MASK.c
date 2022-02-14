
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int VXsize; int VYsize; scalar_t__ Type; int PixelBytes; int * Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int *,int) ;

u_long
FUNC_3(VGLBitmap *VAR_3, int VAR_4, int VAR_5)
{
  u_long VAR_6;
  int VAR_7;

  FUNC_0();
  if (VAR_4<0 || VAR_4>=VAR_3->VXsize || VAR_5<0 || VAR_5>=VAR_3->VYsize)
    return 0;
  if (VAR_3 == VAR_1)
    VAR_3 = &VAR_2;
  else if (VAR_3->Type != VAR_0)
    return 0;
  VAR_7 = (VAR_5 * VAR_3->VXsize + VAR_4) * VAR_3->PixelBytes;
  switch (VAR_3->PixelBytes) {
  case 1:
    FUNC_2(&VAR_6, &VAR_3->Bitmap[VAR_7], 1);
    return FUNC_1(VAR_6) & 0xff;
  case 2:
    FUNC_2(&VAR_6, &VAR_3->Bitmap[VAR_7], 2);
    return FUNC_1(VAR_6) & 0xffff;
  case 3:
    FUNC_2(&VAR_6, &VAR_3->Bitmap[VAR_7], 3);
    return FUNC_1(VAR_6) & 0xffffff;
  case 4:
    FUNC_2(&VAR_6, &VAR_3->Bitmap[VAR_7], 4);
    return FUNC_1(VAR_6);
  }
  return 0;
}
