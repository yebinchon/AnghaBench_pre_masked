
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mousedata {scalar_t__ md_iaspect; scalar_t__ md_baspect; } ;
struct TYPE_7__ {int xpixel; int ypixel; int font_size; int status; struct mousedata const* mouse_data; TYPE_2__* sc; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_6__ {TYPE_1__* adp; } ;
struct TYPE_5__ {int va_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct mousedata** VAR_2 ;
 struct mousedata** VAR_3 ;
 int FUNC_1 (struct mousedata**) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_5)
{


 const struct mousedata *VAR_6;
 const struct mousedata * const *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_16 = VAR_5->xpixel;
 VAR_17 = VAR_5->ypixel;
 if (VAR_5->sc->adp->va_flags & VAR_1)
  VAR_16 = VAR_16 * 9 / 8;


 VAR_8 = VAR_16 * 900 / VAR_17 / 16;
 if (VAR_8 < 99 || VAR_8 > 100)
  VAR_8 = VAR_16 * 300 / VAR_17 / 4 * VAR_4 / 100;
 if (VAR_5->font_size <= 8 &&
     (VAR_17 < 300 || !(VAR_5->status & VAR_0))) {
  VAR_7 = &VAR_3[0];
  VAR_12 = FUNC_1(VAR_3);
 } else {
  VAR_7 = &VAR_2[0];
  VAR_12 = FUNC_1(VAR_2);
 }
 if (VAR_5->status & VAR_0) {
  VAR_14 = 1024;
  VAR_15 = 256;
 } else {
  VAR_14 = 256;
  VAR_15 = 1024;
 }
 VAR_9 = 0;
 VAR_10 = 0x7fffffff;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_13 = (VAR_14 * FUNC_0(VAR_7[VAR_11]->md_baspect - VAR_8) +
       VAR_15 * FUNC_0(VAR_7[VAR_11]->md_iaspect - VAR_8)) / VAR_8;
  if (VAR_10 > VAR_13) {
   VAR_10 = VAR_13;
   VAR_9 = VAR_11;
  }
 }
 VAR_6 = VAR_7[VAR_9];
 VAR_5->mouse_data = VAR_6;

}
