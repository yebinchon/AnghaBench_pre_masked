
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int PixelBytes; int VXsize; int VYsize; int * Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,int,int *) ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;

int
FUNC_5(VGLBitmap *VAR_1, int VAR_2, int VAR_3,
       VGLBitmap *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
  byte *VAR_9, *VAR_10;
  int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

  VAR_11 = 0;
  if (VAR_8 < 0) {
    VAR_8 = -VAR_8;
    VAR_11 = (VAR_4 == VAR_0 &&
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8));
    if (VAR_11)
      VAR_9 = FUNC_3(VAR_7*VAR_1->PixelBytes);
  }
  if (VAR_2>VAR_1->VXsize || VAR_3>VAR_1->VYsize
 || VAR_5>VAR_4->VXsize || VAR_6>VAR_4->VYsize)
    return -1;
  if (VAR_2 < 0) {
    VAR_7=VAR_7+VAR_2; VAR_5-=VAR_2; VAR_2=0;
  }
  if (VAR_3 < 0) {
    VAR_8=VAR_8+VAR_3; VAR_6-=VAR_3; VAR_3=0;
  }
  if (VAR_5 < 0) {
    VAR_7=VAR_7+VAR_5; VAR_2-=VAR_5; VAR_5=0;
  }
  if (VAR_6 < 0) {
    VAR_8=VAR_8+VAR_6; VAR_3-=VAR_6; VAR_6=0;
  }
  if (VAR_2+VAR_7 > VAR_1->VXsize)
     VAR_7=VAR_1->VXsize-VAR_2;
  if (VAR_3+VAR_8 > VAR_1->VYsize)
     VAR_8=VAR_1->VYsize-VAR_3;
  if (VAR_5+VAR_7 > VAR_4->VXsize)
     VAR_7=VAR_4->VXsize-VAR_5;
  if (VAR_6+VAR_8 > VAR_4->VYsize)
     VAR_8=VAR_4->VYsize-VAR_6;
  if (VAR_7 < 0 || VAR_8 < 0)
     return -1;
  VAR_14 = VAR_3 + VAR_8;
  VAR_15 = 0;
  VAR_16 = 1;
  if (VAR_1->Bitmap == VAR_4->Bitmap && VAR_3 < VAR_6) {
    VAR_14 = VAR_3 - 1;
    VAR_15 = VAR_8 - 1;
    VAR_16 = -1;
  }
  for (VAR_12 = VAR_3 + VAR_15, VAR_13 = VAR_6 + VAR_15; VAR_12 != VAR_14;
       VAR_12 += VAR_16, VAR_13 += VAR_16) {
    VAR_10 = VAR_1->Bitmap+(VAR_12*VAR_1->VXsize+VAR_2)*VAR_4->PixelBytes;
    if (VAR_11 && FUNC_1(VAR_5, VAR_13, VAR_7, 1)) {
      FUNC_4(VAR_10, VAR_9, VAR_7*VAR_1->PixelBytes);
      VAR_10 = VAR_9;
      FUNC_0(VAR_5, VAR_13, VAR_7, VAR_10);
    }
    FUNC_2(VAR_4, VAR_5, VAR_13, VAR_7, VAR_10);
  }
  return 0;
}
