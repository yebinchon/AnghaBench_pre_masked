
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_clk_mipi_sc {int gate_shift; int offset; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int FUNC_3 (struct clknode*,int ,int) ;
 struct aw_clk_mipi_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_2, bool VAR_3)
{
 struct aw_clk_mipi_sc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_4(VAR_2);

 FUNC_5("%sabling gate\n", VAR_3 ? "En" : "Dis");
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_4->offset, &VAR_5);
 if (VAR_3) {
  VAR_5 |= (1 << VAR_4->gate_shift);
  VAR_5 |= (1 << VAR_0);
  VAR_5 |= (1 << VAR_1);
 } else {
  VAR_5 &= ~(1 << VAR_4->gate_shift);
  VAR_5 &= ~(1 << VAR_0);
  VAR_5 &= ~(1 << VAR_1);
 }
 FUNC_3(VAR_2, VAR_4->offset, VAR_5);
 FUNC_1(VAR_2);

 return (0);
}
