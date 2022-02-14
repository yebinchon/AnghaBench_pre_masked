
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int Type; int* Bitmap; int PixelBytes; int VXsize; } ;
typedef TYPE_1__ VGLBitmap ;
struct TYPE_5__ {int va_line_width; int va_window_size; } ;



 TYPE_3__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 unsigned int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(VGLBitmap *VAR_4, int VAR_5, int VAR_6, int VAR_7, byte *VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
  int VAR_17;
  unsigned int VAR_18 = 0;
  byte *VAR_19;
  byte *VAR_20[4];

  switch (VAR_4->Type) {
  case 132:
  case 131:
    VAR_14 = (VAR_5 & 0x07);
    VAR_15 = (VAR_5 + VAR_7) & 0x07;
    VAR_9 = (VAR_7 + VAR_14) / 8;
    if (VAR_15)
 VAR_9++;
    VAR_20[0] = VAR_1;
    VAR_20[1] = VAR_20[0] + VAR_9;
    VAR_20[2] = VAR_20[1] + VAR_9;
    VAR_20[3] = VAR_20[2] + VAR_9;
    VAR_11 = 0;
    VAR_13 = 0;
    VAR_12 = 8 - VAR_14;
    while (VAR_11 < VAR_7) {
      VAR_18 = 0;
      while (VAR_11 < VAR_12 && VAR_11 < VAR_7)
 VAR_18 = (VAR_18<<1) | VAR_2[VAR_8[VAR_11++]&0x0f];
      VAR_20[0][VAR_13] = VAR_18;
      VAR_20[1][VAR_13] = VAR_18>>8;
      VAR_20[2][VAR_13] = VAR_18>>16;
      VAR_20[3][VAR_13] = VAR_18>>24;
      VAR_13++;
      VAR_12 += 8;
    }
    VAR_13--;
    if (VAR_15) {
      VAR_18 <<= (8 - VAR_15);
      VAR_20[0][VAR_13] = VAR_18;
      VAR_20[1][VAR_13] = VAR_18>>8;
      VAR_20[2][VAR_13] = VAR_18>>16;
      VAR_20[3][VAR_13] = VAR_18>>24;
    }
    FUNC_3(0x3ce, 0x01); FUNC_3(0x3cf, 0x00);
    FUNC_3(0x3ce, 0x08); FUNC_3(0x3cf, 0xff);
    for (VAR_10=0; VAR_10<4; VAR_10++) {
      FUNC_3(0x3c4, 0x02);
      FUNC_3(0x3c5, 0x01<<VAR_10);
      FUNC_3(0x3ce, 0x04);
      FUNC_3(0x3cf, VAR_10);
      VAR_11 = VAR_0.va_line_width*VAR_6 + VAR_5/8;
      if (VAR_4->Type == 132) {
 if (VAR_15)
   VAR_20[VAR_10][VAR_13] |= VAR_4->Bitmap[VAR_11+VAR_13] & VAR_3[VAR_15];
 if (VAR_14)
   VAR_20[VAR_10][0] |= VAR_4->Bitmap[VAR_11] & ~VAR_3[VAR_14];
 FUNC_1(&VAR_20[VAR_10][0], VAR_4->Bitmap + VAR_11, VAR_9);
      } else {
 if (VAR_15) {
   VAR_16 = FUNC_0(VAR_11 + VAR_13);
   VAR_20[VAR_10][VAR_13] |= VAR_4->Bitmap[VAR_16] & VAR_3[VAR_15];
 }
 VAR_16 = FUNC_0(VAR_11);
 if (VAR_14)
   VAR_20[VAR_10][0] |= VAR_4->Bitmap[VAR_16] & ~VAR_3[VAR_14];
 for (VAR_12 = VAR_9; ; ) {
   VAR_17 = FUNC_2(VAR_0.va_window_size - VAR_16, VAR_12);
   FUNC_1(&VAR_20[VAR_10][VAR_9 - VAR_12], VAR_4->Bitmap + VAR_16, VAR_17);
   VAR_11 += VAR_17;
   VAR_12 -= VAR_17;
   if (VAR_12 <= 0)
     break;
   VAR_16 = FUNC_0(VAR_11);
 }
      }
    }
    break;
  case 128:
    VAR_19 = VAR_4->Bitmap + VAR_0.va_line_width * VAR_6 + VAR_5/4;
    for (VAR_10=0; VAR_10<4; VAR_10++) {
      FUNC_3(0x3c4, 0x02);
      FUNC_3(0x3c5, 0x01 << ((VAR_5 + VAR_10)%4));
      for (VAR_13=0, VAR_11=VAR_10; VAR_11<VAR_7; VAR_13++, VAR_11+=4)
        VAR_19[VAR_13] = VAR_8[VAR_11];
      if ((VAR_5 + VAR_10)%4 == 3)
 ++VAR_19;
    }
    break;
  case 129:
  case 137:
  case 135:
  case 133:
    VAR_7 = VAR_7 * VAR_4->PixelBytes;
    VAR_11 = (VAR_4->VXsize * VAR_6 + VAR_5) * VAR_4->PixelBytes;
    while (VAR_7 > 0) {
      VAR_16 = FUNC_0(VAR_11);
      VAR_10 = FUNC_2(VAR_0.va_window_size - VAR_16, VAR_7);
      FUNC_1(VAR_8, VAR_4->Bitmap + VAR_16, VAR_10);
      VAR_8 += VAR_10;
      VAR_11 += VAR_10;
      VAR_7 -= VAR_10;
    }
    break;
  case 139:
  case 130:
  case 138:
  case 136:
  case 134:
    VAR_19 = VAR_4->Bitmap + (VAR_4->VXsize * VAR_6 + VAR_5) * VAR_4->PixelBytes;
    FUNC_1(VAR_8, VAR_19, VAR_7 * VAR_4->PixelBytes);
    break;
  default:
    ;
  }
}
