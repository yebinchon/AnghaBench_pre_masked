
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int sc_scan_last_antenna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwm_softc*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct iwm_softc *VAR_6, int VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = 0, VAR_11 = VAR_6->sc_scan_last_antenna;
     VAR_10 < VAR_3; VAR_10++) {
  VAR_11 = (VAR_11 + 1) % VAR_3;
  if (FUNC_1(VAR_6) & (1 << VAR_11)) {
   VAR_6->sc_scan_last_antenna = VAR_11;
   break;
  }
 }
 VAR_9 = (1 << VAR_6->sc_scan_last_antenna) << VAR_4;

 if ((VAR_7 & VAR_0) && !VAR_8)
  return FUNC_0(VAR_1 | VAR_5 |
       VAR_9);
 else
  return FUNC_0(VAR_2 | VAR_9);
}
