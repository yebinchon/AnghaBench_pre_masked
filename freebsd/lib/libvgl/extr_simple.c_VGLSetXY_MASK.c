
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int byte ;
struct TYPE_6__ {int VXsize; int VYsize; int Type; int PixelBytes; int* Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;
struct TYPE_7__ {int va_line_width; int va_window_size; } ;



 TYPE_5__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int,int) ;

void
FUNC_7(VGLBitmap *VAR_3, int VAR_4, int VAR_5, u_long VAR_6)
{
  int VAR_7, VAR_8, VAR_9;

  FUNC_0();
  if (VAR_4>=0 && VAR_4<VAR_3->VXsize && VAR_5>=0 && VAR_5<VAR_3->VYsize) {
    if (VAR_3 == VAR_1) {
      VAR_9 = FUNC_1(VAR_4, VAR_5);
      FUNC_7(&VAR_2, VAR_4, VAR_5, VAR_6);
    } else if (VAR_3->Type != 139)
      return;
    else
      VAR_9 = 0;
    if (!VAR_9) {
      VAR_7 = (VAR_5 * VAR_3->VXsize + VAR_4) * VAR_3->PixelBytes;
      switch (VAR_3->Type) {
      case 129:
      case 137:
      case 133:
        VAR_7 = FUNC_3(VAR_7);

      case 139:
      case 130:
      case 138:
      case 136:
      case 134:
        VAR_6 = FUNC_4(VAR_6);
        switch (VAR_3->PixelBytes) {
        case 1:
          FUNC_5(&VAR_3->Bitmap[VAR_7], &VAR_6, 1);
          break;
        case 2:
          FUNC_5(&VAR_3->Bitmap[VAR_7], &VAR_6, 2);
          break;
        case 3:
          FUNC_5(&VAR_3->Bitmap[VAR_7], &VAR_6, 3);
          break;
        case 4:
          FUNC_5(&VAR_3->Bitmap[VAR_7], &VAR_6, 4);
          break;
        }
        break;
      case 135:
        VAR_8 = FUNC_3(VAR_7);
        VAR_6 = FUNC_4(VAR_6);
        switch (VAR_0.va_window_size - VAR_8) {
        case 1:
          FUNC_5(&VAR_3->Bitmap[VAR_8], &VAR_6, 1);
          VAR_8 = FUNC_3(VAR_7 + 1);
          FUNC_5(&VAR_3->Bitmap[VAR_8], (byte *)&VAR_6 + 1, 2);
          break;
        case 2:
          FUNC_5(&VAR_3->Bitmap[VAR_8], &VAR_6, 2);
          VAR_8 = FUNC_3(VAR_7 + 2);
          FUNC_5(&VAR_3->Bitmap[VAR_8], (byte *)&VAR_6 + 2, 1);
          break;
        default:
          FUNC_5(&VAR_3->Bitmap[VAR_8], &VAR_6, 3);
          break;
        }
        break;
      case 128:
        FUNC_6(0x3c4, 0x02);
        FUNC_6(0x3c5, 0x01 << (VAR_4&0x3));
 VAR_3->Bitmap[(unsigned)(VAR_0.va_line_width*VAR_5)+(VAR_4/4)] = ((byte)VAR_6);
 break;
      case 131:
 VAR_7 = FUNC_3(VAR_5*VAR_0.va_line_width + VAR_4/8);
 goto set_planar;
      case 132:
 VAR_7 = VAR_5*VAR_0.va_line_width + VAR_4/8;
set_planar:
        FUNC_6(0x3c4, 0x02); FUNC_6(0x3c5, 0x0f);
        FUNC_6(0x3ce, 0x00); FUNC_6(0x3cf, (byte)VAR_6 & 0x0f);
        FUNC_6(0x3ce, 0x01); FUNC_6(0x3cf, 0x0f);
        FUNC_6(0x3ce, 0x08); FUNC_6(0x3cf, 0x80 >> (VAR_4%8));
 VAR_3->Bitmap[VAR_7] |= (byte)VAR_6;
      }
    }
    if (VAR_3 == VAR_1)
      FUNC_2();
  }
}
