
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_13__ {int status; int kbd_mode; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_14__ {int config; scalar_t__ keyboard; scalar_t__ scrn_time_stamp; int flags; int ctimeout; TYPE_1__* cur_scp; scalar_t__ write_in_progress; scalar_t__ switch_in_progress; scalar_t__ blink_in_progress; int * kbd; scalar_t__ font_loading_in_progress; } ;
typedef TYPE_2__ sc_softc_t ;
typedef int caddr_t ;
struct TYPE_15__ {TYPE_2__* sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int,int ,void (*) (void*),TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 TYPE_8__* VAR_12 ;
 int FUNC_7 () ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (TYPE_2__*,int (*) (TYPE_2__*,scalar_t__)) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_17)
{
    static time_t VAR_18 = 0;
    sc_softc_t *VAR_19;
    scr_stat *VAR_20;
    int VAR_21, VAR_22;

    VAR_21 = (VAR_17 != ((void*)0));
    if (VAR_17 != ((void*)0))
 VAR_19 = (sc_softc_t *)VAR_17;
    else if (VAR_12 != ((void*)0))
 VAR_19 = VAR_12->sc;
    else
 return;


    VAR_20 = VAR_19->cur_scp;


    if (VAR_15 || VAR_19->font_loading_in_progress)
 goto done;

    if ((VAR_19->kbd == ((void*)0)) && (VAR_19->config & VAR_4)) {

 if (VAR_18 != VAR_16) {
     VAR_18 = VAR_16;
     VAR_19->keyboard = FUNC_6(VAR_19, -1);
     if (VAR_19->keyboard >= 0) {
  VAR_19->kbd = FUNC_4(VAR_19->keyboard);
  (void)FUNC_5(VAR_19->kbd, VAR_1,
     (caddr_t)&VAR_19->cur_scp->kbd_mode);
  FUNC_11(VAR_19->cur_scp, VAR_19->cur_scp->status,
     VAR_2);
     }
 }
    }


    if (VAR_8 || VAR_9 || VAR_14)
 FUNC_7();
    if (VAR_10) {
 if (VAR_16 > VAR_19->scrn_time_stamp + VAR_13)
     VAR_19->flags |= VAR_6;
 else
     VAR_19->flags &= ~VAR_6;
    } else {
 VAR_19->scrn_time_stamp = VAR_16;
 VAR_19->flags &= ~VAR_6;
 if (VAR_13 > 0)
     VAR_10 = VAR_7;
    }







    if (VAR_19->blink_in_progress || VAR_19->switch_in_progress
 || VAR_19->write_in_progress)
 goto done;


    VAR_20 = VAR_19->cur_scp;
    if (!FUNC_1(VAR_20) && !(VAR_19->flags & VAR_5))
 FUNC_8(VAR_20, VAR_7);
done:
    if (VAR_21) {




 if (FUNC_1(VAR_20) && !(VAR_19->flags & VAR_5))
     VAR_22 = 2;
 else
     VAR_22 = 30;
 FUNC_2(&VAR_19->ctimeout, VAR_3 / VAR_22, 0,
     FUNC_12, VAR_19, FUNC_0(1));
    }
}
