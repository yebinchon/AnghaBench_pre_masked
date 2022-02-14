
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
typedef int byte ;
struct TYPE_8__ {int Type; int VXsize; int Ysize; int VYsize; int PixelBytes; int Bitmap; int Yorigin; int Xorigin; int Xsize; } ;
typedef TYPE_1__ VGLBitmap ;
struct TYPE_9__ {int va_line_width; int va_window_size; } ;



 TYPE_7__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int ,TYPE_1__*,int ,int,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int) ;

void
FUNC_12(VGLBitmap *VAR_4, u_long VAR_5)
{
  VGLBitmap VAR_6;
  int VAR_7, VAR_8, VAR_9, VAR_10;

  FUNC_0();
  if (VAR_4 == VAR_1) {
    FUNC_1();
    FUNC_12(&VAR_2, VAR_5);
  } else if (VAR_4->Type != 139)
    return;
  switch (VAR_4->Type) {
  case 139:
  case 130:
  case 129:
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
    VAR_6.Type = 139;
    VAR_6.Xsize = VAR_4->Xsize;
    VAR_6.VXsize = VAR_4->VXsize;
    VAR_6.Ysize = 1;
    VAR_6.VYsize = 1;
    VAR_6.Xorigin = 0;
    VAR_6.Yorigin = 0;
    VAR_6.Bitmap = FUNC_6(VAR_4->VXsize * VAR_4->PixelBytes);
    VAR_6.PixelBytes = VAR_4->PixelBytes;
    VAR_5 = FUNC_8(VAR_5);
    for (VAR_7 = 0; VAR_7 < VAR_4->VXsize; VAR_7++)
      FUNC_7(&VAR_5, VAR_6.Bitmap + VAR_7 * VAR_4->PixelBytes, VAR_4->PixelBytes);
    for (VAR_7 = 0; VAR_7 < VAR_4->VYsize; VAR_7++)
      FUNC_4(&VAR_6, 0, 0, VAR_4, 0, VAR_7, VAR_4->VXsize, -1);
    break;

  case 128:
    VAR_9 = FUNC_5(VAR_3);

    FUNC_11(0x3c6, 0xff);
    FUNC_11(0x3c4, 0x02); FUNC_11(0x3c5, 0x0f);
    FUNC_9(VAR_4->Bitmap, (byte)VAR_5, VAR_0.va_line_width*VAR_4->VYsize);
    FUNC_5(VAR_9);
    break;

  case 132:
  case 131:
    VAR_9 = FUNC_5(VAR_3);

    FUNC_11(0x3c4, 0x02); FUNC_11(0x3c5, 0x0f);
    FUNC_11(0x3ce, 0x05); FUNC_11(0x3cf, 0x02);
    FUNC_11(0x3ce, 0x01); FUNC_11(0x3cf, 0x00);
    FUNC_11(0x3ce, 0x08); FUNC_11(0x3cf, 0xff);
    for (VAR_10 = 0; VAR_10 < VAR_0.va_line_width*VAR_4->VYsize; ) {
      FUNC_3(VAR_10);
      VAR_8 = FUNC_10(VAR_4->VXsize*VAR_4->VYsize - VAR_10,
  VAR_0.va_window_size);
      FUNC_9(VAR_4->Bitmap, (byte)VAR_5, VAR_8);
      VAR_10 += VAR_8;
    }
    FUNC_11(0x3ce, 0x05); FUNC_11(0x3cf, 0x00);
    FUNC_5(VAR_9);
    break;
  }
  if (VAR_4 == VAR_1)
    FUNC_2();
}
