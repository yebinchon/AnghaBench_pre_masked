
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; struct ti_sdma_channel* sc_channel; } ;
struct ti_sdma_channel {int reg_csdp; int reg_ccr; scalar_t__ need_reg_write; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (struct ti_sdma_softc*) ;
 int FUNC_13 (struct ti_sdma_softc*) ;
 int FUNC_14 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_2 ;
 int FUNC_15 (struct ti_sdma_softc*,int ,int) ;

int
FUNC_16(unsigned int VAR_3, unsigned int VAR_4,
                    unsigned long VAR_5,
                    unsigned int VAR_6, unsigned int VAR_7)
{
 struct ti_sdma_softc *VAR_8 = VAR_2;
 struct ti_sdma_channel *VAR_9;
 uint32_t VAR_10;


 if (VAR_8 == ((void*)0))
  return (VAR_1);

 FUNC_12(VAR_8);

 if ((VAR_8->sc_active_channels & (1 << VAR_3)) == 0) {
  FUNC_13(VAR_8);
  return (VAR_0);
 }

 VAR_9 = &VAR_8->sc_channel[VAR_3];


 FUNC_15(VAR_8, FUNC_6(VAR_3),
     VAR_9->reg_csdp | FUNC_7(1));


 FUNC_15(VAR_8, FUNC_4(VAR_3), VAR_7);


 FUNC_15(VAR_8, FUNC_5(VAR_3), VAR_6);


 FUNC_15(VAR_8, FUNC_11(VAR_3), VAR_4);
 FUNC_15(VAR_8, FUNC_3(VAR_3), VAR_5);


 FUNC_15(VAR_8, FUNC_0(VAR_3), VAR_9->reg_ccr);


 FUNC_15(VAR_8, FUNC_8(VAR_3), 0x0001);


 FUNC_15(VAR_8, FUNC_9(VAR_3), 0x0001);


 FUNC_15(VAR_8, FUNC_1(VAR_3), 0x0001);


 FUNC_15(VAR_8, FUNC_2(VAR_3), 0x0001);


 FUNC_15(VAR_8, FUNC_10(VAR_3), 0x1FFE);


 VAR_10 = FUNC_14(VAR_8, FUNC_0(VAR_3));
 VAR_10 |= (1 << 7);
 FUNC_15(VAR_8, FUNC_0(VAR_3), VAR_10);


 VAR_9->need_reg_write = 0;

 FUNC_13(VAR_8);

 return (0);
}
