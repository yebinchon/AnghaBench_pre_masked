
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uchcom_softc {int sc_dtr; int sc_rts; int sc_msr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct uchcom_softc *VAR_2, uint8_t VAR_3)
{
 VAR_2->sc_dtr = !(VAR_3 & VAR_0);
 VAR_2->sc_rts = !(VAR_3 & VAR_1);

 VAR_3 = ~VAR_3 & 0x0F;
 VAR_2->sc_msr = (VAR_3 << 4) | ((VAR_2->sc_msr >> 4) ^ VAR_3);
}
