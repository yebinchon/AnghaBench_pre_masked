
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_bsc_softc {int sc_flags; scalar_t__ sc_totlen; } ;


 int FUNC_0 (struct bcm_bsc_softc*) ;
 int FUNC_1 (struct bcm_bsc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bcm_bsc_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct bcm_bsc_softc*,int,char*,int) ;
 int FUNC_4 (struct bcm_bsc_softc*) ;
 int FUNC_5 (struct bcm_bsc_softc*) ;
 int FUNC_6 (struct bcm_bsc_softc*) ;
 int FUNC_7 (struct bcm_bsc_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_9)
{
 struct bcm_bsc_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = (struct bcm_bsc_softc *)VAR_9;

 FUNC_0(VAR_10);


 if ((VAR_10->sc_flags & VAR_5) == 0) {
  FUNC_2(VAR_10);
  return;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_0);
 FUNC_3(VAR_10, 4, " <intrstatus=0x%08x> ", VAR_11);


 if ((VAR_10->sc_flags & VAR_8) && (VAR_11 & VAR_3))
  FUNC_4(VAR_10);


 if (VAR_11 & (VAR_2 | VAR_1)) {
  VAR_10->sc_flags |= VAR_6;
  if (VAR_11 & VAR_2)
   VAR_10->sc_flags |= VAR_7;

  FUNC_6(VAR_10);
  FUNC_7(VAR_10);
 } else if (!(VAR_10->sc_flags & VAR_8)) {





  if ((VAR_11 & VAR_4) && VAR_10->sc_totlen > 0)
   FUNC_5(VAR_10);
 }

 FUNC_2(VAR_10);
}
