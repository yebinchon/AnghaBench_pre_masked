
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int VXsize; int VYsize; int PixelBytes; int* Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;

void
FUNC_2(VGLBitmap *VAR_0, VGLBitmap *VAR_1)
{
  u_long VAR_2;
  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_0->VXsize * VAR_0->VYsize;
  VAR_7 = VAR_0->PixelBytes;
  if (VAR_7 <= 0)
    VAR_7 = 1;
  VAR_5 = VAR_1->PixelBytes;
  if (VAR_5 == VAR_7) {
    FUNC_1(VAR_0->Bitmap, VAR_1->Bitmap, VAR_6 * VAR_5);
    return;
  }
  if (VAR_7 != 1)
    return;
  for (VAR_8 = VAR_3 = 0; VAR_8 < VAR_6; VAR_8++) {
    VAR_2 = FUNC_0(VAR_0->Bitmap[VAR_8]);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_2 >>= 8)
        VAR_1->Bitmap[VAR_3++] = VAR_2;
  }
}
