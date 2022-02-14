
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwi_softc {int sc_dev; int * txq; scalar_t__ sc_busy_timer; int flags; } ;


 int FUNC_0 (struct iwi_softc*,int ) ;
 int FUNC_1 (struct iwi_softc*,int ,int) ;
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
 int FUNC_2 (struct iwi_softc*) ;
 int VAR_12 ;
 int FUNC_3 (struct iwi_softc*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct iwi_softc*) ;
 int FUNC_6 (struct iwi_softc*) ;
 int FUNC_7 (struct iwi_softc*) ;
 int FUNC_8 (struct iwi_softc*,int *) ;
 int FUNC_9 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_13)
{
 struct iwi_softc *VAR_14 = VAR_13;
 uint32_t VAR_15;
 VAR_12;

 FUNC_2(VAR_14);

 if ((VAR_15 = FUNC_0(VAR_14, VAR_0)) == 0 || VAR_15 == 0xffffffff) {
  FUNC_3(VAR_14);
  return;
 }


 FUNC_1(VAR_14, VAR_0, VAR_15);

 if (VAR_15 & VAR_3) {
  FUNC_5(VAR_14);
  goto done;
 }

 if (VAR_15 & VAR_4) {
  if (!(VAR_15 & (VAR_3 | VAR_5)))
   FUNC_9(VAR_14);
 }

 if (VAR_15 & VAR_6)
  FUNC_6(VAR_14);

 if (VAR_15 & VAR_2) {
  VAR_14->flags &= ~VAR_1;
  VAR_14->sc_busy_timer = 0;
  FUNC_9(VAR_14);
 }

 if (VAR_15 & VAR_8)
  FUNC_8(VAR_14, &VAR_14->txq[0]);

 if (VAR_15 & VAR_9)
  FUNC_8(VAR_14, &VAR_14->txq[1]);

 if (VAR_15 & VAR_10)
  FUNC_8(VAR_14, &VAR_14->txq[2]);

 if (VAR_15 & VAR_11)
  FUNC_8(VAR_14, &VAR_14->txq[3]);

 if (VAR_15 & VAR_7)
  FUNC_7(VAR_14);

 if (VAR_15 & VAR_5) {

  FUNC_4(VAR_14->sc_dev, "parity error\n");
 }
done:
 FUNC_3(VAR_14);
}
