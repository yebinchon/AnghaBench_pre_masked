
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ d_pulled_up; } ;
struct dwc_otg_softc {TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc_otg_softc*,int ) ;
 int FUNC_1 (struct dwc_otg_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_2)
{
 uint32_t VAR_3;



 if (VAR_2->sc_flags.d_pulled_up) {
  VAR_2->sc_flags.d_pulled_up = 0;

  VAR_3 = FUNC_0(VAR_2, VAR_1);
  VAR_3 |= VAR_0;
  FUNC_1(VAR_2, VAR_1, VAR_3);
 }
}
