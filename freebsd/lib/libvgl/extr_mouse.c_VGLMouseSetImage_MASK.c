
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int VYsize; int VXsize; } ;
typedef TYPE_1__ VGLBitmap ;
struct TYPE_12__ {struct TYPE_12__* Bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(VGLBitmap *VAR_4, VGLBitmap *VAR_5)
{
  int VAR_6;

  VAR_6 = FUNC_3(VAR_3);

  VAR_1 = VAR_4;

  if (VAR_2 != ((void*)0)) {
    FUNC_4(VAR_2->Bitmap);
    FUNC_4(VAR_2);
  }
  VAR_2 = FUNC_1(VAR_0, VAR_5->VXsize, VAR_5->VYsize, 0);
  FUNC_0(VAR_2);
  FUNC_2(VAR_5, VAR_2);

  FUNC_3(VAR_6);
}
