
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_clk_m_sc {int flags; int mux_mask; int mux_shift; int offset; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 struct aw_clk_m_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, device_t VAR_2)
{
 struct aw_clk_m_sc *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_1);

 VAR_5 = 0;
 if ((VAR_3->flags & VAR_0) != 0) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_3->offset, &VAR_4);
  FUNC_1(VAR_1);

  VAR_5 = (VAR_4 & VAR_3->mux_mask) >> VAR_3->mux_shift;
 }

 FUNC_4(VAR_1, VAR_5);
 return (0);
}
