
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct iic_msg {int slave; int flags; size_t len; } ;
struct bcm_bsc_softc {int sc_flags; size_t sc_replen; size_t sc_totlen; int sc_mtx; struct iic_msg* sc_curmsg; scalar_t__ sc_resid; } ;
typedef struct bcm_bsc_softc* device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm_bsc_softc*) ;
 size_t FUNC_1 (struct bcm_bsc_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct bcm_bsc_softc*) ;
 int FUNC_3 (struct bcm_bsc_softc*,int ,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct bcm_bsc_softc*,int,char*,int) ;
 int FUNC_5 (struct bcm_bsc_softc*,int,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct bcm_bsc_softc*) ;
 int FUNC_7 (struct bcm_bsc_softc*) ;
 struct bcm_bsc_softc* FUNC_8 (struct bcm_bsc_softc*) ;
 int VAR_17 ;
 int FUNC_9 (struct bcm_bsc_softc*,int *,int ,char*,int ) ;
 int FUNC_10 (struct bcm_bsc_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_18, struct iic_msg *VAR_19, uint32_t VAR_20)
{
 struct bcm_bsc_softc *VAR_21;
 struct iic_msg *VAR_22, *VAR_23;
 uint32_t VAR_24, VAR_25;
 int VAR_26;
 uint16_t VAR_27;
 uint8_t VAR_28, VAR_29, VAR_30, VAR_31;

 VAR_21 = FUNC_8(VAR_18);
 FUNC_0(VAR_21);


 while (VAR_21->sc_flags & VAR_10)
  FUNC_9(VAR_18, &VAR_21->sc_mtx, 0, "bscbusw", 0);


 VAR_21->sc_flags = VAR_10;

 FUNC_5(VAR_21, 3, "Transfer %d msgs\n", VAR_20);


 FUNC_7(VAR_21);
 VAR_26 = 0;
 VAR_21->sc_resid = 0;
 VAR_21->sc_curmsg = VAR_19;
 VAR_22 = &VAR_19[VAR_20];
 while (VAR_21->sc_curmsg < VAR_22) {
  VAR_24 = 0;
  VAR_29 = VAR_21->sc_curmsg->slave >> 1;
  VAR_28 = VAR_21->sc_curmsg->flags & VAR_15;
  VAR_21->sc_replen = 0;
  VAR_21->sc_totlen = VAR_21->sc_curmsg->len;




  for (VAR_23 = VAR_21->sc_curmsg + 1; VAR_23 < VAR_22; ++VAR_23) {
   VAR_31 = VAR_23->slave >> 1;
   if (VAR_29 == VAR_31) {
    VAR_30 = VAR_23->flags & VAR_15;
    if (VAR_28 == VAR_30) {





     VAR_21->sc_totlen += VAR_23->len;
     continue;
    } else if (VAR_28 == VAR_16) {







     VAR_28 = VAR_15;
     VAR_21->sc_replen = VAR_21->sc_totlen;
     VAR_21->sc_totlen += VAR_23->len;
     continue;
    }
   }
   break;
  }





  VAR_28 = (VAR_21->sc_curmsg->flags & VAR_15) ? 1 : 0;
  VAR_29 = VAR_21->sc_curmsg->slave | VAR_28;


  FUNC_3(VAR_21, VAR_6, VAR_29 >> 1);

  FUNC_5(VAR_21, 2, "start  0x%02x\n", VAR_29);







  if (VAR_21->sc_replen == 0) {
   FUNC_5(VAR_21, 1, "%-6s 0x%02x len %d: ",
       (VAR_28) ? "read" : "write", VAR_29,
       VAR_21->sc_totlen);
   VAR_27 = VAR_21->sc_totlen;
   if (VAR_28) {
    VAR_24 = VAR_3;
    VAR_21->sc_flags |= VAR_13;
   } else {
    VAR_24 = 0;
    VAR_21->sc_flags &= ~VAR_13;
   }
  } else {
   FUNC_5(VAR_21, 1, "%-6s 0x%02x len %d: ",
       (VAR_28) ? "read" : "write", VAR_29,
       VAR_21->sc_replen);
   FUNC_3(VAR_21, VAR_5, VAR_21->sc_replen);
   FUNC_3(VAR_21, VAR_0, VAR_1 |
       VAR_4);
   do {
    VAR_25 = FUNC_1(VAR_21, VAR_7);
    if (VAR_25 & VAR_8) {

     VAR_26 = VAR_14;
     goto xfer_done;
    }
   } while ((VAR_25 & VAR_9) == 0);





   VAR_27 = VAR_21->sc_totlen - VAR_21->sc_replen;
   VAR_24 = VAR_3;
   VAR_21->sc_flags &= ~VAR_13;
  }
  FUNC_3(VAR_21, VAR_5, VAR_27);
  FUNC_3(VAR_21, VAR_0, VAR_24 | VAR_1 |
      VAR_4 | VAR_2);

  if (!(VAR_21->sc_curmsg->flags & VAR_15)) {
   FUNC_6(VAR_21);
  }


  while (VAR_26 == 0 && !(VAR_21->sc_flags & VAR_11)) {
   VAR_26 = FUNC_9(VAR_21, &VAR_21->sc_mtx, 0, "bsciow", VAR_17);
  }

  if (VAR_26 == 0 && (VAR_21->sc_flags & VAR_12))
   VAR_26 = VAR_14;
xfer_done:
  FUNC_4(VAR_21, 1, " err=%d\n", VAR_26);
  FUNC_5(VAR_21, 2, "stop\n");
  if (VAR_26 != 0)
   break;
 }


 FUNC_7(VAR_21);


 VAR_21->sc_flags = 0;


 FUNC_10(VAR_18);

 FUNC_2(VAR_21);

 return (VAR_26);
}
