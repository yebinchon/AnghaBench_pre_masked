
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct rk_clk_composite_sc {scalar_t__ div_mask; scalar_t__ div_shift; scalar_t__ muxdiv_offset; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct clknode*,scalar_t__,scalar_t__) ;
 struct clknode* FUNC_3 (char const*) ;
 int FUNC_4 (struct clknode*,scalar_t__*) ;
 int FUNC_5 (struct clknode*) ;
 int FUNC_6 (struct clknode*) ;
 char** FUNC_7 (struct clknode*) ;
 int FUNC_8 (struct clknode*) ;
 struct rk_clk_composite_sc* FUNC_9 (struct clknode*) ;
 int FUNC_10 (struct clknode*,int) ;
 int FUNC_11 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_12 (struct rk_clk_composite_sc*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_13(struct clknode *VAR_5, uint64_t VAR_6, uint64_t *VAR_7,
    int VAR_8, int *VAR_9)
{
 struct rk_clk_composite_sc *VAR_10;
 struct clknode *VAR_11;
 const char **VAR_12;
 uint64_t VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 VAR_10 = FUNC_9(VAR_5);
 FUNC_11("Finding best parent/div for target freq of %ju\n", *VAR_7);
 VAR_12 = FUNC_7(VAR_5);
 for (VAR_17 = 0, VAR_13 = 0, VAR_20 = 0;
      VAR_20 != FUNC_8(VAR_5); VAR_20++) {
  VAR_11 = FUNC_3(VAR_12[VAR_20]);
  FUNC_4(VAR_11, &VAR_6);
  FUNC_11("Testing with parent %s (%d) at freq %ju\n",
      FUNC_5(VAR_11), VAR_20, VAR_6);
  VAR_15 = FUNC_12(VAR_10, VAR_6, *VAR_7, &VAR_16);
  VAR_14 = VAR_6 / VAR_15;
  if ((*VAR_7 - VAR_14) < (*VAR_7 - VAR_13)) {
   VAR_13 = VAR_14;
   VAR_17 = VAR_15;
   VAR_18 = VAR_16;
   VAR_21 = VAR_20;
   FUNC_11("Best parent so far %s (%d) with best freq at "
       "%ju\n", FUNC_5(VAR_11), VAR_20, VAR_13);
  }
 }

 *VAR_9 = 1;
 if (VAR_17 == 0)
  return (VAR_3);

 if ((VAR_13 < *VAR_7) && ((VAR_8 & VAR_1) == 0))
  return (VAR_3);

 if ((VAR_13 > *VAR_7) && ((VAR_8 & VAR_2) == 0)) {
  return (VAR_3);
 }

 if ((VAR_8 & VAR_0) != 0) {
  *VAR_7 = VAR_13;
  return (0);
 }

 VAR_20 = FUNC_6(VAR_5);
 if (VAR_20 != VAR_21) {
  FUNC_11("Switching parent index from %d to %d\n", VAR_20,
      VAR_21);
  FUNC_10(VAR_5, VAR_21);
 }

 FUNC_11("Setting divider to %d (reg: %d)\n", VAR_17, VAR_18);
 FUNC_11(" div_mask: 0x%X, div_shift: %d\n", VAR_10->div_mask,
     VAR_10->div_shift);

 FUNC_0(VAR_5);
 VAR_19 = VAR_18 << VAR_10->div_shift;
 VAR_19 |= VAR_10->div_mask << VAR_4;
 FUNC_11("Write: muxdiv_offset=%x, val=%x\n", VAR_10->muxdiv_offset, VAR_19);
 FUNC_2(VAR_5, VAR_10->muxdiv_offset, VAR_19);
 FUNC_1(VAR_5);

 *VAR_7 = VAR_13;
 return (0);
}
