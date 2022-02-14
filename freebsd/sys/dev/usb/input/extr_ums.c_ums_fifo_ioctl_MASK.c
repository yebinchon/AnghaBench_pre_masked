
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct usb_fifo {int dummy; } ;
struct TYPE_4__ {int flags; int obutton; int button; int dz; int dy; int dx; } ;
struct TYPE_5__ {int level; void** syncmask; void* packetsize; void* protocol; int rate; } ;
struct TYPE_6__ {void* buttons; } ;
struct ums_softc {void* sc_buttons; int sc_mtx; TYPE_1__ sc_status; TYPE_2__ sc_mode; TYPE_3__ sc_hw; int sc_pollrate; } ;
typedef TYPE_1__ mousestatus_t ;
typedef TYPE_2__ mousemode_t ;
typedef TYPE_3__ mousehw_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;


 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ums_softc*) ;
 struct ums_softc* FUNC_4 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_5(struct usb_fifo *VAR_14, u_long VAR_15, void *VAR_16, int VAR_17)
{
 struct ums_softc *VAR_18 = FUNC_4(VAR_14);
 mousemode_t VAR_19;
 int VAR_20 = 0;

 FUNC_0(2, "\n");

 FUNC_1(&VAR_18->sc_mtx);

 switch (VAR_15) {
 case 133:
  *(mousehw_t *)VAR_16 = VAR_18->sc_hw;
  break;

 case 131:
  *(mousemode_t *)VAR_16 = VAR_18->sc_mode;
  break;

 case 128:
  VAR_19 = *(mousemode_t *)VAR_16;

  if (VAR_19.level == -1) {

  } else if ((VAR_19.level < 0) || (VAR_19.level > 1)) {
   VAR_20 = VAR_0;
   break;
  } else {
   VAR_18->sc_mode.level = VAR_19.level;
  }


  VAR_18->sc_pollrate = VAR_19.rate;

  if (VAR_18->sc_mode.level == 0) {
   if (VAR_18->sc_buttons > VAR_3)
    VAR_18->sc_hw.buttons = VAR_3;
   else
    VAR_18->sc_hw.buttons = VAR_18->sc_buttons;
   VAR_18->sc_mode.protocol = VAR_8;
   VAR_18->sc_mode.packetsize = VAR_4;
   VAR_18->sc_mode.syncmask[0] = VAR_6;
   VAR_18->sc_mode.syncmask[1] = VAR_5;
  } else if (VAR_18->sc_mode.level == 1) {
   if (VAR_18->sc_buttons > VAR_10)
    VAR_18->sc_hw.buttons = VAR_10;
   else
    VAR_18->sc_hw.buttons = VAR_18->sc_buttons;
   VAR_18->sc_mode.protocol = VAR_9;
   VAR_18->sc_mode.packetsize = VAR_11;
   VAR_18->sc_mode.syncmask[0] = VAR_13;
   VAR_18->sc_mode.syncmask[1] = VAR_12;
  }
  FUNC_3(VAR_18);
  break;

 case 132:
  *(int *)VAR_16 = VAR_18->sc_mode.level;
  break;

 case 129:
  if (*(int *)VAR_16 < 0 || *(int *)VAR_16 > 1) {
   VAR_20 = VAR_0;
   break;
  }
  VAR_18->sc_mode.level = *(int *)VAR_16;

  if (VAR_18->sc_mode.level == 0) {
   if (VAR_18->sc_buttons > VAR_3)
    VAR_18->sc_hw.buttons = VAR_3;
   else
    VAR_18->sc_hw.buttons = VAR_18->sc_buttons;
   VAR_18->sc_mode.protocol = VAR_8;
   VAR_18->sc_mode.packetsize = VAR_4;
   VAR_18->sc_mode.syncmask[0] = VAR_6;
   VAR_18->sc_mode.syncmask[1] = VAR_5;
  } else if (VAR_18->sc_mode.level == 1) {
   if (VAR_18->sc_buttons > VAR_10)
    VAR_18->sc_hw.buttons = VAR_10;
   else
    VAR_18->sc_hw.buttons = VAR_18->sc_buttons;
   VAR_18->sc_mode.protocol = VAR_9;
   VAR_18->sc_mode.packetsize = VAR_11;
   VAR_18->sc_mode.syncmask[0] = VAR_13;
   VAR_18->sc_mode.syncmask[1] = VAR_12;
  }
  FUNC_3(VAR_18);
  break;

 case 130:{
   mousestatus_t *VAR_21 = (mousestatus_t *)VAR_16;

   *VAR_21 = VAR_18->sc_status;
   VAR_18->sc_status.obutton = VAR_18->sc_status.button;
   VAR_18->sc_status.button = 0;
   VAR_18->sc_status.dx = 0;
   VAR_18->sc_status.dy = 0;
   VAR_18->sc_status.dz = 0;


   if (VAR_21->dx || VAR_21->dy || VAR_21->dz ) {
    VAR_21->flags |= VAR_7;
   }
   if (VAR_21->button != VAR_21->obutton) {
    VAR_21->flags |= VAR_2;
   }
   break;
  }
 default:
  VAR_20 = VAR_1;
  break;
 }

 FUNC_2(&VAR_18->sc_mtx);
 return (VAR_20);
}
