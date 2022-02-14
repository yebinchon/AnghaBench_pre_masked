
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sdma_softc {int sc_active_channels; TYPE_1__* sc_channel; } ;
struct TYPE_2__ {int need_reg_write; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct ti_sdma_softc*) ;
 int FUNC_5 (struct ti_sdma_softc*) ;
 struct ti_sdma_softc* VAR_4 ;
 int FUNC_6 (struct ti_sdma_softc*,int ,int) ;

int
FUNC_7(unsigned int VAR_5)
{
 struct ti_sdma_softc *VAR_6 = VAR_4;
 unsigned int VAR_7;


 if (VAR_6 == ((void*)0))
  return (VAR_2);

 FUNC_4(VAR_6);

 if ((VAR_6->sc_active_channels & (1 << VAR_5)) == 0) {
  FUNC_5(VAR_6);
  return (VAR_1);
 }


 FUNC_6(VAR_6, FUNC_1(VAR_5), 0);


 FUNC_6(VAR_6, FUNC_0(VAR_5), 0);


 FUNC_6(VAR_6, FUNC_2(VAR_5), VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_6(VAR_6, FUNC_3(VAR_7), (1 << VAR_5));
 }


 VAR_6->sc_channel[VAR_5].need_reg_write = 1;

 FUNC_5(VAR_6);

 return (0);
}
