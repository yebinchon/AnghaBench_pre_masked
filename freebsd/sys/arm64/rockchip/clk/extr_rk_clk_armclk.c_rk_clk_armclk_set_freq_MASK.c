
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct rk_clk_armclk_sc {size_t main_parent; int nrates; int div_shift; int div_mask; char* muxdiv_offset; TYPE_1__* rates; } ;
struct clknode {int dummy; } ;
struct TYPE_2__ {int freq; int div; } ;


 int VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int VAR_1 ;
 int FUNC_2 (struct clknode*,char*,int) ;
 struct clknode* FUNC_3 (char const*) ;
 int FUNC_4 (struct clknode*,int*) ;
 char* FUNC_5 (struct clknode*) ;
 char** FUNC_6 (struct clknode*) ;
 struct rk_clk_armclk_sc* FUNC_7 (struct clknode*) ;
 int FUNC_8 (struct clknode*,int,int ,int) ;
 int FUNC_9 (struct clknode*,size_t) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_12(struct clknode *VAR_2, uint64_t VAR_3, uint64_t *VAR_4,
    int VAR_5, int *VAR_6)
{
 struct rk_clk_armclk_sc *VAR_7;
 struct clknode *VAR_8;
 const char **VAR_9;
 uint64_t VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_7 = FUNC_7(VAR_2);

 FUNC_10("Finding best parent/div for target freq of %ju\n", *VAR_4);
 VAR_9 = FUNC_6(VAR_2);
 VAR_8 = FUNC_3(VAR_9[VAR_7->main_parent]);

 for (VAR_15 = 0; VAR_15 < VAR_7->nrates; VAR_15++) {
  if (VAR_7->rates[VAR_15].freq == *VAR_4) {
   VAR_10 = VAR_7->rates[VAR_15].freq;
   VAR_12 = VAR_7->rates[VAR_15].div;
   VAR_11 = VAR_10 * VAR_12;
   VAR_16 = VAR_15;
   FUNC_10("Best parent %s (%d) with best freq at %ju\n",
       FUNC_5(VAR_8),
       VAR_7->main_parent,
       VAR_10);
   break;
  }
 }

 if (VAR_16 == VAR_7->nrates)
  return (0);

 if ((VAR_5 & VAR_0) != 0) {
  *VAR_4 = VAR_10;
  *VAR_6 = 1;
  return (0);
 }

 FUNC_10("Changing parent (%s) freq to %ju\n", FUNC_5(VAR_8),
     VAR_11);
 VAR_14 = FUNC_8(VAR_8, VAR_11, 0, 1);
 if (VAR_14 != 0)
  FUNC_11("Cannot set %s to %ju\n",
      FUNC_5(VAR_8),
      VAR_11);

 FUNC_9(VAR_2, VAR_7->main_parent);

 FUNC_4(VAR_8, &VAR_11);
 FUNC_10("main parent freq at %ju\n", VAR_11);
 FUNC_0(VAR_2);
 VAR_13 |= (VAR_12 - 1) << VAR_7->div_shift;
 VAR_13 |= VAR_7->div_mask << VAR_1;
 FUNC_10("Write: muxdiv_offset=%x, val=%x\n", VAR_7->muxdiv_offset, VAR_13);
 FUNC_2(VAR_2, VAR_7->muxdiv_offset, VAR_13);
 FUNC_1(VAR_2);

 *VAR_4 = VAR_10;
 *VAR_6 = 1;

 return (0);
}
