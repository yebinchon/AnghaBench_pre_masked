
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sbuf {int dummy; } ;
struct bcm2835_rng_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct bcm2835_rng_softc*,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct bcm2835_rng_softc *VAR_20, struct sbuf *VAR_21)
{
 uint32_t VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26;


 VAR_25 = FUNC_0(VAR_20, VAR_7);
 FUNC_2(VAR_21, "RNG_CTRL (%08x)\n", VAR_25);

 VAR_22 = (VAR_25 & VAR_5) >> VAR_6;
 FUNC_2(VAR_21, "  RNG_COMBLK2_OSC (%02x)\n", VAR_22);
 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++)
  if ((VAR_22 & (1 << VAR_26)) == 0)
   FUNC_2(VAR_21, "    Oscillator %d enabled\n", VAR_26 + 1);

 VAR_23 = (VAR_25 & VAR_3) >> VAR_4;
 FUNC_2(VAR_21, "  RNG_COMBLK1_OSC (%02x)\n", VAR_23);
 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++)
  if ((VAR_23 & (1 << VAR_26)) == 0)
   FUNC_2(VAR_21, "    Oscillator %d enabled\n", VAR_26 + 1);

 VAR_24 = (VAR_25 & VAR_12) >>
     VAR_13;
 FUNC_2(VAR_21,
     "  RNG_JCLK_BYP_DIV_CNT (%02x)\n    APB clock frequency / %d\n",
     VAR_24, 2 * (VAR_24 + 1));

 FUNC_2(VAR_21, "  RNG_JCLK_BYP_SRC:\n    %s\n",
     (VAR_25 & VAR_15) ? "Use divided down APB clock" :
     "Use RNG clock (APB clock)");

 FUNC_2(VAR_21, "  RNG_JCLK_BYP_SEL:\n    %s\n",
     (VAR_25 & VAR_14) ? "Bypass internal jitter clock" :
     "Use internal jitter clock");

 if ((VAR_25 & VAR_17) != 0)
  FUNC_1(VAR_21, "  RNG_RBG2X: RNG 2X SPEED enabled\n");

 if ((VAR_25 & VAR_18) != 0)
  FUNC_1(VAR_21, "  RNG_RBGEN_BIT: RBG enabled\n");


 VAR_25 = FUNC_0(VAR_20, VAR_19);
 FUNC_2(VAR_21, "RNG_CTRL (%08x)\n", VAR_25);
 FUNC_2(VAR_21, "  RND_VAL: %02x\n",
     (VAR_25 >> VAR_1) & VAR_0);
 FUNC_2(VAR_21, "  RND_WARM_CNT: %05x\n", VAR_25 & VAR_2);


 VAR_25 = FUNC_0(VAR_20, VAR_8);
 FUNC_2(VAR_21, "RNG_FF_THRES: %05x\n", VAR_25 & VAR_9);


 VAR_25 = FUNC_0(VAR_20, VAR_10);
 FUNC_2(VAR_21, "RNG_INT_MASK: interrupt %s\n",
      ((VAR_25 & VAR_11) != 0) ? "disabled" : "enabled");
}
