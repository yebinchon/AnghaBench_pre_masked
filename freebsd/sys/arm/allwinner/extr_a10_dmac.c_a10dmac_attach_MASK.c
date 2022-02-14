
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a10dmac_softc {int sc_mtx; int * sc_res; int sc_ih; TYPE_1__* sc_ddma_channels; TYPE_1__* sc_ndma_channels; } ;
typedef int device_t ;
typedef int clk_t ;
struct TYPE_2__ {unsigned int ch_index; int ch_regoff; int * ch_callbackarg; int * ch_callback; int ch_type; struct a10dmac_softc* ch_sc; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct a10dmac_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int,int *,int ,struct a10dmac_softc*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 struct a10dmac_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_14)
{
 struct a10dmac_softc *VAR_15;
 unsigned int VAR_16;
 clk_t VAR_17;
 int VAR_18;

 VAR_15 = FUNC_11(VAR_14);

 if (FUNC_6(VAR_14, VAR_13, VAR_15->sc_res)) {
  FUNC_12(VAR_14, "cannot allocate resources for device\n");
  return (VAR_7);
 }

 FUNC_14(&VAR_15->sc_mtx, "a10 dmac", ((void*)0), VAR_10);


 VAR_18 = FUNC_10(VAR_14, 0, 0, &VAR_17);
 if (VAR_18 != 0) {
  FUNC_12(VAR_14, "cannot get clock\n");
  return (VAR_18);
 }
 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18 != 0) {
  FUNC_12(VAR_14, "cannot enable clock\n");
  return (VAR_18);
 }


 FUNC_3(VAR_15, VAR_1, 0);
 FUNC_3(VAR_15, VAR_2, ~0);


 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  VAR_15->sc_ndma_channels[VAR_16].ch_sc = VAR_15;
  VAR_15->sc_ndma_channels[VAR_16].ch_index = VAR_16;
  VAR_15->sc_ndma_channels[VAR_16].ch_type = VAR_5;
  VAR_15->sc_ndma_channels[VAR_16].ch_callback = ((void*)0);
  VAR_15->sc_ndma_channels[VAR_16].ch_callbackarg = ((void*)0);
  VAR_15->sc_ndma_channels[VAR_16].ch_regoff = FUNC_1(VAR_16);
  FUNC_2(&VAR_15->sc_ndma_channels[VAR_16], VAR_3, 0);
 }
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_15->sc_ddma_channels[VAR_16].ch_sc = VAR_15;
  VAR_15->sc_ddma_channels[VAR_16].ch_index = VAR_16;
  VAR_15->sc_ddma_channels[VAR_16].ch_type = VAR_4;
  VAR_15->sc_ddma_channels[VAR_16].ch_callback = ((void*)0);
  VAR_15->sc_ddma_channels[VAR_16].ch_callbackarg = ((void*)0);
  VAR_15->sc_ddma_channels[VAR_16].ch_regoff = FUNC_0(VAR_16);
  FUNC_2(&VAR_15->sc_ddma_channels[VAR_16], VAR_0, 0);
 }

 VAR_18 = FUNC_8(VAR_14, VAR_15->sc_res[1], VAR_8 | VAR_9,
     ((void*)0), VAR_12, VAR_15, &VAR_15->sc_ih);
 if (VAR_18 != 0) {
  FUNC_12(VAR_14, "could not setup interrupt handler\n");
  FUNC_7(VAR_14, VAR_13, VAR_15->sc_res);
  FUNC_13(&VAR_15->sc_mtx);
  return (VAR_7);
 }

 FUNC_4(FUNC_5(FUNC_15(VAR_14)), VAR_14);
 return (0);
}
