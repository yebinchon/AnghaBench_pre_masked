
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int vi_width; int vi_height; } ;
struct TYPE_12__ {TYPE_2__ va_info; } ;
typedef TYPE_3__ video_adapter_t ;
typedef int u_int16_t ;
struct TYPE_13__ {int xsize; int ysize; int vtb; TYPE_1__* sc; } ;
typedef TYPE_4__ scr_stat ;
struct TYPE_10__ {TYPE_3__* adp; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int,int ,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int *,int) ;

__attribute__((used)) static void
FUNC_7(scr_stat *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 video_adapter_t *VAR_8;

 VAR_8 = VAR_0->sc->adp;





 if (VAR_1 + VAR_2 > VAR_0->xsize*VAR_0->ysize) {





  VAR_2 = (VAR_1 + VAR_2) -
      (VAR_8->va_info.vi_width * VAR_8->va_info.vi_height);





  VAR_7 = (VAR_2 / VAR_8->va_info.vi_width) + 1;


  FUNC_4(VAR_8, VAR_7, 0, VAR_7);





  FUNC_6(VAR_8, VAR_1,
      (u_int16_t *)FUNC_2(&VAR_0->vtb, VAR_1), VAR_2);
 }





 else {






  if (VAR_3)
   for (VAR_6 = VAR_2; VAR_6-- > 0; ++VAR_1) {
    VAR_4 = FUNC_1(&VAR_0->vtb, VAR_1);
    VAR_5 = FUNC_0(&VAR_0->vtb, VAR_1) >> 8;
    FUNC_5(VAR_8, VAR_1, VAR_4,
        (VAR_5 >> 4) | ((VAR_5 & 0xf) << 4));
   }
  else {
   FUNC_6(VAR_8, VAR_1,
       (u_int16_t *)FUNC_2(&VAR_0->vtb, VAR_1),
       VAR_2);
  }
 }
}
