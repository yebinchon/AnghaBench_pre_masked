
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; TYPE_1__* sc_channel; } ;
struct TYPE_2__ {int reg_cicr; int need_reg_write; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ti_sdma_softc*) ;
 int FUNC_3 (struct ti_sdma_softc*) ;
 int FUNC_4 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_6 ;
 int FUNC_5 (struct ti_sdma_softc*,int ,int) ;

int
FUNC_6(unsigned int VAR_7, uint32_t VAR_8)
{
 struct ti_sdma_softc *VAR_9 = VAR_6;
 uint32_t VAR_10;


 if (VAR_9 == ((void*)0))
  return (VAR_5);

 FUNC_2(VAR_9);

 if ((VAR_9->sc_active_channels & (1 << VAR_7)) == 0) {
  FUNC_3(VAR_9);
  return (VAR_4);
 }


 VAR_8 |= VAR_3 | VAR_1 |
          VAR_2 | VAR_0;

 VAR_9->sc_channel[VAR_7].reg_cicr = VAR_8;


 FUNC_5(VAR_9, FUNC_0(VAR_7), VAR_8);


 VAR_10 = FUNC_4(VAR_9, FUNC_1(0));
 VAR_10 |= (1 << VAR_7);

 FUNC_5(VAR_9, FUNC_1(0), VAR_10);


 VAR_9->sc_channel[VAR_7].need_reg_write = 1;

 FUNC_3(VAR_9);

 return (0);
}
