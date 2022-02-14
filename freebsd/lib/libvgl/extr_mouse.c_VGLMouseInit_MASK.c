
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int buttons; int y; int x; } ;
struct TYPE_8__ {int signal; } ;
struct TYPE_10__ {TYPE_2__ data; TYPE_1__ mode; } ;
struct mouse_info {TYPE_3__ u; int operation; } ;
struct TYPE_11__ {int VXsize; int VYsize; int* Bitmap; } ;
typedef TYPE_4__ VGLBitmap ;
struct TYPE_12__ {int vi_mem_model; scalar_t__ vi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,struct mouse_info*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;

int
FUNC_6(int VAR_14)
{
  struct mouse_info VAR_15;
  VGLBitmap *VAR_16;
  int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

  switch (VAR_7.vi_mem_model) {
  case 130:
  case 129:
    VAR_17 = 0x0f;
    VAR_18 = 0x0f;
    VAR_21 = 0x04;
    break;
  case 128:
    VAR_17 = 0x3f;
    VAR_18 = 0x3f;
    VAR_21 = 0x24;
    break;
  default:
    VAR_17 = 0xff;
    VAR_18 = VAR_0;
    VAR_21 = VAR_2;
    break;
  }
  if (VAR_7.vi_mode == VAR_5)
    VAR_18 = 0;
  if (FUNC_2("VGLMOUSEBORDERCOLOR") != ((void*)0))
    VAR_18 = FUNC_5(FUNC_2("VGLMOUSEBORDERCOLOR"), ((void*)0), 0);
  if (FUNC_2("VGLMOUSEINTERIORCOLOR") != ((void*)0))
    VAR_21 = FUNC_5(FUNC_2("VGLMOUSEINTERIORCOLOR"), ((void*)0), 0);
  VAR_16 = &VAR_10;
  for (VAR_20 = 0; VAR_20 < VAR_16->VXsize * VAR_16->VYsize; VAR_20++)
    VAR_16->Bitmap[VAR_20] = VAR_16->Bitmap[VAR_20] == VAR_0 ? VAR_18 :
                        VAR_16->Bitmap[VAR_20] == VAR_2 ? VAR_21 : 0;
  VAR_16 = &VAR_11;
  for (VAR_20 = 0; VAR_20 < VAR_16->VXsize * VAR_16->VYsize; VAR_20++)
    VAR_16->Bitmap[VAR_20] = VAR_16->Bitmap[VAR_20] == VAR_0 ? VAR_18 :
                        VAR_16->Bitmap[VAR_20] == VAR_2 ? VAR_21 : 0;
  FUNC_1();
  VAR_15.operation = VAR_4;
  VAR_15.u.mode.signal = VAR_6;
  if ((VAR_19 = FUNC_3(0, VAR_1, &VAR_15)))
    return VAR_19;
  FUNC_4(VAR_6, VAR_8);
  VAR_15.operation = VAR_3;
  FUNC_3(0, VAR_1, &VAR_15);
  VAR_12 = VAR_15.u.data.x;
  VAR_13 = VAR_15.u.data.y;
  VAR_9 = VAR_15.u.data.buttons;
  FUNC_0(VAR_14);
  return 0;
}
