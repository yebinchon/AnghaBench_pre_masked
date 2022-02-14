
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int Type; int Xsize; int Ysize; int VXsize; int VYsize; int PixelBytes; int * Bitmap; scalar_t__ Yorigin; scalar_t__ Xorigin; } ;
typedef TYPE_1__ VGLBitmap ;
struct TYPE_5__ {int PixelBytes; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

VGLBitmap
*FUNC_1(int VAR_2, int VAR_3, int VAR_4, byte *VAR_5)
{
  VGLBitmap *VAR_6;

  if (VAR_2 != VAR_0)
    return ((void*)0);
  if (VAR_3 < 0 || VAR_4 < 0)
    return ((void*)0);
  VAR_6 = (VGLBitmap *)FUNC_0(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0))
    return ((void*)0);
  VAR_6->Type = VAR_2;
  VAR_6->Xsize = VAR_3;
  VAR_6->Ysize = VAR_4;
  VAR_6->VXsize = VAR_3;
  VAR_6->VYsize = VAR_4;
  VAR_6->Xorigin = 0;
  VAR_6->Yorigin = 0;
  VAR_6->Bitmap = VAR_5;
  VAR_6->PixelBytes = VAR_1->PixelBytes;
  return VAR_6;
}
