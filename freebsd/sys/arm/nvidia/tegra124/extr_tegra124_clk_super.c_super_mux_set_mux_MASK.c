
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct super_mux_sc {int mux; int flags; int src_div2; int src_pllx; int base_reg; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct super_mux_sc*) ;
 int FUNC_1 (struct super_mux_sc*) ;
 int FUNC_2 (struct super_mux_sc*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct super_mux_sc*,int ,int) ;
 struct super_mux_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct clknode *VAR_5, int VAR_6)
{

 struct super_mux_sc *VAR_7;
 int VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_7 = FUNC_4(VAR_5);

 FUNC_0(VAR_7);
 FUNC_2(VAR_7, VAR_7->base_reg, &VAR_10);
 VAR_9 = FUNC_6(VAR_10);

 if ((VAR_9 != VAR_4) &&
     (VAR_9 != VAR_3)) {
  FUNC_5("Unexpected super mux state: %u", VAR_9);
 }
 VAR_8 = (VAR_9 - 1) * VAR_2;
 VAR_7->mux = VAR_6;
 if (VAR_7->flags & VAR_0) {
  if (VAR_6 == VAR_7->src_div2) {
   VAR_6 = VAR_7->src_pllx;
   VAR_10 &= ~VAR_1;
   FUNC_3(VAR_7, VAR_7->base_reg, VAR_10);
   FUNC_2(VAR_7, VAR_7->base_reg, &VAR_11);
  } else if (VAR_6 == VAR_7->src_pllx) {
   VAR_10 = VAR_1;
   FUNC_3(VAR_7, VAR_7->base_reg, VAR_10);
   FUNC_2(VAR_7, VAR_7->base_reg, &VAR_11);
  }
 }
 VAR_10 &= ~(((1 << VAR_2) - 1) << VAR_8);
 VAR_10 |= VAR_6 << VAR_8;

 FUNC_3(VAR_7, VAR_7->base_reg, VAR_10);
 FUNC_2(VAR_7, VAR_7->base_reg, &VAR_11);
 FUNC_1(VAR_7);

 return(0);
}
