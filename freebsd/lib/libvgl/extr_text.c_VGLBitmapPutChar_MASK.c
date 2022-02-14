
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int byte ;
typedef int VGLBitmap ;
struct TYPE_2__ {int Width; int Height; int* BitmapArray; } ;


 int FUNC_0 (int *,int,int,int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(VGLBitmap *VAR_1, int VAR_2, int VAR_3, byte VAR_4,
   u_long VAR_5, u_long VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

  VAR_11 = (VAR_0->Width + 7) / 8;
  VAR_10 = VAR_11 * VAR_0->Height;
  VAR_14 = VAR_0->Width - 1;
  for(VAR_12 = 0; VAR_12 < VAR_0->Height; VAR_12++) {
    for(VAR_13 = 0; VAR_13 < VAR_0->Width; VAR_13++) {
      VAR_9 = VAR_13 + (-VAR_0->Width & 7);
      if (VAR_0->BitmapArray[(VAR_4*VAR_10)+(VAR_12*VAR_11)+(VAR_9/8)]&(1<<(VAR_9%8)))
        switch (VAR_8) {
          case 0:
            FUNC_0(VAR_1, (VAR_2+VAR_14-VAR_13), (VAR_3+VAR_12), VAR_5);
     break;
          case 1:
            FUNC_0(VAR_1, (VAR_2+VAR_12), (VAR_3-VAR_14+VAR_13), VAR_5);
     break;
          case 2:
            FUNC_0(VAR_1, (VAR_2-VAR_14+VAR_13), (VAR_3-VAR_12), VAR_5);
     break;
          case 3:
            FUNC_0(VAR_1, (VAR_2-VAR_12), (VAR_3+VAR_14-VAR_13), VAR_5);
     break;
          case 4:
            FUNC_0(VAR_1, (VAR_2+VAR_12+VAR_14-VAR_13), (VAR_3+VAR_12+VAR_13), VAR_5);
     break;
        }
      else if (VAR_7)
        switch (VAR_8) {
          case 0:
            FUNC_0(VAR_1, (VAR_2+VAR_14-VAR_13), (VAR_3+VAR_12), VAR_6);
     break;
          case 1:
            FUNC_0(VAR_1, (VAR_2+VAR_12), (VAR_3-VAR_14+VAR_13), VAR_6);
     break;
          case 2:
            FUNC_0(VAR_1, (VAR_2-VAR_14+VAR_13), (VAR_3-VAR_12), VAR_6);
     break;
          case 3:
            FUNC_0(VAR_1, (VAR_2-VAR_12), (VAR_3+VAR_14-VAR_13), VAR_6);
     break;
          case 4:
            FUNC_0(VAR_1, (VAR_2+VAR_12+VAR_14-VAR_13), (VAR_3+VAR_12+VAR_13), VAR_6);
     break;
        }
    }
  }
}
