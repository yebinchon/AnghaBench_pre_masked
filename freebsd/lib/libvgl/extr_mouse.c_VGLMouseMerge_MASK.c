
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int PixelBytes; } ;
struct TYPE_5__ {int VXsize; scalar_t__* Bitmap; } ;
struct TYPE_4__ {int * Bitmap; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(int VAR_5, int VAR_6, int VAR_7, byte *VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_12 = VAR_5;
  if (VAR_12 < VAR_3)
    VAR_12 = VAR_3;
  VAR_11 = VAR_5 + VAR_7;
  if (VAR_11 > VAR_3 + VAR_1->VXsize)
    VAR_11 = VAR_3 + VAR_1->VXsize;
  for (VAR_10 = VAR_12; VAR_10 < VAR_11; VAR_10++) {
    VAR_9 = (VAR_6 - VAR_4) * VAR_1->VXsize + VAR_10 - VAR_3;
    if (VAR_1->Bitmap[VAR_9])
      FUNC_0(&VAR_2->Bitmap[VAR_9 * VAR_0->PixelBytes],
            &VAR_8[(VAR_10 - VAR_5) * VAR_0->PixelBytes], VAR_0->PixelBytes);
  }
}
