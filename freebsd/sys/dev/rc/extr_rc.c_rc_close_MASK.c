
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_cflag; int t_state; struct rc_chans* t_sc; } ;
struct rc_softc {int dummy; } ;
struct rc_chans {int rc_flags; int rc_msvr; struct rc_softc* rc_rcb; scalar_t__ rc_chan; scalar_t__ rc_ier; } ;


 int FUNC_0 (struct rc_softc*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rc_softc** FUNC_1 (struct tty*) ;
 int VAR_8 ;
 int FUNC_2 (struct rc_softc*,scalar_t__) ;
 int FUNC_3 (struct tty*,int ,int ) ;
 int FUNC_4 (struct rc_softc*,int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct rc_softc**) ;

__attribute__((used)) static void
FUNC_9(struct tty *VAR_9)
{
 struct rc_chans *VAR_10;
 struct rc_softc *VAR_11;
 int VAR_12;

 VAR_10 = VAR_9->t_sc;
 VAR_11 = VAR_10->rc_rcb;
 VAR_12 = FUNC_5();
 FUNC_4(VAR_11, VAR_1, VAR_10->rc_chan);


 FUNC_4(VAR_11, VAR_2, VAR_10->rc_ier = 0);
 if ( (VAR_9->t_cflag & VAR_4)
     || (!(VAR_10->rc_flags & VAR_6)
        && !(VAR_10->rc_msvr & VAR_5)
        && !(VAR_9->t_cflag & VAR_3))
     || !(VAR_9->t_state & VAR_8)
    ) {
  FUNC_0(VAR_11, VAR_10->rc_chan, VAR_0);
  FUNC_2(VAR_11, VAR_10->rc_chan);
  (void) FUNC_3(VAR_9, VAR_7, 0);
  FUNC_7(VAR_9);
 }
 VAR_10->rc_flags &= ~VAR_6;
 FUNC_8( &VAR_10->rc_rcb);
 FUNC_8(FUNC_1(VAR_9));
 (void) FUNC_6(VAR_12);
}
