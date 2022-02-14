
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; TYPE_1__* sc_channel; } ;
struct TYPE_2__ {int reg_cicr; int need_reg_write; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct ti_sdma_softc*) ;
 int FUNC_3 (struct ti_sdma_softc*) ;
 int FUNC_4 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_3 ;
 int FUNC_5 (struct ti_sdma_softc*,int ,int) ;

int
FUNC_6(unsigned int VAR_4)
{
 struct ti_sdma_softc *VAR_5 = VAR_3;
 uint32_t VAR_6;
 unsigned int VAR_7;


 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_2(VAR_5);

 if ((VAR_5->sc_active_channels & (1 << VAR_4)) == 0) {
  FUNC_3(VAR_5);
  return (VAR_0);
 }


 VAR_5->sc_channel[VAR_4].reg_cicr = 0x0000;
 FUNC_5(VAR_5, FUNC_0(VAR_4), 0x0000);


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_4(VAR_5, FUNC_1(VAR_7));
  VAR_6 &= ~(1 << VAR_4);

  FUNC_5(VAR_5, FUNC_1(VAR_7), VAR_6);
 }


 VAR_5->sc_channel[VAR_4].need_reg_write = 1;

 FUNC_3(VAR_5);

 return (0);
}
