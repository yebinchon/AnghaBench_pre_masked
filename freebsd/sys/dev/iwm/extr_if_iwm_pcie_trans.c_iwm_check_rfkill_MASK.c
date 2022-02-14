
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int ) ;

int
FUNC_1(struct iwm_softc *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = (VAR_4 & VAR_1) == 0;
 if (VAR_5) {
  VAR_3->sc_flags |= VAR_2;
 } else {
  VAR_3->sc_flags &= ~VAR_2;
 }

 return VAR_5;
}
