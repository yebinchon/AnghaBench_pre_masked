
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int t_state; struct rc_chans* t_sc; } ;
struct rc_softc {int sc_scheduled_event; int sc_dev; } ;
struct rc_chans {int rc_flags; int * rc_ibuf; int * rc_iptr; int * rc_bufend; int rc_chan; struct rc_softc* rc_rcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,char*,char*) ;
 int FUNC_3 (struct rc_chans*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_6, int VAR_7)
{
 struct rc_softc *VAR_8;
 struct rc_chans *VAR_9;
 u_char *VAR_10, *VAR_11;

 VAR_9 = VAR_6->t_sc;
 VAR_8 = VAR_9->rc_rcb;




 if (VAR_7 & VAR_1)
  FUNC_3(VAR_9);
 FUNC_0();
 if (VAR_7 & VAR_0) {
  VAR_9->rc_flags &= ~VAR_2;
  VAR_11 = VAR_9->rc_iptr;
  if (VAR_9->rc_bufend == &VAR_9->rc_ibuf[2 * VAR_3]) {
   VAR_10 = &VAR_9->rc_ibuf[VAR_3];
   VAR_9->rc_iptr = &VAR_9->rc_ibuf[VAR_3];
  } else {
   VAR_10 = VAR_9->rc_ibuf;
   VAR_9->rc_iptr = VAR_9->rc_ibuf;
  }
  VAR_8->sc_scheduled_event -= VAR_11 - VAR_10;
 }
 if (VAR_6->t_state & VAR_5)
  VAR_9->rc_flags |= VAR_4;
 else
  VAR_9->rc_flags &= ~VAR_4;
 FUNC_1();
}
