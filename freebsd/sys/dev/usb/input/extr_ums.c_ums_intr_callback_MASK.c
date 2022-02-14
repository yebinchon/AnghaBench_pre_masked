
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef unsigned long uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_4__ {int * fp; } ;
struct TYPE_3__ {unsigned long button; unsigned long dx; unsigned long dy; unsigned long dz; } ;
struct ums_softc {int* sc_temp; int sc_evflags; TYPE_2__ sc_fifo; int sc_callout; struct ums_info* sc_info; TYPE_1__ sc_status; int sc_iid; } ;
struct ums_info {int sc_flags; int sc_iid_w; int sc_iid_x; int sc_iid_y; int sc_iid_z; int sc_iid_t; int sc_buttons; int* sc_iid_btn; int * sc_loc_btn; int sc_loc_t; int sc_loc_z; int sc_loc_y; int sc_loc_x; int sc_loc_w; } ;
typedef unsigned long int32_t ;


 int FUNC_0 (int,char*,...) ;
 unsigned long FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct usb_xfer*) ;


 unsigned long FUNC_3 (int*,int,int *) ;
 int VAR_10 ;
 int FUNC_4 (struct ums_softc*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_5 (struct ums_softc*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_11 ;
 int FUNC_6 (int *,int,int *,struct ums_softc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,int ) ;
 int FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int ,int ) ;
 int FUNC_14 (struct usb_xfer*) ;
 struct ums_softc* FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_17(struct usb_xfer *VAR_12, usb_error_t VAR_13)
{
 struct ums_softc *VAR_14 = FUNC_15(VAR_12);
 struct ums_info *VAR_15 = &VAR_14->sc_info[0];
 struct usb_page_cache *VAR_16;
 uint8_t *VAR_17 = VAR_14->sc_temp;
 int32_t VAR_18 = 0;
 int32_t VAR_19 = 0;



 int32_t VAR_20 = 0;
 int32_t VAR_21 = 0;
 int32_t VAR_22 = 0;
 int32_t VAR_23 = 0;
 int32_t VAR_24 = 0;
 uint8_t VAR_25;
 uint8_t VAR_26;
 int VAR_27;

 FUNC_16(VAR_12, &VAR_27, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_12)) {
 case 128:
  FUNC_0(6, "sc=%p actlen=%d\n", VAR_14, VAR_27);

  if (VAR_27 > (int)sizeof(VAR_14->sc_temp)) {
   FUNC_0(6, "truncating large packet to %zu bytes\n",
       sizeof(VAR_14->sc_temp));
   VAR_27 = sizeof(VAR_14->sc_temp);
  }
  if (VAR_27 == 0)
   goto tr_setup;

  VAR_16 = FUNC_11(VAR_12, 0);
  FUNC_9(VAR_16, 0, VAR_17, VAR_27);

  FUNC_0(6, "data = %02x %02x %02x %02x "
      "%02x %02x %02x %02x\n",
      (VAR_27 > 0) ? VAR_17[0] : 0, (VAR_27 > 1) ? VAR_17[1] : 0,
      (VAR_27 > 2) ? VAR_17[2] : 0, (VAR_27 > 3) ? VAR_17[3] : 0,
      (VAR_27 > 4) ? VAR_17[4] : 0, (VAR_27 > 5) ? VAR_17[5] : 0,
      (VAR_27 > 6) ? VAR_17[6] : 0, (VAR_27 > 7) ? VAR_17[7] : 0);

  if (VAR_14->sc_iid) {
   VAR_26 = *VAR_17;

   VAR_27--;
   VAR_17++;

  } else {
   VAR_26 = 0;
   if (VAR_14->sc_info[0].sc_flags & VAR_1) {
    if ((*VAR_17 == 0x14) || (*VAR_17 == 0x15)) {
     goto tr_setup;
    }
   }
  }

 repeat:
  if ((VAR_15->sc_flags & VAR_3) &&
      (VAR_26 == VAR_15->sc_iid_w))
   VAR_20 += FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_w);

  if ((VAR_15->sc_flags & VAR_4) &&
      (VAR_26 == VAR_15->sc_iid_x))
   VAR_21 += FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_x);

  if ((VAR_15->sc_flags & VAR_5) &&
      (VAR_26 == VAR_15->sc_iid_y))
   VAR_22 -= FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_y);

  if ((VAR_15->sc_flags & VAR_6) &&
      (VAR_26 == VAR_15->sc_iid_z)) {
   int32_t VAR_28;
   VAR_28 = FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_z);
   if (VAR_15->sc_flags & VAR_0)
    VAR_28 = -VAR_28;
   VAR_23 -= VAR_28;
  }

  if ((VAR_15->sc_flags & VAR_2) &&
      (VAR_26 == VAR_15->sc_iid_t)) {
   VAR_24 += FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_t);

   VAR_19 |= (1UL << 5) | (1UL << 6);
  }

  for (VAR_25 = 0; VAR_25 < VAR_15->sc_buttons; VAR_25++) {
   uint32_t VAR_29;
   VAR_29 = 1UL << FUNC_1(VAR_25);

   if (VAR_26 != VAR_15->sc_iid_btn[VAR_25])
    continue;

   if (FUNC_3(VAR_17, VAR_27, &VAR_15->sc_loc_btn[VAR_25]))
    VAR_18 |= VAR_29;

   VAR_19 |= VAR_29;
  }

  if (++VAR_15 != &VAR_14->sc_info[VAR_7])
   goto repeat;





  VAR_18 |= VAR_14->sc_status.button & ~VAR_19;

  if (VAR_21 || VAR_22 || VAR_23 || VAR_24 || VAR_20 ||
      (VAR_18 != VAR_14->sc_status.button)) {

   FUNC_0(6, "x:%d y:%d z:%d t:%d w:%d buttons:0x%08x\n",
       VAR_21, VAR_22, VAR_23, VAR_24, VAR_20, VAR_18);


   if (VAR_24 > 0) {
    FUNC_5(VAR_14, 0, 0, 0, 0, VAR_18);
    VAR_18 |= 1UL << 6;
   } else if (VAR_24 < 0) {
    FUNC_5(VAR_14, 0, 0, 0, 0, VAR_18);
    VAR_18 |= 1UL << 5;
   }

   VAR_14->sc_status.button = VAR_18;
   VAR_14->sc_status.dx += VAR_21;
   VAR_14->sc_status.dy += VAR_22;
   VAR_14->sc_status.dz += VAR_23;
   if ((VAR_14->sc_info[0].sc_flags & VAR_1) &&
       (VAR_21 == 0) && (VAR_22 == 0) && (VAR_23 == 0) && (VAR_24 == 0) &&
       (VAR_20 == 0) && (VAR_18 == 0)) {

    FUNC_6(&VAR_14->sc_callout, VAR_10 / 20,
        &VAR_11, VAR_14);
   } else {

    FUNC_7(&VAR_14->sc_callout);

    FUNC_5(VAR_14, VAR_21, VAR_22, VAR_23, VAR_24, VAR_18);





   }
  }
 case 129:
tr_setup:

  if (FUNC_8(VAR_14->sc_fifo.fp[VAR_9]) == 0) {




   break;

  }

  FUNC_13(VAR_12, 0, FUNC_12(VAR_12));
  FUNC_10(VAR_12);
  break;

 default:
  if (VAR_13 != VAR_8) {

   FUNC_14(VAR_12);
   goto tr_setup;
  }
  break;
 }
}
