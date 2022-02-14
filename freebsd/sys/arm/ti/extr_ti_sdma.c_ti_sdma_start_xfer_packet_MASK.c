
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; struct ti_sdma_channel* sc_channel; } ;
struct ti_sdma_channel {int reg_csdp; int reg_ccr; scalar_t__ need_reg_write; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (struct ti_sdma_softc*) ;
 int FUNC_14 (struct ti_sdma_softc*) ;
 int FUNC_15 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_3 ;
 int FUNC_16 (struct ti_sdma_softc*,int ,int) ;

int
FUNC_17(unsigned int VAR_4, unsigned int VAR_5,
                           unsigned long VAR_6, unsigned int VAR_7,
                           unsigned int VAR_8, unsigned int VAR_9)
{
 struct ti_sdma_softc *VAR_10 = VAR_3;
 struct ti_sdma_channel *VAR_11;
 uint32_t VAR_12;


 if (VAR_10 == ((void*)0))
  return (VAR_2);

 FUNC_13(VAR_10);

 if ((VAR_10->sc_active_channels & (1 << VAR_4)) == 0) {
  FUNC_14(VAR_10);
  return (VAR_1);
 }

 VAR_11 = &VAR_10->sc_channel[VAR_4];


 if (VAR_11->need_reg_write)
  FUNC_16(VAR_10, FUNC_7(VAR_4),
      VAR_11->reg_csdp | FUNC_8(1));


 FUNC_16(VAR_10, FUNC_5(VAR_4), VAR_8);


 FUNC_16(VAR_10, FUNC_6(VAR_4), VAR_7);


 FUNC_16(VAR_10, FUNC_12(VAR_4), VAR_5);
 FUNC_16(VAR_10, FUNC_4(VAR_4), VAR_6);


 FUNC_16(VAR_10, FUNC_0(VAR_4),
     VAR_11->reg_ccr | VAR_0);


 FUNC_16(VAR_10, FUNC_9(VAR_4), 0x0001);


 if (VAR_11->reg_ccr & FUNC_1(1))
  FUNC_16(VAR_10, FUNC_10(VAR_4), VAR_9);
 else
  FUNC_16(VAR_10, FUNC_3(VAR_4), VAR_9);


 FUNC_16(VAR_10, FUNC_2(VAR_4), 0x0001);


 FUNC_16(VAR_10, FUNC_11(VAR_4), 0x1FFE);


 VAR_12 = FUNC_15(VAR_10, FUNC_0(VAR_4));
 VAR_12 |= (1 << 7);
 FUNC_16(VAR_10, FUNC_0(VAR_4), VAR_12);


 VAR_11->need_reg_write = 0;

 FUNC_14(VAR_10);

 return (0);
}
