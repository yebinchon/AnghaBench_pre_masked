
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubser_softc {scalar_t__ sc_curr_tx_unit; scalar_t__ sc_numser; } ;



__attribute__((used)) static __inline void
FUNC_0(struct ubser_softc *VAR_0)
{
 VAR_0->sc_curr_tx_unit++;
 if (VAR_0->sc_curr_tx_unit >= VAR_0->sc_numser) {
  VAR_0->sc_curr_tx_unit = 0;
 }
}
