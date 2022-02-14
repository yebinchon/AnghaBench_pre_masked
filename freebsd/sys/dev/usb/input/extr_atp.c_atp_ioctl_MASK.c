
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
struct TYPE_6__ {int buttons; } ;
struct atp_softc {int sc_mutex; TYPE_1__ sc_status; TYPE_2__ sc_mode; TYPE_3__ sc_hw; int sc_pollrate; } ;
typedef TYPE_1__ mousestatus_t ;
typedef TYPE_2__ mousemode_t ;
typedef TYPE_3__ mousehw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;


 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (struct atp_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct atp_softc* FUNC_3 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_4(struct usb_fifo *VAR_12, u_long VAR_13, void *VAR_14, int VAR_15)
{
 struct atp_softc *VAR_16 = FUNC_3(VAR_12);
 mousemode_t VAR_17;
 int VAR_18 = 0;

 FUNC_1(&VAR_16->sc_mutex);

 switch(VAR_13) {
 case 133:
  *(mousehw_t *)VAR_14 = VAR_16->sc_hw;
  break;
 case 131:
  *(mousemode_t *)VAR_14 = VAR_16->sc_mode;
  break;
 case 128:
  VAR_17 = *(mousemode_t *)VAR_14;

  if (VAR_17.level == -1)

   ;
  else if ((VAR_17.level < 0) || (VAR_17.level > 1)) {
   VAR_18 = VAR_0;
   break;
  }
  VAR_16->sc_mode.level = VAR_17.level;
  VAR_16->sc_pollrate = VAR_17.rate;
  VAR_16->sc_hw.buttons = 3;

  if (VAR_16->sc_mode.level == 0) {
   VAR_16->sc_mode.protocol = VAR_7;
   VAR_16->sc_mode.packetsize = VAR_3;
   VAR_16->sc_mode.syncmask[0] = VAR_5;
   VAR_16->sc_mode.syncmask[1] = VAR_4;
  } else if (VAR_16->sc_mode.level == 1) {
   VAR_16->sc_mode.protocol = VAR_8;
   VAR_16->sc_mode.packetsize = VAR_9;
   VAR_16->sc_mode.syncmask[0] = VAR_11;
   VAR_16->sc_mode.syncmask[1] = VAR_10;
  }
  FUNC_0(VAR_16);
  break;
 case 132:
  *(int *)VAR_14 = VAR_16->sc_mode.level;
  break;
 case 129:
  if ((*(int *)VAR_14 < 0) || (*(int *)VAR_14 > 1)) {
   VAR_18 = VAR_0;
   break;
  }
  VAR_16->sc_mode.level = *(int *)VAR_14;
  VAR_16->sc_hw.buttons = 3;

  if (VAR_16->sc_mode.level == 0) {
   VAR_16->sc_mode.protocol = VAR_7;
   VAR_16->sc_mode.packetsize = VAR_3;
   VAR_16->sc_mode.syncmask[0] = VAR_5;
   VAR_16->sc_mode.syncmask[1] = VAR_4;
  } else if (VAR_16->sc_mode.level == 1) {
   VAR_16->sc_mode.protocol = VAR_8;
   VAR_16->sc_mode.packetsize = VAR_9;
   VAR_16->sc_mode.syncmask[0] = VAR_11;
   VAR_16->sc_mode.syncmask[1] = VAR_10;
  }
  FUNC_0(VAR_16);
  break;
 case 130: {
  mousestatus_t *VAR_19 = (mousestatus_t *)VAR_14;

  *VAR_19 = VAR_16->sc_status;
  VAR_16->sc_status.obutton = VAR_16->sc_status.button;
  VAR_16->sc_status.button = 0;
  VAR_16->sc_status.dx = 0;
  VAR_16->sc_status.dy = 0;
  VAR_16->sc_status.dz = 0;

  if (VAR_19->dx || VAR_19->dy || VAR_19->dz)
   VAR_19->flags |= VAR_6;
  if (VAR_19->button != VAR_19->obutton)
   VAR_19->flags |= VAR_2;
  break;
 }

 default:
  VAR_18 = VAR_1;
  break;
 }

 FUNC_2(&VAR_16->sc_mutex);
 return (VAR_18);
}
