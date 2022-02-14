
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_clk_otg_sc {int dummy; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_clk_otg_sc*) ;
 int FUNC_1 (struct jz4780_clk_otg_sc*,int ) ;
 int FUNC_2 (struct jz4780_clk_otg_sc*) ;
 int FUNC_3 (struct jz4780_clk_otg_sc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jz4780_clk_otg_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_3, device_t VAR_4)
{
 struct jz4780_clk_otg_sc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_4(VAR_3);
 FUNC_0(VAR_5);

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_1;
 FUNC_3(VAR_5, VAR_0, VAR_6);
 FUNC_2(VAR_5);

 FUNC_5(VAR_3, 0);
 return (0);
}
