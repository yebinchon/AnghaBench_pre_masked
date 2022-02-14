
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {scalar_t__ ste_tx_thresh; int ste_dev; struct ifnet* ste_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ste_softc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ste_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,char*,scalar_t__,...) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct ste_softc*) ;
 int FUNC_7 (struct ste_softc*) ;
 int FUNC_8 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_9(struct ste_softc *VAR_13)
{
 uint16_t VAR_14;
 struct ifnet *VAR_15;

 FUNC_2(VAR_13);

 VAR_15 = VAR_13->ste_ifp;
 for (;;) {
  VAR_14 = FUNC_0(VAR_13, VAR_12);
  if ((VAR_14 & VAR_10) == 0)
   break;
  if ((VAR_14 & (VAR_11 |
      VAR_7 | VAR_8 |
      VAR_9)) != 0) {
   FUNC_5(VAR_15, VAR_0, 1);




   if ((VAR_14 & VAR_11) != 0 &&
       VAR_13->ste_tx_thresh < VAR_6) {
    VAR_13->ste_tx_thresh += VAR_5;
    if (VAR_13->ste_tx_thresh > VAR_6)
     VAR_13->ste_tx_thresh = VAR_6;
    FUNC_4(VAR_13->ste_dev,
        "TX underrun, increasing TX"
        " start threshold to %d bytes\n",
        VAR_13->ste_tx_thresh);

    FUNC_3(VAR_13, VAR_2,
        VAR_3);
    FUNC_8(VAR_13);
    VAR_15->if_drv_flags &= ~VAR_1;
    FUNC_6(VAR_13);
    break;
   }

   FUNC_7(VAR_13);
  }
  FUNC_1(VAR_13, VAR_12, VAR_14);
 }
}
