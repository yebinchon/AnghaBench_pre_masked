
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int count; int tail; int * buf; } ;
struct TYPE_20__ {int flags; int dx; int dy; int dz; int button; } ;
struct TYPE_22__ {int* ipacket; int inputbytes; } ;
struct TYPE_19__ {scalar_t__ level; int accelfactor; } ;
struct TYPE_18__ {int model; } ;
struct psm_softc {size_t pqueue_start; size_t pqueue_end; int button; int config; int state; int idletimeout; int softcallout; int * async; int rsel; TYPE_4__ queue; int watchdog; TYPE_3__ status; TYPE_5__ idlepacket; TYPE_2__ mode; int evdev_r; TYPE_1__ hw; TYPE_5__* pqueue; int lastsoftintr; } ;
typedef TYPE_5__ packetbuf_t ;
struct TYPE_23__ {int obutton; int button; int dx; int dy; int dz; int flags; } ;
typedef TYPE_6__ mousestatus_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
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
 scalar_t__ VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int *,int ,int ,struct psm_softc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_34 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (struct psm_softc*,TYPE_5__*,TYPE_6__*,int*,int*,int*) ;
 int FUNC_10 (struct psm_softc*,TYPE_5__*,TYPE_6__*,int*,int*,int*) ;
 int FUNC_11 (struct psm_softc*,TYPE_5__*,TYPE_6__*,int*,int*,int*) ;
 int FUNC_12 (struct psm_softc*,TYPE_5__*) ;
 int FUNC_13 (struct psm_softc*,TYPE_5__*,TYPE_6__*,int*,int*,int*) ;
 int VAR_35 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct psm_softc*,TYPE_5__*,TYPE_6__*,int*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct psm_softc*) ;

__attribute__((used)) static void
FUNC_22(void *VAR_36)
{




 static int VAR_37[8] = {
  0,
  144,
  142,
  144 | 142,
  143,
  144 | 143,
  143 | 142,
  144 | 143 | 142
 };
 struct psm_softc *VAR_38 = VAR_36;
 mousestatus_t VAR_39;
 packetbuf_t *VAR_40;
 int VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;

 FUNC_6(&VAR_38->lastsoftintr);

 VAR_46 = FUNC_15();

 do {
  VAR_40 = &VAR_38->pqueue[VAR_38->pqueue_start];

  if (VAR_38->mode.level == VAR_25)
   goto next_native;

  VAR_44 = VAR_40->ipacket[0];





  if (VAR_38->hw.model == 130)
   VAR_40->ipacket[1] |= (VAR_44 & VAR_21) ? 0x80 : 0;


  VAR_41 = (VAR_44 & VAR_20) ?
      VAR_40->ipacket[1] - 256 : VAR_40->ipacket[1];
  VAR_42 = (VAR_44 & VAR_22) ?
      VAR_40->ipacket[2] - 256 : VAR_40->ipacket[2];
  VAR_43 = 0;
  VAR_39.obutton = VAR_38->button;
  VAR_39.button = VAR_37[VAR_44 & VAR_17];

  if (VAR_38->config & VAR_24)
   VAR_39.button |= ((VAR_44 & VAR_19)) ?
       0 : VAR_6;
  FUNC_18(&VAR_38->idletimeout);
  VAR_38->idlepacket.inputbytes = 0;

  switch (VAR_38->hw.model) {

  case 138:
   VAR_43 = (VAR_40->ipacket[3] & VAR_10) ?
       (VAR_40->ipacket[3] & 0x0f) - 16 :
       (VAR_40->ipacket[3] & 0x0f);
   VAR_39.button |=
       (VAR_40->ipacket[3] & VAR_8) ?
       VAR_6 : 0;
   VAR_39.button |=
       (VAR_40->ipacket[3] & VAR_9) ?
       VAR_7 : 0;
   break;

  case 135:
  case 133:

   VAR_43 = (char)VAR_40->ipacket[3];


   if ((VAR_43 >= 7) || (VAR_43 <= -7))
    VAR_43 = 0;

   VAR_39.button |= (VAR_44 & VAR_13) ?
       VAR_6 : 0;
   VAR_39.button |= (VAR_44 & VAR_14) ?
       VAR_7 : 0;
   break;

  case 134:
   FUNC_10(VAR_38, VAR_40, &VAR_39, &VAR_41, &VAR_42, &VAR_43);
   break;

  case 136:

   VAR_39.button |= ((VAR_44 & VAR_19)) ? 0 :
       VAR_6;
   break;

  case 132:




   VAR_39.button |= (VAR_40->ipacket[3] & VAR_16) ?
       VAR_6 : 0;
   VAR_39.button |= (VAR_40->ipacket[3] & VAR_15) ?
       VAR_7 : 0;
   VAR_43 = (VAR_40->ipacket[3] & VAR_20) ?
       VAR_40->ipacket[4] - 256 : VAR_40->ipacket[4];
   break;

  case 130:

   VAR_39.button |= (VAR_44 & VAR_19) ?
       VAR_6 : 0;
   break;

  case 128:
   FUNC_13(VAR_38, VAR_40, &VAR_39, &VAR_41, &VAR_42, &VAR_43);
   VAR_44 = ((VAR_41 < 0) ? VAR_20 : 0) |
       ((VAR_42 < 0) ? VAR_22 : 0);
   break;

  case 141:
   VAR_41 = (VAR_40->ipacket[1] & 0x80) ?
       VAR_40->ipacket[1] - 256 : VAR_40->ipacket[1];
   VAR_42 = (VAR_40->ipacket[2] & 0x80) ?
       VAR_40->ipacket[2] - 256 : VAR_40->ipacket[2];
   switch (VAR_44 & VAR_5) {
   case 0x10:
    VAR_43 = 1;
    break;
   case 0x30:
    VAR_43 = -1;
    break;
   case 0x40:
    VAR_43 = 2;
    break;
   case 0xc0:
    VAR_43 = -2;
    break;
   }
   break;

  case 140:
   if ((VAR_41 < 16 - 256) && (VAR_42 < 16 - 256)) {
    VAR_41 = VAR_42 = 0;
    if (VAR_40->ipacket[2] & VAR_3)
     VAR_39.button |= VAR_6;
    VAR_43 = (VAR_40->ipacket[2] & VAR_4) ?
        ((VAR_40->ipacket[2] & 0x07) - 8) :
        (VAR_40->ipacket[2] & 0x07) ;
   } else {

    VAR_39.button |= VAR_39.obutton & VAR_11;
   }
   break;

  case 131:
   if (VAR_40->inputbytes == VAR_18)
    if (FUNC_12(VAR_38, VAR_40))
     goto next;

   if (FUNC_11(VAR_38, VAR_40, &VAR_39, &VAR_41, &VAR_42, &VAR_43) != 0) {
    FUNC_0(3, (VAR_2, "synaptics: "
        "packet rejected\n"));
    goto next;
   }
   break;

  case 139:
   if (FUNC_9(VAR_38, VAR_40, &VAR_39, &VAR_41, &VAR_42, &VAR_43) != 0) {
    FUNC_0(3, (VAR_2, "elantech: "
        "packet rejected\n"));
    goto next;
   }
   break;

  case 129:
  case 137:
  default:
   break;
  }
 if (VAR_38->mode.accelfactor >= 1) {
  if (VAR_41 != 0) {
   VAR_41 = VAR_41 * VAR_41 / VAR_38->mode.accelfactor;
   if (VAR_41 == 0)
    VAR_41 = 1;
   if (VAR_44 & VAR_20)
    VAR_41 = -VAR_41;
  }
  if (VAR_42 != 0) {
   VAR_42 = VAR_42 * VAR_42 / VAR_38->mode.accelfactor;
   if (VAR_42 == 0)
    VAR_42 = 1;
   if (VAR_44 & VAR_22)
    VAR_42 = -VAR_42;
  }
 }


 if (FUNC_19(&VAR_38->idletimeout) && VAR_38->idlepacket.inputbytes == 0)
  VAR_38->idlepacket = *VAR_40;

 VAR_39.dx = VAR_41;
 VAR_39.dy = VAR_42;
 VAR_39.dz = VAR_43;
 VAR_39.flags = ((VAR_41 || VAR_42 || VAR_43) ? VAR_12 : 0) |
     (VAR_39.obutton ^ VAR_39.button);

 VAR_40->inputbytes = FUNC_17(VAR_38, VAR_40, &VAR_39, VAR_40->ipacket);

 VAR_38->status.flags |= VAR_39.flags;
 VAR_38->status.dx += VAR_39.dx;
 VAR_38->status.dy += VAR_39.dy;
 VAR_38->status.dz += VAR_39.dz;
 VAR_38->status.button = VAR_39.button;
 VAR_38->button = VAR_39.button;

next_native:
 VAR_38->watchdog = VAR_1;


 if (VAR_38->queue.count + VAR_40->inputbytes < sizeof(VAR_38->queue.buf)) {
  VAR_45 = FUNC_7(VAR_40->inputbytes,
      sizeof(VAR_38->queue.buf) - VAR_38->queue.tail);
  FUNC_1(&VAR_40->ipacket[0], &VAR_38->queue.buf[VAR_38->queue.tail], VAR_45);
  if (VAR_40->inputbytes > VAR_45)
   FUNC_1(&VAR_40->ipacket[VAR_45], &VAR_38->queue.buf[0],
       VAR_40->inputbytes - VAR_45);
  VAR_38->queue.tail = (VAR_38->queue.tail + VAR_40->inputbytes) %
      sizeof(VAR_38->queue.buf);
  VAR_38->queue.count += VAR_40->inputbytes;
 }

next:
 VAR_40->inputbytes = 0;
 if (++VAR_38->pqueue_start >= VAR_26)
  VAR_38->pqueue_start = 0;
 } while (VAR_38->pqueue_start != VAR_38->pqueue_end);

 if (VAR_38->state & VAR_23) {
  VAR_38->state &= ~VAR_23;
  FUNC_21(VAR_38);
 }
 FUNC_14(&VAR_38->rsel, VAR_28);
 if (VAR_38->async != ((void*)0)) {
  FUNC_8(&VAR_38->async, VAR_33, 0);
 }
 VAR_38->state &= ~VAR_27;



 if (FUNC_19(&VAR_38->idletimeout)) {
  VAR_38->state |= VAR_27;
  FUNC_2(&VAR_38->softcallout, FUNC_20(&VAR_38->idletimeout),
      VAR_35, VAR_38);
  FUNC_0(2, (VAR_2, "softintr: callout set: %d ticks\n",
      FUNC_20(&VAR_38->idletimeout)));
 }
 FUNC_16(VAR_46);
}
