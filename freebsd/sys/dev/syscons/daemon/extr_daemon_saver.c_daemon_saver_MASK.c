
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int vi_flags; } ;
struct TYPE_15__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_16__ {int xsize; int ysize; int scr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_17__ {int * scr_map; TYPE_3__* cur_scp; } ;
typedef TYPE_4__ sc_softc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int,int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_4__*,int,int,int,int ,int) ;
 int FUNC_3 (TYPE_4__*,int,int,int,int,int,int,int) ;
 int FUNC_4 (TYPE_4__*,int,int,int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_9(video_adapter_t *VAR_9, int VAR_10)
{
 static int VAR_11 = 10, VAR_12 = 10;
 static int VAR_13 = -1, VAR_14 = -1;
 static int VAR_15 = 0, VAR_16 = 0;
 static int VAR_17 = 1, VAR_18 = 1;
 static int VAR_19 = 0;
 static int VAR_20, VAR_21, VAR_22;
 static int VAR_23, VAR_24, VAR_25;
 sc_softc_t *VAR_26;
 scr_stat *VAR_27;
 int VAR_28, VAR_29;

 VAR_26 = FUNC_5(VAR_9, ((void*)0));
 if (VAR_26 == ((void*)0))
  return VAR_3;
 VAR_27 = VAR_26->cur_scp;

 if (VAR_10) {
  if (VAR_9->va_info.vi_flags & VAR_5)
   return VAR_3;
  if (VAR_6 == 0) {

   FUNC_7(&VAR_27->scr, VAR_26->scr_map[0x20],
         FUNC_0(VAR_4 | VAR_0));
   FUNC_8(VAR_9, -1, -1);
   FUNC_6(VAR_27, 0);
   VAR_23 = VAR_24 = VAR_25 = 0;
  }
  if (VAR_6++ < 2)
   return 0;
  VAR_6 = 1;

   FUNC_1(VAR_26, VAR_15, VAR_16, VAR_17, VAR_20, VAR_21, VAR_23, VAR_24);
  FUNC_2(VAR_26, VAR_11, VAR_12, VAR_22, VAR_7, VAR_25);

  if (++VAR_19) {






   if (VAR_27->xsize <= VAR_2) {






    VAR_28 = VAR_27->xsize - VAR_2 - 10;
    VAR_29 = 10;
   } else {
    VAR_28 = 0;
    VAR_29 = VAR_27->xsize - VAR_2;
   }
   if (VAR_15 <= VAR_28) {
    VAR_15 = VAR_28;
    VAR_17 = 1;
   } else if (VAR_15 >= VAR_29) {
    VAR_15 = VAR_29;
    VAR_17 = -1;
   }

   if (VAR_27->ysize <= VAR_1) {
    VAR_28 = VAR_27->ysize - VAR_1 - 10;
    VAR_29 = 10;
   } else {
    VAR_28 = 0;
    VAR_29 = VAR_27->ysize - VAR_1;
   }
   if (VAR_16 <= VAR_28) {
    VAR_16 = VAR_28;
    VAR_18 = 1;
   } else if (VAR_16 >= VAR_29) {
    VAR_16 = VAR_29;
    VAR_18 = -1;
   }

   VAR_19 = -1;
   VAR_15 += VAR_17; VAR_16 += VAR_18;


   VAR_20 = 0;
   VAR_23 = VAR_2;
   if (VAR_15 + VAR_23 <= 0)
    VAR_23 = 0;
   else if (VAR_15 < 0)
    VAR_20 = -VAR_15;
   if (VAR_15 >= VAR_27->xsize)
    VAR_23 = 0;
   else if (VAR_15 + VAR_23 > VAR_27->xsize)
    VAR_23 = VAR_27->xsize - VAR_15;
   VAR_21 = 0;
   VAR_24 = VAR_1;
   if (VAR_16 + VAR_24 <= 0)
    VAR_24 = 0;
   else if (VAR_16 < 0)
    VAR_21 = -VAR_16;
   if (VAR_16 >= VAR_27->ysize)
    VAR_24 = 0;
   else if (VAR_16 + VAR_24 > VAR_27->ysize)
    VAR_24 = VAR_27->ysize - VAR_16;
  }

  if (VAR_27->xsize <= VAR_8) {
   VAR_28 = VAR_27->xsize - VAR_8 - 10;
   VAR_29 = 10;
  } else {
   VAR_28 = 0;
   VAR_29 = VAR_27->xsize - VAR_8;
  }
  if (VAR_11 <= VAR_28) {
   VAR_11 = VAR_28;
   VAR_13 = 1;
  } else if (VAR_11 >= VAR_29) {
   VAR_11 = VAR_29;
   VAR_13 = -1;
  }
  if (VAR_12 <= 0) {
   VAR_12 = 0;
   VAR_14 = 1;
  } else if (VAR_12 >= VAR_27->ysize - 1) {
   VAR_12 = VAR_27->ysize - 1;
   VAR_14 = -1;
  }
  VAR_11 += VAR_13; VAR_12 += VAR_14;

  VAR_22 = 0;
  VAR_25 = VAR_8;
  if (VAR_11 + VAR_25 <= 0)
   VAR_25 = 0;
  else if (VAR_11 < 0)
   VAR_22 = -VAR_11;
  if (VAR_11 >= VAR_27->xsize)
   VAR_25 = 0;
  else if (VAR_11 + VAR_25 > VAR_27->xsize)
   VAR_25 = VAR_27->xsize - VAR_11;

   FUNC_3(VAR_26, VAR_15, VAR_16, VAR_17, VAR_20, VAR_21, VAR_23, VAR_24);
  FUNC_4(VAR_26, VAR_11, VAR_12, VAR_22, VAR_7, VAR_25);
 } else
  VAR_6 = 0;

 return 0;
}
