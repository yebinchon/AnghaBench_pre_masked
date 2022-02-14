
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {int jme_morework; int jme_rxcsr; int jme_int_task; int jme_tq; int jme_process_limit; struct ifnet* jme_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
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
 int FUNC_3 (struct jme_softc*) ;
 int VAR_11 ;
 int FUNC_4 (struct jme_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct jme_softc*,int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_14, int VAR_15)
{
 struct jme_softc *VAR_16;
 struct ifnet *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 VAR_16 = (struct jme_softc *)VAR_14;
 VAR_17 = VAR_16->jme_ifp;

 FUNC_3(VAR_16);
 VAR_18 = FUNC_0(VAR_16, VAR_10);
 if (VAR_16->jme_morework != 0) {
  VAR_16->jme_morework = 0;
  VAR_18 |= VAR_1 | VAR_2;
 }
 if ((VAR_18 & VAR_8) == 0 || VAR_18 == 0xFFFFFFFF)
  goto done;

 VAR_18 &= ~(VAR_7 | VAR_3);
 if ((VAR_18 & (VAR_5 | VAR_6)) != 0)
  VAR_18 |= VAR_5 | VAR_6 | VAR_7;
 if ((VAR_18 & (VAR_1 | VAR_2)) != 0)
  VAR_18 |= VAR_1 | VAR_2 | VAR_3;
 FUNC_1(VAR_16, VAR_10, VAR_18);
 VAR_19 = 0;
 if ((VAR_17->if_drv_flags & VAR_0) != 0) {
  if ((VAR_18 & (VAR_1 | VAR_2)) != 0) {
   VAR_19 = FUNC_5(VAR_16, VAR_16->jme_process_limit);
   if (VAR_19 != 0)
    VAR_16->jme_morework = 1;
  }
  if ((VAR_18 & VAR_4) != 0) {
   FUNC_1(VAR_16, VAR_11, VAR_16->jme_rxcsr |
       VAR_13 | VAR_12);
  }
  if (!FUNC_2(&VAR_17->if_snd))
   FUNC_6(VAR_17);
 }

 if (VAR_19 != 0 || (FUNC_0(VAR_16, VAR_10) & VAR_8) != 0) {
  FUNC_7(VAR_16->jme_tq, &VAR_16->jme_int_task);
  FUNC_4(VAR_16);
  return;
 }
done:
 FUNC_4(VAR_16);


 FUNC_1(VAR_16, VAR_9, VAR_8);
}
