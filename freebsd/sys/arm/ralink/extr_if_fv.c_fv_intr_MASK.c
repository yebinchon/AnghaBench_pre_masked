
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_snd; } ;
struct fv_softc {int sc_inten; int sc_rxint_mask; int sc_txint_mask; int fv_dev; struct ifnet* fv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct fv_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fv_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct fv_softc*) ;
 int FUNC_3 (struct fv_softc*) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct fv_softc*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct fv_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_9)
{
 struct fv_softc *VAR_10 = VAR_9;
 uint32_t VAR_11;
 struct ifnet *VAR_12 = VAR_10->fv_ifp;

 FUNC_2(VAR_10);

 VAR_11 = FUNC_0(VAR_10, VAR_1);

 while((VAR_11 & VAR_10->sc_inten) != 0) {
  if (VAR_11) {
   FUNC_1(VAR_10, VAR_1, VAR_11);
  }
  if (VAR_11 & VAR_8) {
   FUNC_5(VAR_10->fv_dev, "Transmit Underflow\n");
  }
  if (VAR_11 & VAR_10->sc_rxint_mask) {
   FUNC_6(VAR_10);
  }
  if (VAR_11 & VAR_10->sc_txint_mask) {
   FUNC_8(VAR_10);
  }
  if (VAR_11 & VAR_7) {
   FUNC_5(VAR_10->fv_dev, "Abnormal Interrupt %x\n",
       VAR_11);
  }
  FUNC_1(VAR_10, VAR_0, VAR_2 |
      (1 << VAR_6) | (3 << VAR_4) |
      (2 << VAR_5) | (2 << VAR_3));


  VAR_11 = FUNC_0(VAR_10, VAR_1);
 }


 if (!FUNC_4(&VAR_12->if_snd))
  FUNC_7(VAR_12);

 FUNC_3(VAR_10);
}
