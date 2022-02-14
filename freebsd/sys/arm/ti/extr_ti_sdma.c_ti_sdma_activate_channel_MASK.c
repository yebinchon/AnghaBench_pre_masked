
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ti_sdma_softc {int sc_active_channels; struct ti_sdma_channel* sc_channel; } ;
struct ti_sdma_channel {void (* callback ) (unsigned int,uint32_t,void*) ;int need_reg_write; int reg_csdp; int reg_ccr; int reg_cicr; void* callback_data; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_17 (struct ti_sdma_softc*) ;
 int FUNC_18 (struct ti_sdma_softc*) ;
 struct ti_sdma_softc* VAR_7 ;
 int FUNC_19 (struct ti_sdma_softc*,scalar_t__,int) ;

int
FUNC_20(unsigned int *VAR_8,
                          void (*VAR_9)(unsigned int VAR_10, uint32_t VAR_11, void *VAR_12),
                          void *VAR_13)
{
 struct ti_sdma_softc *VAR_14 = VAR_7;
 struct ti_sdma_channel *VAR_15 = ((void*)0);
 uint32_t VAR_16;
 unsigned int VAR_17;


 if (VAR_14 == ((void*)0))
  return (VAR_5);

 if (VAR_8 == ((void*)0))
  return (VAR_4);

 FUNC_17(VAR_14);


 if (VAR_14->sc_active_channels == 0xffffffff) {
  FUNC_18(VAR_14);
  return (VAR_5);
 }


 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  if (!(VAR_14->sc_active_channels & (0x1 << VAR_17))) {
   VAR_14->sc_active_channels |= (0x1 << VAR_17);
   *VAR_8 = VAR_17;
   break;
  }
 }


 VAR_15 = &VAR_14->sc_channel[*VAR_8];

 VAR_15->callback = VAR_9;
 VAR_15->callback_data = VAR_13;

 VAR_15->need_reg_write = 1;


 VAR_15->reg_csdp = FUNC_9(0x2)
  | FUNC_13(0)
  | FUNC_10(0)
  | FUNC_14(0)
  | FUNC_11(0)
  | FUNC_16(0)
  | FUNC_15(0)
  | FUNC_12(0);

 VAR_15->reg_ccr = FUNC_2(1)
  | FUNC_5(1)
  | FUNC_4(0)
  | FUNC_7(0)
  | FUNC_6(0)
  | FUNC_3(0)
  | FUNC_1(0);

 VAR_15->reg_cicr = VAR_3
  | VAR_1
  | VAR_2
  | VAR_0;


 for (VAR_16 = FUNC_0(*VAR_8); VAR_16 <= FUNC_8(*VAR_8); VAR_16 += 4)
  FUNC_19(VAR_14, VAR_16, 0x00000000);

 FUNC_18(VAR_14);

 return 0;
}
