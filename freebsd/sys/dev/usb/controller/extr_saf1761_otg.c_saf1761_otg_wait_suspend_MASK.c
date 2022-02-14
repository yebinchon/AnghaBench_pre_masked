
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct saf1761_otg_softc {int sc_intr_enable; } ;


 int FUNC_0 (struct saf1761_otg_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct saf1761_otg_softc *VAR_3, uint8_t VAR_4)
{
 if (VAR_4) {
  VAR_3->sc_intr_enable |= VAR_2;
  VAR_3->sc_intr_enable &= ~VAR_1;
 } else {
  VAR_3->sc_intr_enable &= ~VAR_2;
  VAR_3->sc_intr_enable |= VAR_1;
 }
 FUNC_0(VAR_3, VAR_0, VAR_3->sc_intr_enable);
}
