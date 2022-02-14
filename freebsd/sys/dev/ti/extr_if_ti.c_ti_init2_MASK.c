
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ifmedia {int ifm_media; TYPE_1__* ifm_cur; } ;
struct ti_softc {scalar_t__ ti_hwrev; struct ifmedia ifmedia; int ti_watchdog; scalar_t__ ti_rx_saved_considx; int ti_dev; struct ifnet* ti_ifp; } ;
struct ti_cmd_desc {int dummy; } ;
struct ifnet {scalar_t__ if_mtu; int if_flags; int if_drv_flags; } ;
struct TYPE_2__ {int ifm_media; } ;


 int FUNC_0 (struct ti_softc*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_1 (struct ifnet*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_3 (struct ti_softc*) ;
 int VAR_23 ;
 int FUNC_4 (int *,int ,int ,struct ti_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_24 ;
 int FUNC_7 (struct ti_softc*) ;
 scalar_t__ FUNC_8 (struct ti_softc*) ;
 scalar_t__ FUNC_9 (struct ti_softc*) ;
 scalar_t__ FUNC_10 (struct ti_softc*) ;
 int FUNC_11 (struct ti_softc*) ;
 int FUNC_12 (struct ti_softc*) ;
 int VAR_25 ;

__attribute__((used)) static void FUNC_13(struct ti_softc *VAR_26)
{
 struct ti_cmd_desc VAR_27;
 struct ifnet *VAR_28;
 uint8_t *VAR_29;
 struct ifmedia *VAR_30;
 int VAR_31;

 FUNC_3(VAR_26);

 VAR_28 = VAR_26->ti_ifp;


 FUNC_0(VAR_26, VAR_16, FUNC_5(VAR_26->ti_dev));
 FUNC_0(VAR_26, VAR_17, VAR_28->if_mtu +
     VAR_2 + VAR_1 + VAR_3);
 FUNC_2(VAR_15, 0, 0);


 VAR_29 = FUNC_1(VAR_26->ti_ifp);
 FUNC_0(VAR_26, VAR_18, (VAR_29[0] << 8) | VAR_29[1]);
 FUNC_0(VAR_26, VAR_19,
     (VAR_29[2] << 24) | (VAR_29[3] << 16) | (VAR_29[4] << 8) | VAR_29[5]);
 FUNC_2(VAR_13, 0, 0);


 if (VAR_28->if_flags & VAR_6) {
  FUNC_2(VAR_14, VAR_9, 0);
 } else {
  FUNC_2(VAR_14, VAR_8, 0);
 }


 FUNC_12(VAR_26);





 if (VAR_26->ti_hwrev == VAR_21) {
  FUNC_2(VAR_11, VAR_7, 0);
 }


 if (FUNC_10(VAR_26) != 0) {

  FUNC_6(VAR_26->ti_dev, "no memory for std Rx buffers.\n");
  return;
 }


 if (VAR_28->if_mtu > VAR_0 + VAR_2 + VAR_3) {
  if (FUNC_8(VAR_26) != 0) {

   FUNC_6(VAR_26->ti_dev,
       "no memory for jumbo Rx buffers.\n");
   return;
  }
 }





 if (VAR_26->ti_hwrev == VAR_22) {
  if (FUNC_9(VAR_26) != 0) {

   FUNC_6(VAR_26->ti_dev,
       "no memory for mini Rx buffers.\n");
   return;
  }
 }

 FUNC_0(VAR_26, VAR_20, 0);
 VAR_26->ti_rx_saved_considx = 0;


 FUNC_11(VAR_26);


 FUNC_2(VAR_12, VAR_10, 0);


 FUNC_0(VAR_26, VAR_23, 0);

 VAR_28->if_drv_flags |= VAR_5;
 VAR_28->if_drv_flags &= ~VAR_4;
 FUNC_4(&VAR_26->ti_watchdog, VAR_24, VAR_25, VAR_26);







 VAR_30 = &VAR_26->ifmedia;
 VAR_31 = VAR_30->ifm_media;
 VAR_30->ifm_media = VAR_30->ifm_cur->ifm_media;
 FUNC_7(VAR_26);
 VAR_30->ifm_media = VAR_31;
}
