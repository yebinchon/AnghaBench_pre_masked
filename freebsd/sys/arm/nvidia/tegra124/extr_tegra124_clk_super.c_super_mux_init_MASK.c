
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct super_mux_sc {int mux; int flags; int src_pllx; int src_div2; int base_reg; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct super_mux_sc*) ;
 int FUNC_1 (struct super_mux_sc*) ;
 int FUNC_2 (struct super_mux_sc*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct super_mux_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct clknode *VAR_5, device_t VAR_6)
{
 struct super_mux_sc *VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_7);
 FUNC_2(VAR_7, VAR_7->base_reg, &VAR_8);
 FUNC_1(VAR_7);
 VAR_10 = FUNC_6(VAR_8);

 if ((VAR_10 != VAR_4) &&
     (VAR_10 != VAR_3)) {
  FUNC_5("Unexpected super mux state: %u", VAR_10);
 }

 VAR_9 = VAR_10 * VAR_2;

 VAR_7->mux = (VAR_8 >> VAR_9) & ((1 << VAR_2) - 1);





 if (VAR_7->flags & VAR_0) {
  if (((VAR_8 & VAR_1) == 0) &&
      (VAR_7->mux == VAR_7->src_pllx))
  VAR_7->mux = VAR_7->src_div2;
 }
 FUNC_4(VAR_5, VAR_7->mux);

 return(0);
}
