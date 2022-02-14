
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int d_pulled_up; scalar_t__ port_powered; } ;
struct uss820dci_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uss820dci_softc*,int ) ;
 int FUNC_2 (struct uss820dci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct uss820dci_softc *VAR_2)
{
 uint8_t VAR_3;



 if (!VAR_2->sc_flags.d_pulled_up &&
     VAR_2->sc_flags.port_powered) {
  VAR_2->sc_flags.d_pulled_up = 1;

  FUNC_0("\n");

  VAR_3 = FUNC_1(VAR_2, VAR_0);
  VAR_3 |= VAR_1;
  FUNC_2(VAR_2, VAR_0, VAR_3);
 }
}
