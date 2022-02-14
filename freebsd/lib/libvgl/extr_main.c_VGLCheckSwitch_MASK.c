
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int byte ;
struct TYPE_9__ {int va_window_size; } ;
struct TYPE_8__ {int vi_mem_model; int vi_depth; int vi_planes; int vi_height; int vi_width; int vi_pixel_size; } ;
struct TYPE_7__ {int VYsize; int Ysize; int VXsize; int Xsize; void* Type; int * Bitmap; int Yorigin; int Xorigin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*,int ,int ,int ,int ) ;
 int * VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_1 () ;
 int * VAR_17 ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_2 () ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;




 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int,int,int,int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 () ;

void
FUNC_13()
{
  if (VAR_11) {
    FUNC_1();
    FUNC_8(0);
  }
  while (VAR_22) {
    VAR_22 = 0;
    if (VAR_21) {
      if (VAR_19.vi_mem_model != 131)
        FUNC_9(0, VAR_1, 0);
      FUNC_9(0, VAR_2, VAR_3);
      FUNC_9(0, VAR_18, 0);
      VAR_15 = 0;
      VAR_17 = (byte*)FUNC_10(0, VAR_12.va_window_size, VAR_9|VAR_10,
      VAR_6 | VAR_7, 0, 0);


      VAR_16->Type = VAR_32;
      switch (VAR_19.vi_mem_model) {
      case 129:
 if (VAR_19.vi_depth == 4 && VAR_19.vi_planes == 4) {
   if (VAR_14/VAR_19.vi_planes > VAR_12.va_window_size)
     VAR_16->Type = VAR_31;
   else
     VAR_16->Type = VAR_30;
 } else {

 }
        break;
      case 130:
 if (VAR_19.vi_depth == 8) {
   if (VAR_14/VAR_19.vi_planes > VAR_12.va_window_size)
     VAR_16->Type = VAR_33;
   else
     VAR_16->Type = VAR_32;
 }
        break;
      case 128:
 VAR_16->Type = VAR_34;
 break;
      case 131:
 switch (VAR_19.vi_pixel_size) {
   case 2:
     if (VAR_14/VAR_19.vi_planes > VAR_12.va_window_size)
       VAR_16->Type = VAR_25;
     else
       VAR_16->Type = VAR_24;
     break;
   case 3:
     if (VAR_14/VAR_19.vi_planes > VAR_12.va_window_size)
       VAR_16->Type = VAR_27;
     else
       VAR_16->Type = VAR_26;
     break;
   case 4:
     if (VAR_14/VAR_19.vi_planes > VAR_12.va_window_size)
       VAR_16->Type = VAR_29;
     else
       VAR_16->Type = VAR_28;
     break;
   default:

          break;
        }
      default:

        break;
      }

      VAR_16->Bitmap = VAR_17;
      VAR_16->Xsize = VAR_19.vi_width;
      VAR_16->Ysize = VAR_19.vi_height;
      FUNC_7(VAR_16, VAR_16->VXsize, VAR_16->VYsize);
      FUNC_4();
      FUNC_5();
      FUNC_2();
      FUNC_3(VAR_16, VAR_16->Xorigin, VAR_16->Yorigin);
      FUNC_0(&VAR_23, 0, 0, VAR_16, 0, 0,
                    VAR_16->VXsize, VAR_16->VYsize);
      FUNC_6();
      FUNC_9(0, VAR_36, VAR_35);
    }
    else {
      VAR_17 = VAR_5;
      FUNC_11(VAR_16->Bitmap, VAR_12.va_window_size);
      FUNC_9(0, VAR_20, 0);
      FUNC_9(0, VAR_2, VAR_4);
      if (VAR_19.vi_mem_model != 131)
        FUNC_9(0, VAR_0, 0);
      FUNC_9(0, VAR_36, VAR_37);
      VAR_16->Bitmap = VAR_13;
      VAR_16->Type = VAR_8;
      VAR_16->Xsize = VAR_16->VXsize;
      VAR_16->Ysize = VAR_16->VYsize;
      while (!VAR_21) FUNC_12();
    }
  }
}
