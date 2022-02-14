
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rb_rxdesc; int rb_rxd; } ;
struct hme_softc {int sc_flags; TYPE_1__ sc_rb; } ;


 int FUNC_0 (struct hme_softc*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int,int) ;

__attribute__((used)) static __inline void
FUNC_3(struct hme_softc *VAR_2, int VAR_3)
{





 FUNC_2(VAR_2->sc_flags & VAR_0, VAR_2->sc_rb.rb_rxd,
     VAR_3, VAR_1 | FUNC_1(FUNC_0(VAR_2,
     &VAR_2->sc_rb.rb_rxdesc[VAR_3])));
}
