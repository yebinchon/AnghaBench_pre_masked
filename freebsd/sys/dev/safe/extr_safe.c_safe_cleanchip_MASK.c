
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safe_softc {scalar_t__ sc_nqchip; struct safe_ringentry* sc_back; struct safe_ringentry* sc_ring; struct safe_ringentry* sc_ringtop; struct safe_ringentry* sc_front; } ;
struct TYPE_2__ {scalar_t__ d_csr; } ;
struct safe_ringentry {TYPE_1__ re_desc; } ;


 int FUNC_0 (struct safe_softc*,struct safe_ringentry*) ;

__attribute__((used)) static void
FUNC_1(struct safe_softc *VAR_0)
{

 if (VAR_0->sc_nqchip != 0) {
  struct safe_ringentry *VAR_1 = VAR_0->sc_back;

  while (VAR_1 != VAR_0->sc_front) {
   if (VAR_1->re_desc.d_csr != 0)
    FUNC_0(VAR_0, VAR_1);
   if (++VAR_1 == VAR_0->sc_ringtop)
    VAR_1 = VAR_0->sc_ring;
  }
  VAR_0->sc_back = VAR_1;
  VAR_0->sc_nqchip = 0;
 }
}
