
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct run_softc {int sc_flags; int * sc_epq; int sc_dev; int * rx_m; int * sc_xfer; int cmdq_key_set; int cmdq_run; int ratectl_run; } ;


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
 int FUNC_0 (struct run_softc*,int,char*) ;
 int VAR_16 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct run_softc*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct run_softc*,int) ;
 int FUNC_7 (struct run_softc*) ;
 scalar_t__ FUNC_8 (struct run_softc*,int ,int*) ;
 int FUNC_9 (struct run_softc*,int ) ;
 int FUNC_10 (struct run_softc*,int *) ;
 int FUNC_11 (struct run_softc*,int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void *VAR_20)
{
 struct run_softc *VAR_21 = (struct run_softc *)VAR_20;
 uint32_t VAR_22;
 int VAR_23;
 int VAR_24;

 FUNC_2(VAR_21, VAR_0);

 if (VAR_21->sc_flags & VAR_19)
  FUNC_9(VAR_21, 0);

 VAR_21->sc_flags &= ~VAR_19;

 VAR_21->ratectl_run = VAR_18;
 VAR_21->cmdq_run = VAR_21->cmdq_key_set;

 FUNC_3(VAR_21);

 for(VAR_23 = 0; VAR_23 < VAR_17; VAR_23++)
  FUNC_12(VAR_21->sc_xfer[VAR_23]);

 FUNC_1(VAR_21);

 FUNC_7(VAR_21);

 if (VAR_21->rx_m != ((void*)0)) {
  FUNC_5(VAR_21->rx_m);
  VAR_21->rx_m = ((void*)0);
 }


 if (FUNC_8(VAR_21, VAR_13, &VAR_22) != 0)
  return;
 VAR_22 &= ~(VAR_7 | VAR_11);
 FUNC_11(VAR_21, VAR_13, VAR_22);

 for (VAR_24 = 0; VAR_24 < 100; VAR_24++) {
  if (FUNC_8(VAR_21, VAR_13, &VAR_22) != 0)
   return;
  if ((VAR_22 & (VAR_10 | VAR_6)) == 0)
    break;
  FUNC_6(VAR_21, 10);
 }
 if (VAR_24 == 100) {
  FUNC_4(VAR_21->sc_dev, "timeout waiting for DMA engine\n");
  return;
 }


 FUNC_8(VAR_21, VAR_4, &VAR_22);
 VAR_22 &= ~(VAR_2 | VAR_5);
 FUNC_11(VAR_21, VAR_4, VAR_22);


 for (VAR_24 = 0; VAR_24 < 100; VAR_24++) {
  if (FUNC_8(VAR_21, VAR_9, &VAR_22) != 0) {
   FUNC_0(VAR_21, VAR_15 | VAR_14,
       "Cannot read Tx queue count\n");
   break;
  }
  if ((VAR_22 & VAR_8) == 0) {
   FUNC_0(VAR_21, VAR_15 | VAR_14,
       "All Tx cleared\n");
   break;
  }
  FUNC_6(VAR_21, 10);
 }
 if (VAR_24 >= 100)
  FUNC_0(VAR_21, VAR_15 | VAR_14,
      "There are still pending Tx\n");
 FUNC_6(VAR_21, 10);
 FUNC_11(VAR_21, VAR_12, 0);

 FUNC_11(VAR_21, VAR_4, VAR_1 | VAR_3);
 FUNC_11(VAR_21, VAR_4, 0);

 for (VAR_23 = 0; VAR_23 != VAR_16; VAR_23++)
  FUNC_10(VAR_21, &VAR_21->sc_epq[VAR_23]);
}
