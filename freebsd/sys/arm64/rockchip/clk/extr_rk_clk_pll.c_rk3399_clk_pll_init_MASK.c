
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_pll_sc {scalar_t__ base_offset; scalar_t__ normal_mode; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct clknode*,scalar_t__,int) ;
 struct rk_clk_pll_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_3(struct clknode *VAR_6, device_t VAR_7)
{
 struct rk_clk_pll_sc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_1(VAR_6);

 if (VAR_8->normal_mode) {

  VAR_9 = VAR_1 << VAR_3;
  VAR_9 |= VAR_0 << VAR_5;
  FUNC_0(VAR_6, VAR_8->base_offset + VAR_2,
      VAR_9 | VAR_4);
 }

 FUNC_2(VAR_6, 0);

 return (0);
}
