
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int status; int font_size; TYPE_2__* sc; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_9__ {int fonts_loaded; int font_14; int font_16; int font_8; TYPE_1__* adp; } ;
struct TYPE_8__ {int va_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int,int,int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_4(scr_stat *VAR_5)
{


    if (!(VAR_5->status & VAR_3)) {
 if (!(VAR_5->status & VAR_4) && FUNC_0(VAR_5->sc->adp->va_flags)) {
     if (VAR_5->font_size < 14) {
  if (VAR_5->sc->fonts_loaded & VAR_2)
      FUNC_2(VAR_5, 0, 8, 8, VAR_5->sc->font_8, 0, 256);
     } else if (VAR_5->font_size >= 16) {
  if (VAR_5->sc->fonts_loaded & VAR_1)
      FUNC_2(VAR_5, 0, 16, 8, VAR_5->sc->font_16, 0, 256);
     } else {
  if (VAR_5->sc->fonts_loaded & VAR_0)
      FUNC_2(VAR_5, 0, 14, 8, VAR_5->sc->font_14, 0, 256);
     }







     FUNC_3(VAR_5, 0);
 }
 FUNC_1(VAR_5);
    }

}
