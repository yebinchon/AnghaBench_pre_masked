
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int VGLBitmap ;
struct TYPE_2__ {int Width; } ;


 int FUNC_0 (int *,int,int,char,int ,int ,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*) ;

void
FUNC_2(VGLBitmap *VAR_1, int VAR_2, int VAR_3, char *VAR_4,
  u_long VAR_5, u_long VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9;

  for (VAR_9=0; VAR_9<FUNC_1(VAR_4); VAR_9++) {
    switch (VAR_8) {
      case 0:
        FUNC_0(VAR_1, VAR_2+(VAR_9*VAR_0->Width), VAR_3,
                         VAR_4[VAR_9], VAR_5, VAR_6, VAR_7, VAR_8);
 break;
      case 1:
        FUNC_0(VAR_1, VAR_2, VAR_3-(VAR_9*VAR_0->Width),
           VAR_4[VAR_9], VAR_5, VAR_6, VAR_7, VAR_8);
 break;
      case 2:
        FUNC_0(VAR_1, VAR_2-(VAR_9*VAR_0->Width), VAR_3,
           VAR_4[VAR_9], VAR_5, VAR_6, VAR_7, VAR_8);
 break;
      case 3:
        FUNC_0(VAR_1, VAR_2, VAR_3+(VAR_9*VAR_0->Width),
           VAR_4[VAR_9], VAR_5, VAR_6, VAR_7, VAR_8);
 break;
      case 4:
        FUNC_0(VAR_1, VAR_2+(VAR_9*VAR_0->Width),
                         VAR_3-(VAR_9*VAR_0->Width),
           VAR_4[VAR_9], VAR_5, VAR_6, VAR_7, VAR_8);
 break;
    }
  }
}
