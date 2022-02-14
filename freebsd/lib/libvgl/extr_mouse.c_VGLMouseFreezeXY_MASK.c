
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VXsize; int VYsize; scalar_t__* Bitmap; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_1(int VAR_5, int VAR_6)
{
  FUNC_0();
  if (VAR_1 != VAR_4)
    return 0;
  if (VAR_5 >= VAR_2 && VAR_5 < VAR_2 + VAR_0->VXsize &&
      VAR_6 >= VAR_3 && VAR_6 < VAR_3 + VAR_0->VYsize &&
      VAR_0->Bitmap[(VAR_6-VAR_3)*VAR_0->VXsize+
                              (VAR_5-VAR_2)])
    return 1;
  return 0;
}
