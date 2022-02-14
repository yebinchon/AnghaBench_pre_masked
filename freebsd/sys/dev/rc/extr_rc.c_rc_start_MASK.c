
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int c_cc; } ;
struct tty {int t_state; TYPE_1__ t_outq; struct rc_chans* t_sc; } ;
struct rc_softc {int sc_dev; } ;
struct rc_chans {int rc_flags; int rc_msvr; int rc_chan; int rc_obufend; int rc_optr; int rc_obuf; int rc_ier; struct rc_softc* rc_rcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct rc_chans*,char*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (struct rc_softc*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct tty*) ;

__attribute__((used)) static void
FUNC_10(struct tty *VAR_12)
{
 struct rc_softc *VAR_13;
 struct rc_chans *VAR_14;
 int VAR_15;

 VAR_14 = VAR_12->t_sc;
 if (VAR_14->rc_flags & VAR_5)
  return;
 VAR_13 = VAR_14->rc_rcb;
 VAR_15 = FUNC_7();
 VAR_14->rc_flags |= VAR_5;
 FUNC_0();
 if (VAR_12->t_state & VAR_11)
  VAR_14->rc_flags |= VAR_6;
 else
  VAR_14->rc_flags &= ~VAR_6;

 if ( (VAR_14->rc_flags & VAR_7)
     && (VAR_12->t_state & VAR_9)
     && (VAR_14->rc_msvr & VAR_4)
    ) {
  FUNC_6(VAR_13, VAR_0, VAR_14->rc_chan);
  FUNC_6(VAR_13, VAR_2, VAR_14->rc_msvr &= ~VAR_4);
 } else if (!(VAR_14->rc_msvr & VAR_4)) {
  FUNC_6(VAR_13, VAR_0, VAR_14->rc_chan);
  FUNC_6(VAR_13, VAR_2, VAR_14->rc_msvr |= VAR_4);
 }
 FUNC_1();
 if (VAR_12->t_state & (VAR_10|VAR_11))
  goto out;



 FUNC_9(VAR_12);




 if (VAR_12->t_state & VAR_8)
  goto out;

 if (VAR_12->t_outq.c_cc > 0) {
  u_int VAR_16;

  VAR_12->t_state |= VAR_8;
  VAR_16 = FUNC_5(&VAR_12->t_outq, VAR_14->rc_obuf, sizeof VAR_14->rc_obuf);
  FUNC_0();
  VAR_14->rc_optr = VAR_14->rc_obuf;
  VAR_14->rc_obufend = VAR_14->rc_optr + VAR_16;
  FUNC_1();
  if (!(VAR_14->rc_ier & VAR_3)) {




   FUNC_6(VAR_13, VAR_0, VAR_14->rc_chan);
   FUNC_6(VAR_13, VAR_1, VAR_14->rc_ier |= VAR_3);
  }
 }
out:
 VAR_14->rc_flags &= ~VAR_5;
 (void) FUNC_8(VAR_15);
}
