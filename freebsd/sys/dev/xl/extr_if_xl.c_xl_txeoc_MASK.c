
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_4__ {int xl_tx_cons; TYPE_1__* xl_tx_head; struct xl_chain* xl_tx_chain; scalar_t__ xl_tx_cnt; } ;
struct xl_softc {scalar_t__ xl_type; int xl_wdog_timer; int xl_tx_thresh; int xl_dev; TYPE_2__ xl_cdata; } ;
struct xl_chain {int xl_phys; } ;
struct TYPE_3__ {int xl_phys; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int) ;
 int FUNC_2 (struct xl_softc*,int ,int) ;
 int FUNC_3 (struct xl_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct xl_softc*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_7(struct xl_softc *VAR_16)
{
 u_int8_t VAR_17;

 FUNC_4(VAR_16);

 while ((VAR_17 = FUNC_0(VAR_16, VAR_14))) {
  if (VAR_17 & VAR_12 ||
   VAR_17 & VAR_10 ||
   VAR_17 & VAR_11) {
   FUNC_5(VAR_16->xl_dev,
       "transmission error: 0x%02x\n", VAR_17);
   FUNC_2(VAR_16, VAR_5, VAR_3);
   FUNC_6(VAR_16);
   if (VAR_16->xl_type == VAR_15) {
    if (VAR_16->xl_cdata.xl_tx_cnt) {
     int VAR_18;
     struct xl_chain *VAR_19;

     VAR_18 = VAR_16->xl_cdata.xl_tx_cons;
     VAR_19 = &VAR_16->xl_cdata.xl_tx_chain[VAR_18];
     FUNC_3(VAR_16, VAR_6,
         VAR_19->xl_phys);
     FUNC_1(VAR_16, VAR_7, 64);
     VAR_16->xl_wdog_timer = 5;
    }
   } else {
    if (VAR_16->xl_cdata.xl_tx_head != ((void*)0)) {
     FUNC_3(VAR_16, VAR_6,
         VAR_16->xl_cdata.xl_tx_head->xl_phys);
     VAR_16->xl_wdog_timer = 5;
    }
   }




   FUNC_1(VAR_16, VAR_13, VAR_9 >> 8);
   if (VAR_17 & VAR_12 &&
       VAR_16->xl_tx_thresh < VAR_9) {
    VAR_16->xl_tx_thresh += VAR_8;
    FUNC_5(VAR_16->xl_dev,
"tx underrun, increasing tx start threshold to %d bytes\n", VAR_16->xl_tx_thresh);
   }
   FUNC_2(VAR_16, VAR_5,
       VAR_4|VAR_16->xl_tx_thresh);
   if (VAR_16->xl_type == VAR_15) {
    FUNC_2(VAR_16, VAR_5,
    VAR_1|(VAR_9 >> 4));
   }
   FUNC_2(VAR_16, VAR_5, VAR_2);
   FUNC_2(VAR_16, VAR_5, VAR_0);
  } else {
   FUNC_2(VAR_16, VAR_5, VAR_2);
   FUNC_2(VAR_16, VAR_5, VAR_0);
  }




  FUNC_1(VAR_16, VAR_14, 0x01);
 }
}
