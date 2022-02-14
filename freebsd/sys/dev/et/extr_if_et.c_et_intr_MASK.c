
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct et_softc {int sc_timer; int dev; struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_8 ;
 int FUNC_3 (struct et_softc*) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct et_softc*) ;
 int FUNC_7 (struct et_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct et_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_10)
{
 struct et_softc *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13;

 VAR_11 = VAR_10;
 FUNC_2(VAR_11);
 VAR_12 = VAR_11->ifp;
 if ((VAR_12->if_drv_flags & VAR_9) == 0)
  goto done;

 VAR_13 = FUNC_0(VAR_11, VAR_4);
 if ((VAR_13 & VAR_0) == 0)
  goto done;


 FUNC_1(VAR_11, VAR_1, 0xffffffff);

 if (VAR_13 & (VAR_3 | VAR_7)) {
  FUNC_5(VAR_11->dev, "DMA error(0x%08x) -- resetting\n",
      VAR_13);
  VAR_12->if_drv_flags &= ~VAR_9;
  FUNC_6(VAR_11);
  FUNC_3(VAR_11);
  return;
 }
 if (VAR_13 & VAR_2)
  FUNC_7(VAR_11);
 if (VAR_13 & (VAR_6 | VAR_5))
  FUNC_9(VAR_11);
 if (VAR_13 & VAR_5)
  FUNC_1(VAR_11, VAR_8, VAR_11->sc_timer);
 if (VAR_12->if_drv_flags & VAR_9) {
  FUNC_1(VAR_11, VAR_1, ~VAR_0);
  if (!FUNC_4(&VAR_12->if_snd))
   FUNC_8(VAR_12);
 }
done:
 FUNC_3(VAR_11);
}
