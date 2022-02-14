
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct uio {size_t uio_resid; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {size_t packetsize; } ;
struct adb_mouse_softc {size_t packet_read_len; int xdelta; int ydelta; int buttons; int last_buttons; unsigned int* packet; int sc_mtx; TYPE_1__ mode; int sc_cv; } ;
typedef int int8_t ;


 struct adb_mouse_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct adb_mouse_softc *VAR_6;
 size_t VAR_7;
 int8_t VAR_8[8];
 int VAR_9;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 if (VAR_4->uio_resid <= 0)
  return (0);

 FUNC_3(&VAR_6->sc_mtx);

 if (!VAR_6->packet_read_len) {
  if (VAR_6->xdelta == 0 && VAR_6->ydelta == 0 &&
     VAR_6->buttons == VAR_6->last_buttons) {

   if (VAR_5 & VAR_2) {
    FUNC_4(&VAR_6->sc_mtx);
    return VAR_1;
   }



   VAR_9 = FUNC_1(&VAR_6->sc_cv, &VAR_6->sc_mtx);
   if (VAR_9) {
    FUNC_4(&VAR_6->sc_mtx);
    return (VAR_9);
   }
  }

  VAR_6->packet[0] = 1U << 7;
  VAR_6->packet[0] |= (!(VAR_6->buttons & 1)) << 2;
  VAR_6->packet[0] |= (!(VAR_6->buttons & 4)) << 1;
  VAR_6->packet[0] |= (!(VAR_6->buttons & 2));

  if (VAR_6->xdelta > 127) {
   VAR_6->packet[1] = 127;
   VAR_6->packet[3] = VAR_6->xdelta - 127;
  } else if (VAR_6->xdelta < -127) {
   VAR_6->packet[1] = -127;
   VAR_6->packet[3] = VAR_6->xdelta + 127;
  } else {
   VAR_6->packet[1] = VAR_6->xdelta;
   VAR_6->packet[3] = 0;
  }

  if (VAR_6->ydelta > 127) {
   VAR_6->packet[2] = 127;
   VAR_6->packet[4] = VAR_6->ydelta - 127;
  } else if (VAR_6->ydelta < -127) {
   VAR_6->packet[2] = -127;
   VAR_6->packet[4] = VAR_6->ydelta + 127;
  } else {
   VAR_6->packet[2] = VAR_6->ydelta;
   VAR_6->packet[4] = 0;
  }


  VAR_6->packet[5] = 0;
  VAR_6->packet[6] = 0;

  VAR_6->packet[7] = ~((uint8_t)(VAR_6->buttons >> 3)) & 0x7f;


  VAR_6->last_buttons = VAR_6->buttons;
  VAR_6->xdelta = 0;
  VAR_6->ydelta = 0;

  VAR_6->packet_read_len = VAR_6->mode.packetsize;
 }

 VAR_7 = (VAR_6->packet_read_len > VAR_4->uio_resid) ?
  VAR_4->uio_resid : VAR_6->packet_read_len;

 FUNC_2(VAR_8,VAR_6->packet +
  (VAR_6->mode.packetsize - VAR_6->packet_read_len),VAR_7);
 VAR_6->packet_read_len -= VAR_7;

 FUNC_4(&VAR_6->sc_mtx);

 VAR_9 = FUNC_5(VAR_8,VAR_7,VAR_4);

 return (VAR_9);
}
