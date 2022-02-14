
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct dwc_otg_softc {TYPE_1__* sc_chan_state; } ;
struct TYPE_2__ {scalar_t__ hcint; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct dwc_otg_softc*,int ) ;
 int FUNC_2 (struct dwc_otg_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct dwc_otg_softc *VAR_0, uint8_t VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = FUNC_1(VAR_0, FUNC_0(VAR_1));
 FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_2);


 VAR_0->sc_chan_state[VAR_1].hcint = 0;
}
