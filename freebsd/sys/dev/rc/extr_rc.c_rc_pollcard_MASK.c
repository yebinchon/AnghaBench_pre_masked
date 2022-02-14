
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ c_cc; } ;
struct tty {int t_state; int t_iflag; int t_rawcc; scalar_t__* t_cc; int t_lflag; TYPE_1__ t_rawq; } ;
struct rc_softc {scalar_t__ sc_scheduled_event; int sc_dev; struct rc_chans* sc_channels; } ;
struct rc_chans {int rc_flags; int rc_msvr; int* rc_iptr; int* rc_bufend; int* rc_ibuf; int* rc_hiwat; struct tty* rc_tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 scalar_t__ FUNC_0 (int*,int,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct rc_chans*,char*) ;
 int* VAR_27 ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct rc_softc*,int ,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*,int) ;
 int FUNC_10 (struct tty*,int) ;
 int FUNC_11 (struct tty*) ;

void
FUNC_12(void *VAR_30)
{
 struct rc_softc *VAR_31;
 struct rc_chans *VAR_32;
 struct tty *VAR_33;
 u_char *VAR_34, *VAR_35;
 int VAR_36, VAR_37;

 VAR_31 = (struct rc_softc *)VAR_30;
 if (VAR_31->sc_scheduled_event == 0)
  return;
 do {
  VAR_32 = VAR_31->sc_channels;
  for (VAR_36 = 0; VAR_36 < VAR_2; VAR_32++, VAR_36++) {
   VAR_33 = VAR_32->rc_tp;





   if (VAR_32->rc_flags & VAR_17) {
    FUNC_1();
    VAR_32->rc_flags &= ~VAR_17;
    VAR_31->sc_scheduled_event--;
    FUNC_2();
    FUNC_3(VAR_31->sc_dev,
       "channel %d: interrupt-level buffer overflow\n",
         VAR_36);
   }
   if (VAR_32->rc_flags & VAR_18) {
    FUNC_1();
    VAR_32->rc_flags &= ~VAR_18;
    VAR_31->sc_scheduled_event--;
    FUNC_2();
    FUNC_3(VAR_31->sc_dev,
        "channel %d: silo overflow\n", VAR_36);
   }
   if (VAR_32->rc_flags & VAR_15) {
    FUNC_1();
    VAR_32->rc_flags &= ~VAR_15;
    VAR_31->sc_scheduled_event -= VAR_7;
    FUNC_2();
    FUNC_9(VAR_33, !!(VAR_32->rc_msvr & VAR_8));
   }
   if (VAR_32->rc_flags & VAR_11) {
    FUNC_1();
    VAR_32->rc_flags &= ~VAR_11;
    VAR_35 = VAR_32->rc_iptr;
    if (VAR_32->rc_bufend == &VAR_32->rc_ibuf[2 * VAR_13])
     VAR_34 = &VAR_32->rc_ibuf[VAR_13];
    else
     VAR_34 = VAR_32->rc_ibuf;
    VAR_37 = VAR_35 - VAR_34;
    if (VAR_37 > 0) {
     if (VAR_32->rc_bufend == &VAR_32->rc_ibuf[2 * VAR_13]) {
      VAR_32->rc_iptr = VAR_32->rc_ibuf;
      VAR_32->rc_bufend = &VAR_32->rc_ibuf[VAR_13];
      VAR_32->rc_hiwat = &VAR_32->rc_ibuf[VAR_14];
     } else {
      VAR_32->rc_iptr = &VAR_32->rc_ibuf[VAR_13];
      VAR_32->rc_bufend = &VAR_32->rc_ibuf[2 * VAR_13];
      VAR_32->rc_hiwat =
       &VAR_32->rc_ibuf[VAR_13 + VAR_14];
     }
     if ( (VAR_32->rc_flags & VAR_16)
         && (VAR_33->t_state & VAR_21)
         && !(VAR_33->t_state & VAR_23)
         && !(VAR_32->rc_msvr & VAR_9)
         ) {
      FUNC_6(VAR_31, VAR_0, VAR_36);
      FUNC_6(VAR_31, VAR_1,
       VAR_32->rc_msvr |= VAR_9);
     }
     VAR_31->sc_scheduled_event -= VAR_37;
    }
    FUNC_2();

    if (VAR_37 <= 0 || !(VAR_33->t_state & VAR_21))
     goto done1;

    if ( (VAR_33->t_state & VAR_20)
        && !(VAR_33->t_state & VAR_22)) {
     if ((VAR_33->t_rawq.c_cc + VAR_37) >= VAR_10
         && ((VAR_32->rc_flags & VAR_16) || (VAR_33->t_iflag & VAR_6))
         && !(VAR_33->t_state & VAR_23))
      FUNC_8(VAR_33);
     VAR_28 += VAR_37;
     VAR_29 += VAR_37;
     VAR_33->t_rawcc += VAR_37;
     if (FUNC_0(VAR_34, VAR_37, &VAR_33->t_rawq))
      FUNC_3(VAR_31->sc_dev,
        "channel %d: tty-level buffer overflow\n",
          VAR_36);
     FUNC_7(VAR_33);
     if ((VAR_33->t_state & VAR_24) && ((VAR_33->t_iflag & VAR_5)
         || (VAR_33->t_cc[VAR_25] == VAR_33->t_cc[VAR_26]))) {
      VAR_33->t_state &= ~VAR_24;
      VAR_33->t_lflag &= ~VAR_3;
      FUNC_5(VAR_33);
     }
    } else {
     for (; VAR_34 < VAR_35; VAR_34++)
      FUNC_10(VAR_33,
          (VAR_34[0] |
          VAR_27[VAR_34[VAR_4] & 0xF]));
    }
done1: ;
   }
   if (VAR_32->rc_flags & VAR_12) {
    FUNC_1();
    VAR_31->sc_scheduled_event -= VAR_7;
    VAR_32->rc_flags &= ~VAR_12;
    VAR_32->rc_tp->t_state &= ~VAR_19;
    FUNC_2();
    FUNC_11(VAR_33);
   }
   if (VAR_31->sc_scheduled_event == 0)
    break;
  }
 } while (VAR_31->sc_scheduled_event >= VAR_7);
}
