
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int VXsize; int VYsize; int PixelBytes; int * Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;


 int * FUNC_0 (int) ;

int
FUNC_1(VGLBitmap *VAR_0)
{
  VAR_0->Bitmap = FUNC_0(VAR_0->VXsize*VAR_0->VYsize*VAR_0->PixelBytes);
  if (VAR_0->Bitmap == ((void*)0))
    return -1;
  return 0;
}
