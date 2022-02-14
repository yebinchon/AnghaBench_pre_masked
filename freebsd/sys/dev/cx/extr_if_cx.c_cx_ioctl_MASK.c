
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_21__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct serial_statistics {int oerrs; int opkts; int obytes; int ierrs; int ipkts; int ibytes; int mintr; int tintr; int rintr; } ;
struct cdev {TYPE_3__* si_drv1; } ;
typedef int mask ;
struct TYPE_28__ {int open_dev; TYPE_22__* ifp; int running; TYPE_2__* tty; int lock; TYPE_1__* board; TYPE_4__* chan; } ;
typedef TYPE_3__ drv_t ;
struct TYPE_29__ {int debug; int debug_shadow; int mode; int oerrs; int opkts; int obytes; int ierrs; int ipkts; int ibytes; int mintr; int tintr; int rintr; } ;
typedef TYPE_4__ cx_chan_t ;
typedef scalar_t__ caddr_t ;
typedef int bdrv_t ;
struct TYPE_27__ {int t_state; } ;
struct TYPE_26__ {int if_flags; int if_drv_flags; } ;
struct TYPE_25__ {int pp_flags; } ;
struct TYPE_24__ {int * sys; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_21__* FUNC_3 (TYPE_22__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int FUNC_5 (char*,int) ;
 int * VAR_18 ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 long FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_4__*,long) ;
 int FUNC_15 (TYPE_4__*,int) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_4__*,int) ;
 int FUNC_20 (TYPE_4__*,int) ;
 int FUNC_21 (TYPE_4__*,int) ;
 int FUNC_22 (struct thread*,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char*) ;

__attribute__((used)) static int FUNC_27 (struct cdev *VAR_19, u_long VAR_20, caddr_t VAR_21, int VAR_22, struct thread *VAR_23)
{
 drv_t *VAR_24;
 bdrv_t *VAR_25;
 cx_chan_t *VAR_26;
 struct serial_statistics *VAR_27;
 int VAR_28, VAR_29;
 char VAR_30[16];

 VAR_24 = VAR_19->si_drv1;
 VAR_26 = VAR_24->chan;

 VAR_25 = VAR_24->board->sys;

 switch (VAR_20) {
 case 144:
  FUNC_0 (VAR_24, ("ioctl: getregistered\n"));
  FUNC_5 (VAR_30, sizeof(VAR_30));
  for (VAR_29=0; VAR_29<VAR_8*VAR_7; ++VAR_29)
   if (VAR_18 [VAR_29])
    VAR_30 [VAR_29/8] |= 1 << (VAR_29 & 7);
  FUNC_4 (VAR_30, VAR_21, sizeof (VAR_30));
  return 0;

 case 146:
  FUNC_0 (VAR_24, ("ioctl: getport\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int *)VAR_21 = FUNC_12 (VAR_26);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  if (*(int *)VAR_21<0)
   return (VAR_1);
  else
   return 0;

 case 135:
  FUNC_0 (VAR_24, ("ioctl: setproto\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;

  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_20 (VAR_26, *(int *)VAR_21);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;


 case 145:
  FUNC_0 (VAR_24, ("ioctl: getproto\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_26 ((char*)VAR_21, (VAR_26->mode == VAR_5) ? "async" :
   (FUNC_3(VAR_24->ifp)->pp_flags & VAR_10) ? "fr" :
   (VAR_24->ifp->if_flags & VAR_9) ? "cisco" : "ppp");
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 134:
  FUNC_0 (VAR_24, ("ioctl: setproto\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if (VAR_26->mode == VAR_5)
   return VAR_0;
  if (VAR_24->ifp->if_drv_flags & VAR_4)
   return VAR_0;
  if (! FUNC_25 ("cisco", (char*)VAR_21)) {
   FUNC_3(VAR_24->ifp)->pp_flags &= ~(VAR_10);
   FUNC_3(VAR_24->ifp)->pp_flags |= VAR_11;
   VAR_24->ifp->if_flags |= VAR_9;
  } else if (! FUNC_25 ("fr", (char*)VAR_21)) {
   VAR_24->ifp->if_flags &= ~(VAR_9);
   FUNC_3(VAR_24->ifp)->pp_flags |= VAR_10 | VAR_11;
  } else if (! FUNC_25 ("ppp", (char*)VAR_21)) {
   FUNC_3(VAR_24->ifp)->pp_flags &= ~(VAR_10 | VAR_11);
   VAR_24->ifp->if_flags &= ~(VAR_9);
  } else
   return VAR_1;
  return 0;

 case 150:
  FUNC_0 (VAR_24, ("ioctl: getkeepalive\n"));
  if ((FUNC_3(VAR_24->ifp)->pp_flags & VAR_10) ||
      (VAR_24->ifp->if_flags & VAR_9) ||
      (VAR_26->mode == VAR_5))
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = (FUNC_3(VAR_24->ifp)->pp_flags & VAR_11) ? 1 : 0;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 139:
  FUNC_0 (VAR_24, ("ioctl: setkeepalive\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if ((FUNC_3(VAR_24->ifp)->pp_flags & VAR_10) ||
   (VAR_24->ifp->if_flags & VAR_9))
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  if (*(int*)VAR_21)
   FUNC_3(VAR_24->ifp)->pp_flags |= VAR_11;
  else
   FUNC_3(VAR_24->ifp)->pp_flags &= ~VAR_11;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;


 case 148:
  FUNC_0 (VAR_24, ("ioctl: getmode\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = (VAR_26->mode == VAR_5) ?
   VAR_13 : VAR_14;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 137:
  FUNC_0 (VAR_24, ("ioctl: setmode\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;


  if (VAR_24->lock)
   return VAR_0;

  if (VAR_26->mode == VAR_5 && VAR_24->tty && (VAR_24->tty->t_state & VAR_17) &&
      (VAR_24->open_dev|0x2))
   return VAR_0;


  if (VAR_26->mode != VAR_5 && VAR_24->running &&
      (*(int*)VAR_21 == VAR_13))
   return VAR_0;

  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  if (VAR_26->mode == VAR_6 && *(int*)VAR_21 == VAR_13) {
   FUNC_18 (VAR_26, VAR_5);
   FUNC_6 (VAR_26, 0);
   FUNC_7 (VAR_26, 0);
  } else if (VAR_26->mode == VAR_5 && *(int*)VAR_21 == VAR_14) {
   if (VAR_24->ifp->if_flags & VAR_3)
    VAR_26->debug = VAR_26->debug_shadow;
   FUNC_18 (VAR_26, VAR_6);
   FUNC_6 (VAR_26, 1);
   FUNC_7 (VAR_26, 1);
  }
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 143:
  FUNC_0 (VAR_24, ("ioctl: getestat\n"));
  VAR_27 = (struct serial_statistics*) VAR_21;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  VAR_27->rintr = VAR_26->rintr;
  VAR_27->tintr = VAR_26->tintr;
  VAR_27->mintr = VAR_26->mintr;
  VAR_27->ibytes = VAR_26->ibytes;
  VAR_27->ipkts = VAR_26->ipkts;
  VAR_27->ierrs = VAR_26->ierrs;
  VAR_27->obytes = VAR_26->obytes;
  VAR_27->opkts = VAR_26->opkts;
  VAR_27->oerrs = VAR_26->oerrs;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 154:
  FUNC_0 (VAR_24, ("ioctl: clrstat\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  VAR_26->rintr = 0;
  VAR_26->tintr = 0;
  VAR_26->mintr = 0;
  VAR_26->ibytes = 0;
  VAR_26->ipkts = 0;
  VAR_26->ierrs = 0;
  VAR_26->obytes = 0;
  VAR_26->opkts = 0;
  VAR_26->oerrs = 0;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 153:
  FUNC_0 (VAR_24, ("ioctl: getbaud\n"));
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(long*)VAR_21 = FUNC_8(VAR_26);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 142:
  FUNC_0 (VAR_24, ("ioctl: setbaud\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_14 (VAR_26, *(long*)VAR_21);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 149:
  FUNC_0 (VAR_24, ("ioctl: getloop\n"));
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = FUNC_10 (VAR_26);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 138:
  FUNC_0 (VAR_24, ("ioctl: setloop\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_17 (VAR_26, *(int*)VAR_21);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 151:
  FUNC_0 (VAR_24, ("ioctl: getdpll\n"));
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = FUNC_9 (VAR_26);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 140:
  FUNC_0 (VAR_24, ("ioctl: setdpll\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_15 (VAR_26, *(int*)VAR_21);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 147:
  FUNC_0 (VAR_24, ("ioctl: getnrzi\n"));
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = FUNC_11 (VAR_26);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 136:
  FUNC_0 (VAR_24, ("ioctl: setnrzi\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  if (VAR_26->mode == VAR_5)
   return VAR_1;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_19 (VAR_26, *(int*)VAR_21);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 152:
  FUNC_0 (VAR_24, ("ioctl: getdebug\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  *(int*)VAR_21 = VAR_26->debug;
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 141:
  FUNC_0 (VAR_24, ("ioctl: setdebug\n"));

  VAR_28 = FUNC_22 (VAR_23, VAR_12);
  if (VAR_28)
   return VAR_28;
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);

  if (VAR_26->mode == VAR_5) {
   VAR_26->debug = *(int*)VAR_21;
  } else {





   VAR_26->debug_shadow = (*(int*)VAR_21) ? (*(int*)VAR_21) : 1;
   if (VAR_24->ifp->if_flags & VAR_3)
    VAR_26->debug = VAR_26->debug_shadow;
  }



  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;
 }

 switch (VAR_20) {
 case 128:
  FUNC_0 (VAR_24, ("ioctl: tiocsdtr\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_16 (VAR_26, 1);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 133:
  FUNC_0 (VAR_24, ("ioctl: tioccdtr\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_16 (VAR_26, 0);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 129:
  FUNC_0 (VAR_24, ("ioctl: tiocmset\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  FUNC_16 (VAR_26, (*(int*)VAR_21 & VAR_15) ? 1 : 0);
  FUNC_21 (VAR_26, (*(int*)VAR_21 & VAR_16) ? 1 : 0);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 131:
  FUNC_0 (VAR_24, ("ioctl: tiocmbis\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  if (*(int*)VAR_21 & VAR_15) FUNC_16 (VAR_26, 1);
  if (*(int*)VAR_21 & VAR_16) FUNC_21 (VAR_26, 1);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 132:
  FUNC_0 (VAR_24, ("ioctl: tiocmbic\n"));
  VAR_29 = FUNC_23 ();
  FUNC_1 (VAR_25);
  if (*(int*)VAR_21 & VAR_15) FUNC_16 (VAR_26, 0);
  if (*(int*)VAR_21 & VAR_16) FUNC_21 (VAR_26, 0);
  FUNC_2 (VAR_25);
  FUNC_24 (VAR_29);
  return 0;

 case 130:
  FUNC_0 (VAR_24, ("ioctl: tiocmget\n"));
  *(int*)VAR_21 = FUNC_13 (VAR_24);
  return 0;

 }

 FUNC_0 (VAR_24, ("ioctl: 0x%lx\n", VAR_20));
 return VAR_2;
}
